/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionMedios_de_transporte;
    QAction *actionTrabajadores;
    QAction *actionGestion_de_viajes;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_8;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *antiguo;
    QRadioButton *moderno;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *lchapa;
    QLineEdit *chapa;
    QLabel *lmarca;
    QLineEdit *marca;
    QLabel *lfabricacion;
    QLineEdit *fabricacion;
    QLabel *lreparaciones;
    QLineEdit *reparaciones;
    QLabel *lgasto;
    QLineEdit *gasto;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QTableWidget *listaCamiones;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *admin;
    QRadioButton *chofer;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_2;
    QLabel *lnombre;
    QLineEdit *nombre;
    QLabel *lci;
    QLineEdit *ci;
    QLabel *ltelefono;
    QLineEdit *telefono;
    QLabel *ldireccion;
    QLineEdit *direccion;
    QLabel *lnescolar;
    QLineEdit *nescolar;
    QLabel *lexperiencia;
    QLineEdit *experiencia;
    QLabel *lsalariobase;
    QLineEdit *salariobase;
    QLabel *lcantdias;
    QLineEdit *cantdias;
    QLabel *lcargo;
    QLineEdit *cargo;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_2;
    QTableWidget *listaTrabajadores;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *interprovincial;
    QRadioButton *otro;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_3;
    QLabel *lchapa_3;
    QLabel *lmarca_3;
    QLabel *lfabricacion_3;
    QLineEdit *cargatransportada;
    QLabel *lreparaciones_3;
    QLineEdit *kmrecorrido;
    QLabel *lgasto_3;
    QComboBox *cbcamiones;
    QDateEdit *fechainicio;
    QDateEdit *fechafin;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_3;
    QTableWidget *listaviajes;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(605, 596);
        actionMedios_de_transporte = new QAction(MainWindow);
        actionMedios_de_transporte->setObjectName(QString::fromUtf8("actionMedios_de_transporte"));
        actionTrabajadores = new QAction(MainWindow);
        actionTrabajadores->setObjectName(QString::fromUtf8("actionTrabajadores"));
        actionGestion_de_viajes = new QAction(MainWindow);
        actionGestion_de_viajes->setObjectName(QString::fromUtf8("actionGestion_de_viajes"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_8 = new QHBoxLayout(centralWidget);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout_3 = new QHBoxLayout(tab);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        antiguo = new QRadioButton(tab);
        antiguo->setObjectName(QString::fromUtf8("antiguo"));
        antiguo->setChecked(true);

        horizontalLayout_2->addWidget(antiguo);

        moderno = new QRadioButton(tab);
        moderno->setObjectName(QString::fromUtf8("moderno"));

        horizontalLayout_2->addWidget(moderno);

        horizontalSpacer = new QSpacerItem(378, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lchapa = new QLabel(tab);
        lchapa->setObjectName(QString::fromUtf8("lchapa"));

        gridLayout->addWidget(lchapa, 0, 0, 1, 1);

        chapa = new QLineEdit(tab);
        chapa->setObjectName(QString::fromUtf8("chapa"));

        gridLayout->addWidget(chapa, 0, 1, 1, 1);

        lmarca = new QLabel(tab);
        lmarca->setObjectName(QString::fromUtf8("lmarca"));

        gridLayout->addWidget(lmarca, 1, 0, 1, 1);

        marca = new QLineEdit(tab);
        marca->setObjectName(QString::fromUtf8("marca"));

        gridLayout->addWidget(marca, 1, 1, 1, 1);

        lfabricacion = new QLabel(tab);
        lfabricacion->setObjectName(QString::fromUtf8("lfabricacion"));

        gridLayout->addWidget(lfabricacion, 2, 0, 1, 1);

        fabricacion = new QLineEdit(tab);
        fabricacion->setObjectName(QString::fromUtf8("fabricacion"));

        gridLayout->addWidget(fabricacion, 2, 1, 1, 1);

        lreparaciones = new QLabel(tab);
        lreparaciones->setObjectName(QString::fromUtf8("lreparaciones"));

        gridLayout->addWidget(lreparaciones, 3, 0, 1, 1);

        reparaciones = new QLineEdit(tab);
        reparaciones->setObjectName(QString::fromUtf8("reparaciones"));

        gridLayout->addWidget(reparaciones, 3, 1, 1, 1);

        lgasto = new QLabel(tab);
        lgasto->setObjectName(QString::fromUtf8("lgasto"));
        lgasto->setEnabled(false);

        gridLayout->addWidget(lgasto, 4, 0, 1, 1);

        gasto = new QLineEdit(tab);
        gasto->setObjectName(QString::fromUtf8("gasto"));
        gasto->setEnabled(false);

        gridLayout->addWidget(gasto, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(418, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        listaCamiones = new QTableWidget(tab);
        if (listaCamiones->columnCount() < 6)
            listaCamiones->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        listaCamiones->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        listaCamiones->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        listaCamiones->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        listaCamiones->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        listaCamiones->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        listaCamiones->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        listaCamiones->setObjectName(QString::fromUtf8("listaCamiones"));
        listaCamiones->setSelectionBehavior(QAbstractItemView::SelectRows);
        listaCamiones->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(listaCamiones);


        horizontalLayout_3->addLayout(verticalLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        admin = new QRadioButton(tab_2);
        admin->setObjectName(QString::fromUtf8("admin"));
        admin->setChecked(true);

        horizontalLayout_4->addWidget(admin);

        chofer = new QRadioButton(tab_2);
        chofer->setObjectName(QString::fromUtf8("chofer"));

        horizontalLayout_4->addWidget(chofer);

        horizontalSpacer_3 = new QSpacerItem(378, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lnombre = new QLabel(tab_2);
        lnombre->setObjectName(QString::fromUtf8("lnombre"));

        gridLayout_2->addWidget(lnombre, 0, 0, 1, 1);

        nombre = new QLineEdit(tab_2);
        nombre->setObjectName(QString::fromUtf8("nombre"));

        gridLayout_2->addWidget(nombre, 0, 1, 1, 1);

        lci = new QLabel(tab_2);
        lci->setObjectName(QString::fromUtf8("lci"));

        gridLayout_2->addWidget(lci, 1, 0, 1, 1);

        ci = new QLineEdit(tab_2);
        ci->setObjectName(QString::fromUtf8("ci"));

        gridLayout_2->addWidget(ci, 1, 1, 1, 1);

        ltelefono = new QLabel(tab_2);
        ltelefono->setObjectName(QString::fromUtf8("ltelefono"));

        gridLayout_2->addWidget(ltelefono, 2, 0, 1, 1);

        telefono = new QLineEdit(tab_2);
        telefono->setObjectName(QString::fromUtf8("telefono"));

        gridLayout_2->addWidget(telefono, 2, 1, 1, 1);

        ldireccion = new QLabel(tab_2);
        ldireccion->setObjectName(QString::fromUtf8("ldireccion"));

        gridLayout_2->addWidget(ldireccion, 3, 0, 1, 1);

        direccion = new QLineEdit(tab_2);
        direccion->setObjectName(QString::fromUtf8("direccion"));

        gridLayout_2->addWidget(direccion, 3, 1, 1, 1);

        lnescolar = new QLabel(tab_2);
        lnescolar->setObjectName(QString::fromUtf8("lnescolar"));
        lnescolar->setEnabled(true);

        gridLayout_2->addWidget(lnescolar, 4, 0, 1, 1);

        nescolar = new QLineEdit(tab_2);
        nescolar->setObjectName(QString::fromUtf8("nescolar"));
        nescolar->setEnabled(true);

        gridLayout_2->addWidget(nescolar, 4, 1, 1, 1);

        lexperiencia = new QLabel(tab_2);
        lexperiencia->setObjectName(QString::fromUtf8("lexperiencia"));
        lexperiencia->setEnabled(true);

        gridLayout_2->addWidget(lexperiencia, 5, 0, 1, 1);

        experiencia = new QLineEdit(tab_2);
        experiencia->setObjectName(QString::fromUtf8("experiencia"));
        experiencia->setEnabled(true);

        gridLayout_2->addWidget(experiencia, 5, 1, 1, 1);

        lsalariobase = new QLabel(tab_2);
        lsalariobase->setObjectName(QString::fromUtf8("lsalariobase"));
        lsalariobase->setEnabled(true);

        gridLayout_2->addWidget(lsalariobase, 6, 0, 1, 1);

        salariobase = new QLineEdit(tab_2);
        salariobase->setObjectName(QString::fromUtf8("salariobase"));
        salariobase->setEnabled(true);

        gridLayout_2->addWidget(salariobase, 6, 1, 1, 1);

        lcantdias = new QLabel(tab_2);
        lcantdias->setObjectName(QString::fromUtf8("lcantdias"));
        lcantdias->setEnabled(true);

        gridLayout_2->addWidget(lcantdias, 7, 0, 1, 1);

        cantdias = new QLineEdit(tab_2);
        cantdias->setObjectName(QString::fromUtf8("cantdias"));
        cantdias->setEnabled(true);

        gridLayout_2->addWidget(cantdias, 7, 1, 1, 1);

        lcargo = new QLabel(tab_2);
        lcargo->setObjectName(QString::fromUtf8("lcargo"));
        lcargo->setEnabled(true);

        gridLayout_2->addWidget(lcargo, 8, 0, 1, 1);

        cargo = new QLineEdit(tab_2);
        cargo->setObjectName(QString::fromUtf8("cargo"));
        cargo->setEnabled(true);

        gridLayout_2->addWidget(cargo, 8, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(418, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_5->addWidget(pushButton_2);


        verticalLayout_4->addLayout(horizontalLayout_5);

        listaTrabajadores = new QTableWidget(tab_2);
        if (listaTrabajadores->columnCount() < 10)
            listaTrabajadores->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        listaTrabajadores->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        listaTrabajadores->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        listaTrabajadores->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        listaTrabajadores->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        listaTrabajadores->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        listaTrabajadores->setHorizontalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        listaTrabajadores->setHorizontalHeaderItem(6, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        listaTrabajadores->setHorizontalHeaderItem(7, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        listaTrabajadores->setHorizontalHeaderItem(8, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        listaTrabajadores->setHorizontalHeaderItem(9, __qtablewidgetitem15);
        listaTrabajadores->setObjectName(QString::fromUtf8("listaTrabajadores"));
        listaTrabajadores->setSelectionBehavior(QAbstractItemView::SelectRows);
        listaTrabajadores->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(listaTrabajadores);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_2 = new QVBoxLayout(tab_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        interprovincial = new QRadioButton(tab_3);
        interprovincial->setObjectName(QString::fromUtf8("interprovincial"));
        interprovincial->setChecked(true);

        horizontalLayout_6->addWidget(interprovincial);

        otro = new QRadioButton(tab_3);
        otro->setObjectName(QString::fromUtf8("otro"));

        horizontalLayout_6->addWidget(otro);

        horizontalSpacer_5 = new QSpacerItem(378, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_6);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lchapa_3 = new QLabel(tab_3);
        lchapa_3->setObjectName(QString::fromUtf8("lchapa_3"));

        gridLayout_3->addWidget(lchapa_3, 0, 0, 1, 1);

        lmarca_3 = new QLabel(tab_3);
        lmarca_3->setObjectName(QString::fromUtf8("lmarca_3"));

        gridLayout_3->addWidget(lmarca_3, 1, 0, 1, 1);

        lfabricacion_3 = new QLabel(tab_3);
        lfabricacion_3->setObjectName(QString::fromUtf8("lfabricacion_3"));

        gridLayout_3->addWidget(lfabricacion_3, 2, 0, 1, 1);

        cargatransportada = new QLineEdit(tab_3);
        cargatransportada->setObjectName(QString::fromUtf8("cargatransportada"));

        gridLayout_3->addWidget(cargatransportada, 2, 1, 1, 1);

        lreparaciones_3 = new QLabel(tab_3);
        lreparaciones_3->setObjectName(QString::fromUtf8("lreparaciones_3"));

        gridLayout_3->addWidget(lreparaciones_3, 3, 0, 1, 1);

        kmrecorrido = new QLineEdit(tab_3);
        kmrecorrido->setObjectName(QString::fromUtf8("kmrecorrido"));

        gridLayout_3->addWidget(kmrecorrido, 3, 1, 1, 1);

        lgasto_3 = new QLabel(tab_3);
        lgasto_3->setObjectName(QString::fromUtf8("lgasto_3"));
        lgasto_3->setEnabled(true);

        gridLayout_3->addWidget(lgasto_3, 4, 0, 1, 1);

        cbcamiones = new QComboBox(tab_3);
        cbcamiones->setObjectName(QString::fromUtf8("cbcamiones"));

        gridLayout_3->addWidget(cbcamiones, 4, 1, 1, 1);

        fechainicio = new QDateEdit(tab_3);
        fechainicio->setObjectName(QString::fromUtf8("fechainicio"));
        fechainicio->setAutoFillBackground(false);
        fechainicio->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        fechainicio->setAccelerated(false);
        fechainicio->setCalendarPopup(true);

        gridLayout_3->addWidget(fechainicio, 0, 1, 1, 1);

        fechafin = new QDateEdit(tab_3);
        fechafin->setObjectName(QString::fromUtf8("fechafin"));
        fechafin->setCalendarPopup(true);

        gridLayout_3->addWidget(fechafin, 1, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_6 = new QSpacerItem(418, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_7->addWidget(pushButton_3);


        verticalLayout_3->addLayout(horizontalLayout_7);

        listaviajes = new QTableWidget(tab_3);
        if (listaviajes->columnCount() < 6)
            listaviajes->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        listaviajes->setHorizontalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        listaviajes->setHorizontalHeaderItem(1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        listaviajes->setHorizontalHeaderItem(2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        listaviajes->setHorizontalHeaderItem(3, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        listaviajes->setHorizontalHeaderItem(4, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        listaviajes->setHorizontalHeaderItem(5, __qtablewidgetitem21);
        listaviajes->setObjectName(QString::fromUtf8("listaviajes"));
        listaviajes->setSelectionBehavior(QAbstractItemView::SelectRows);
        listaviajes->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(listaviajes);


        verticalLayout_2->addLayout(verticalLayout_3);

        tabWidget->addTab(tab_3, QString());

        horizontalLayout_8->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 605, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionMedios_de_transporte->setText(QApplication::translate("MainWindow", "Medios de transporte", nullptr));
        actionTrabajadores->setText(QApplication::translate("MainWindow", "Trabajadores", nullptr));
        actionGestion_de_viajes->setText(QApplication::translate("MainWindow", "Gesti\303\263n de viajes", nullptr));
        antiguo->setText(QApplication::translate("MainWindow", "Antiguo", nullptr));
        moderno->setText(QApplication::translate("MainWindow", "Moderno", nullptr));
        lchapa->setText(QApplication::translate("MainWindow", "Chapa:", nullptr));
        lmarca->setText(QApplication::translate("MainWindow", "Marca:", nullptr));
        lfabricacion->setText(QApplication::translate("MainWindow", "A\303\261o de fabricaci\303\263n", nullptr));
        lreparaciones->setText(QApplication::translate("MainWindow", "Cantidad de reparaciones:", nullptr));
        lgasto->setText(QApplication::translate("MainWindow", "Gasto Km/h:", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Agregar cami\303\263n", nullptr));
        QTableWidgetItem *___qtablewidgetitem = listaCamiones->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Tipo de cami\303\263n", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = listaCamiones->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Chapa", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = listaCamiones->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Marca", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = listaCamiones->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "A\303\261o de fabricaci\303\263n", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = listaCamiones->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Cantidad de reparaciones", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = listaCamiones->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Gasto KM/L", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Camiones", nullptr));
        admin->setText(QApplication::translate("MainWindow", "Administrador", nullptr));
        chofer->setText(QApplication::translate("MainWindow", "Chofer", nullptr));
        lnombre->setText(QApplication::translate("MainWindow", "Nombre:", nullptr));
        lci->setText(QApplication::translate("MainWindow", "CI:", nullptr));
        ltelefono->setText(QApplication::translate("MainWindow", "Tel\303\251fono", nullptr));
        ldireccion->setText(QApplication::translate("MainWindow", "Direcci\303\263n:", nullptr));
        lnescolar->setText(QApplication::translate("MainWindow", "Nivel escolar:", nullptr));
        lexperiencia->setText(QApplication::translate("MainWindow", "A\303\261os experiencia:", nullptr));
        lsalariobase->setText(QApplication::translate("MainWindow", "Salario base:", nullptr));
        lcantdias->setText(QApplication::translate("MainWindow", "Cantidad de d\303\255as:", nullptr));
        lcargo->setText(QApplication::translate("MainWindow", "Cargo:", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Agregar trabajador", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = listaTrabajadores->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Tipo Trabajador", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = listaTrabajadores->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Nombre", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = listaTrabajadores->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "CI", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = listaTrabajadores->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Tel\303\251fono", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = listaTrabajadores->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Direcci\303\263n", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = listaTrabajadores->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "Nivel Escolar", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = listaTrabajadores->horizontalHeaderItem(6);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "Experiencia", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = listaTrabajadores->horizontalHeaderItem(7);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "Salario Base", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = listaTrabajadores->horizontalHeaderItem(8);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "Cant. D\303\255as", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = listaTrabajadores->horizontalHeaderItem(9);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "Cargo", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Trabajadores", nullptr));
        interprovincial->setText(QApplication::translate("MainWindow", "Interprovincial", nullptr));
        otro->setText(QApplication::translate("MainWindow", "otro", nullptr));
        lchapa_3->setText(QApplication::translate("MainWindow", "Fecha inicio:", nullptr));
        lmarca_3->setText(QApplication::translate("MainWindow", "Fecha fin:", nullptr));
        lfabricacion_3->setText(QApplication::translate("MainWindow", "Carga transportada:", nullptr));
        lreparaciones_3->setText(QApplication::translate("MainWindow", "Km recorrido:", nullptr));
        lgasto_3->setText(QApplication::translate("MainWindow", "Camion:", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Aceptar viaje", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = listaviajes->horizontalHeaderItem(0);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "Tipo de viaje", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = listaviajes->horizontalHeaderItem(1);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "Fecha inicio", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = listaviajes->horizontalHeaderItem(2);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "Fecha fin", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = listaviajes->horizontalHeaderItem(3);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "Carga transportada", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = listaviajes->horizontalHeaderItem(4);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "Km recorrido", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = listaviajes->horizontalHeaderItem(5);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "Cami\303\263n", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Viajes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
