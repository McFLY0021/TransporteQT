#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "viaje.h"
#include "viajeinterprovinciales.h"

#include "camionantiguo.h"
#include "camionmoderno.h"

#include "trabajadoradmin.h"
#include "trabajadorchofer.h"

#include <QList>
#include <QMessageBox>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    //Funciones a implementar
    double volumenSemanal();
    double kmSemanal();
    double distanciaPromedio(QString chapa);
    QList<Viaje> datosViaje(QString chapa);
    double cargaTransportada(QString chapa);
    int cantidadVisitadas(QString chapa);
    QString camionMayorProvinciaViaje();
    QString camionMayorcantidadTransportada();
    bool existeCamion(Camion* camion);
    bool existeTrabajador(Trabajador* trabajador);

    //Funciones de actualizacion visual de las tablas
    void visualizarCamiones();
    void visualizarTrabajadores();

  private slots: //Eventos
    void on_antiguo_toggled(bool checked);
    void on_moderno_toggled(bool checked);
    void on_admin_toggled(bool checked);
    void on_chofer_toggled(bool checked);
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

  private:
    Ui::MainWindow *ui;

    //Estructuras de datos
    QList <Viaje*> viajes;
    QList <Trabajador*> trabajadores;
    QList <Camion*> camiones;
};

#endif // MAINWINDOW_H
