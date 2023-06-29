#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}

double MainWindow::volumenSemanal()
{
  double volumenSemanal = 0;
  for (int var = 0; var < viajes.size(); ++var) {
    if(viajes.at(var)->getFechaInicio().date().weekNumber() == QDateTime::currentDateTime().date().weekNumber())
    {
      volumenSemanal = volumenSemanal + viajes.at(var)->getCargaTransportada();
    }
  }
  return volumenSemanal;
}

double MainWindow::kmSemanal()
{
  double kmSemanal = 0;
  for (int var = 0; var < viajes.size(); ++var) {
    if(viajes.at(var)->getFechaInicio().date().weekNumber() == QDateTime::currentDateTime().date().weekNumber())
    {
      kmSemanal = kmSemanal + viajes.at(var)->getKmRecorrido();
    }
  }
  return kmSemanal;
}

double MainWindow::distanciaPromedio(QString chapa)
{
  double distanciaPro = 0;
  int count = 0;

  for (int var = 0; var < viajes.size(); ++var) {
    if(viajes.at(var)->getFechaInicio().date().weekNumber() == QDateTime::currentDateTime().date().weekNumber())
    {
      if(viajes.at(var)->getCamion().getChapa() == chapa)
      {
        count++;
        distanciaPro = distanciaPro + viajes.at(var)->getKmRecorrido();
      }
    }
  }
  return distanciaPro/count;
}

QList <Viaje> MainWindow::datosViaje(QString chapa)
{
  QList <Viaje> viajes;
  for (int var = 0; var < viajes.size(); ++var) {
    if(viajes.at(var).getFechaInicio().date().weekNumber() == QDateTime::currentDateTime().date().weekNumber())
    {
      if(viajes.at(var).getCamion().getChapa() == chapa)
      {
        viajes.append(viajes.at(var));
      }
    }
  }
  return viajes;
}

QString MainWindow::camionMayorcantidadTransportada()
{
  double cantidad = 0;
  QString chapa;
  for (int var = 0; var < camiones.size(); ++var) {
    double cantTemp = cargaTransportada(camiones.at(var)->getChapa());
    if(cantidad < cantTemp)
    {
      chapa = camiones.at(var)->getChapa();
      cantidad = cantTemp;
    }
  }
  return chapa;
}

bool MainWindow::existeCamion(Camion *camion)
{
  foreach (Camion* c, camiones) {
    if(c->getChapa() == camion->getChapa())
      return true;
  }
  return false;
}

bool MainWindow::existeTrabajador(Trabajador *trabajador)
{
  foreach (Trabajador* t, trabajadores) {
    if(t->getCI() == trabajador->getCI())
      return true;
  }
  return false;
}


void MainWindow::visualizarCamiones()
{

  //Aqui se actualiza la vista de la tabla de Camiones en la pagina Camiones y el combo
  //de camiones en la pagina de Viajes

  ui->listaCamiones->clearContents();
  ui->listaCamiones->setRowCount(camiones.size());
  ui->cbcamiones->clear();

  QStringList comboItems;

  for (int i = 0; i < camiones.size(); ++i) {

    //Para llenar el combo de camiones la pagina de viajes con el formato "marca - chapa"
    QString item = QString("%1 - %2").arg(camiones.at(i)->getMarca()).arg(camiones.at(i)->getChapa());
    comboItems.append(item);

    QTableWidgetItem *column_chapa = new QTableWidgetItem(camiones.at(i)->getChapa());
    column_chapa->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    ui->listaCamiones->setItem(i, 1, column_chapa);

    QTableWidgetItem *column_marca = new QTableWidgetItem(camiones.at(i)->getMarca());
    column_marca->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    ui->listaCamiones->setItem(i, 2, column_marca);


    QTableWidgetItem *column_tipo_camion = new QTableWidgetItem();
    QTableWidgetItem *column_fabricacion = new QTableWidgetItem();
    QTableWidgetItem *column_cant_reparaciones = new QTableWidgetItem();
    QTableWidgetItem *column_gasto_kmh = new QTableWidgetItem();
    column_tipo_camion->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);


    if(typeid(*camiones.at(i)) == typeid(CamionAntiguo)){
      column_tipo_camion->setText("Antiguo");
      CamionAntiguo* camion = dynamic_cast<CamionAntiguo*>(camiones.at(i));
      column_fabricacion->setText(QString::number(camion->getAnnoFabricacion()));
      column_cant_reparaciones->setText(QString::number(camion->getCantidadReparaciones()));
      column_gasto_kmh->setText("-");
      column_gasto_kmh->setFlags(Qt::ItemIsSelectable);
      column_fabricacion->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
      column_cant_reparaciones->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    }
    else
    {
      column_tipo_camion->setText("Moderno");
      CamionModerno* camion = dynamic_cast<CamionModerno*>(camiones.at(i));
      column_fabricacion->setText("-");
      column_cant_reparaciones->setText("-");
      column_gasto_kmh->setText(QString::number(camion->getGastoKmxLitro()));
      column_gasto_kmh->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
      column_fabricacion->setFlags(Qt::ItemIsSelectable);
      column_cant_reparaciones->setFlags(Qt::ItemIsSelectable);
    }

    ui->listaCamiones->setItem(i, 0, column_tipo_camion);
    ui->listaCamiones->setItem(i, 3, column_fabricacion);
    ui->listaCamiones->setItem(i, 4, column_cant_reparaciones);
    ui->listaCamiones->setItem(i, 5, column_gasto_kmh);

  }


  ui->cbcamiones->addItems(comboItems);

}

void MainWindow::visualizarTrabajadores()
{

  ui->listaTrabajadores->clearContents();
  ui->listaTrabajadores->setRowCount(trabajadores.size());


  for (int i = 0; i < trabajadores.size(); ++i) {

    QTableWidgetItem *column_nombre = new QTableWidgetItem(trabajadores.at(i)->getNombre());
    column_nombre->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    ui->listaTrabajadores->setItem(i, 1, column_nombre);

    QTableWidgetItem *column_ci = new QTableWidgetItem(trabajadores.at(i)->getCI());
    column_ci->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    ui->listaTrabajadores->setItem(i, 2, column_ci);

    QTableWidgetItem *column_telefono = new QTableWidgetItem(trabajadores.at(i)->getTelefono());
    column_telefono->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    ui->listaTrabajadores->setItem(i, 3, column_telefono);

    QTableWidgetItem *column_direccion = new QTableWidgetItem(trabajadores.at(i)->getDireccion());
    column_direccion->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    ui->listaTrabajadores->setItem(i, 4, column_direccion);

    QTableWidgetItem *column_nivel_escolar = new QTableWidgetItem(trabajadores.at(i)->getNivelEscolar());
    column_nivel_escolar->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    ui->listaTrabajadores->setItem(i, 5, column_nivel_escolar);

    QTableWidgetItem *column_anno_experiencia = new QTableWidgetItem(QString::number(trabajadores.at(i)->getAnnoExperiencia()));
    column_anno_experiencia->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    ui->listaTrabajadores->setItem(i, 6, column_anno_experiencia);

    QTableWidgetItem *column_salario_base = new QTableWidgetItem(QString::number(trabajadores.at(i)->getSalarioB()));
    column_salario_base->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    ui->listaTrabajadores->setItem(i, 7, column_salario_base);

    QTableWidgetItem *column_cant_dias = new QTableWidgetItem(QString::number(trabajadores.at(i)->getCantidadDias()));
    column_cant_dias->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    ui->listaTrabajadores->setItem(i, 8, column_cant_dias);


    QTableWidgetItem *column_tipo_trabajador = new QTableWidgetItem();
    QTableWidgetItem *column_cargo = new QTableWidgetItem();
    column_tipo_trabajador->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);


    if(typeid(*trabajadores.at(i)) == typeid(TrabajadorAdmin)){
      column_tipo_trabajador->setText("Administrador");
      TrabajadorAdmin* trabajador = dynamic_cast<TrabajadorAdmin*>(trabajadores.at(i));
      column_cargo->setText(trabajador->getCargo());
      column_cargo->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

//      column_gasto_kmh->setText("-");
//      column_gasto_kmh->setFlags(Qt::ItemIsSelectable);
//      column_fabricacion->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
//      column_cant_reparaciones->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
    }
    else
    {
      column_tipo_trabajador->setText("Chofer");
      TrabajadorChofer* camion = dynamic_cast<TrabajadorChofer*>(trabajadores.at(i));
      column_cargo->setText("-");
      column_cargo->setFlags(Qt::ItemIsSelectable);

//      column_cant_reparaciones->setText("-");
//      column_gasto_kmh->setText(QString::number(camion->getGastoKmxLitro()));
//      column_gasto_kmh->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
//      column_cant_reparaciones->setFlags(Qt::ItemIsSelectable);
    }

    ui->listaTrabajadores->setItem(i, 0, column_tipo_trabajador);
    ui->listaTrabajadores->setItem(i, 9, column_cargo);

  }

}

double MainWindow::cargaTransportada(QString chapa)
{
  double carga = 0;

  for (int var = 0; var < viajes.size(); ++var) {
    if(viajes.at(var)->getFechaInicio().date().weekNumber() == QDateTime::currentDateTime().date().weekNumber())
    {
      if(viajes.at(var)->getCamion().getChapa() == chapa)
      {
        carga = carga + viajes.at(var)->getCargaTransportada();
      }
    }
  }
  return carga;
}

QString MainWindow::camionMayorProvinciaViaje()
{
  double visita = 0;
  QString chapa;
  for (int var = 0; var < camiones.size(); ++var) {

    int visitaTemp = cantidadVisitadas(camiones.at(var)->getChapa());
    if(visita < visitaTemp)
    {
      chapa = camiones.at(var)->getChapa();
      visita = visitaTemp;
    }
  }
  return chapa;
}

int MainWindow::cantidadVisitadas(QString chapa)
{
  int visitas = 0;

  for (int var = 0; var < viajes.size(); ++var) {
    ViajeInterProvinciales* v = static_cast<ViajeInterProvinciales*> (viajes.at(var));
    if(v && chapa == v->getCamion().getChapa())
    {
      visitas = v->getCantidadProvincia();
    }
  }
  return visitas;
}
/*
•	Un listado de los camiones modernos ordenado respecto a la distancia total recorrida  en la semana.
•	El (los) camión(es) que visitaron mas provincias en un viaje.
•	Almacene en un solo fichero los viajes que se realizan en la empresa. Cada línea del fichero representa un viaje. Muestre los datos del fichero.
•	Generar la nómina de pago de la empresa en un fichero, La nómina tendrá el siguiente formato:
Carne de identidad1			sueldo1
Carne de identidad2			sueldo2
Carne de identidad3			sueldo3
… muestre la nómina por pantalla también.
*/

void MainWindow::on_antiguo_toggled(bool checked)
{
  ui->reparaciones->setEnabled(checked);
  ui->fabricacion->setEnabled(checked);
  ui->reparaciones->clear();
  ui->fabricacion->clear();
  ui->lreparaciones->setEnabled(checked);
  ui->lfabricacion->setEnabled(checked);
}

void MainWindow::on_moderno_toggled(bool checked)
{
  ui->gasto->setEnabled(checked);
  ui->gasto->clear();
  ui->lgasto->setEnabled(checked);
}

void MainWindow::on_pushButton_clicked()
{
  if(ui->antiguo->isChecked())
  {
    CamionAntiguo* camion = new CamionAntiguo();
    camion->setChapa(ui->chapa->text());
    camion->setMarca(ui->marca->text());
    camion->setAnnoFabricacion(ui->fabricacion->text().toInt());
    camion->setCantidadReparaciones(ui->reparaciones->text().toInt());

    if(!existeCamion(camion))
      camiones.append(camion);
    else
      QMessageBox::information(this,"Información",tr("Ya hay un camión con chapa %1").arg(camion->getChapa()));
  }

  if(ui->moderno->isChecked())
  {
    CamionModerno* camion = new CamionModerno();
    camion->setChapa(ui->chapa->text());
    camion->setMarca(ui->marca->text());
    camion->setGastoKmxLitro(ui->gasto->text().toFloat());

    if(!existeCamion(camion))
      camiones.append(camion);
    else
      QMessageBox::information(this,"Información",tr("Ya hay un camión con chapa %1").arg(camion->getChapa()));

  }

  visualizarCamiones();
}

void MainWindow::on_admin_toggled(bool checked)
{
  ui->cargo->setEnabled(checked);
  ui->cargo->clear();
  ui->lcargo->setEnabled(checked);
}

void MainWindow::on_chofer_toggled(bool checked)
{

}

void MainWindow::on_pushButton_2_clicked()
{

  if(ui->admin->isChecked())
  {
    TrabajadorAdmin* trabajador = new TrabajadorAdmin();
    trabajador->setNombre(ui->nombre->text());
    trabajador->setCI(ui->ci->text());
    trabajador->setTelefono(ui->telefono->text());
    trabajador->setDireccion(ui->direccion->text());
    trabajador->setNivelEscolar(ui->nescolar->text());
    trabajador->setAnnoExperiencia(ui->experiencia->text().toInt());
    trabajador->setSalarioB(ui->salariobase->text().toFloat());
    trabajador->setCantidadDias(ui->cantdias->text().toInt());
    trabajador->setCargo(ui->cargo->text());

    if(!existeTrabajador(trabajador))
      trabajadores.append(trabajador);
    else
      QMessageBox::information(this,"Información",tr("El trabajador con CI %1 ya existe").arg(trabajador->getCI()));
  }

  if(ui->chofer->isChecked())
  {
    TrabajadorChofer* trabajador = new TrabajadorChofer();
    trabajador->setNombre(ui->nombre->text());
    trabajador->setCI(ui->ci->text());
    trabajador->setTelefono(ui->telefono->text());
    trabajador->setDireccion(ui->direccion->text());
    trabajador->setNivelEscolar(ui->nescolar->text());
    trabajador->setAnnoExperiencia(ui->experiencia->text().toInt());
    trabajador->setSalarioB(ui->salariobase->text().toFloat());
    trabajador->setCantidadDias(ui->cantdias->text().toInt());

    if(!existeTrabajador(trabajador))
      trabajadores.append(trabajador);
    else
       QMessageBox::information(this,"Información",tr("El trabajador con CI %1 ya existe").arg(trabajador->getCI()));

  }

  visualizarTrabajadores();

}
