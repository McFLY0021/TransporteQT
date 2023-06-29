/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(605, 596);
        actionMedios_de_transporte = new QAction(MainWindow);
        actionMedios_de_transporte->setObjectName(QStringLiteral("actionMedios_de_transporte"));
        actionTrabajadores = new QAction(MainWindow);
        actionTrabajadores->setObjectName(QStringLiteral("actionTrabajadores"));
        actionGestion_de_viajes = new QAction(MainWindow);
        actionGestion_de_viajes->setObjectName(QStringLiteral("actionGestion_de_viajes"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_8 = new QHBoxLayout(centralWidget);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout_3 = new QHBoxLayout(tab);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        antiguo = new QRadioButton(tab);
        antiguo->setObjectName(QStringLiteral("antiguo"));
        antiguo->setChecked(true);

        horizontalLayout_2->addWidget(antiguo);

        moderno = new QRadioButton(tab);
        moderno->setObjectName(QStringLiteral("moderno"));

        horizontalLayout_2->addWidget(moderno);

        horizontalSpacer = new QSpacerItem(378, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lchapa = new QLabel(tab);
        lchapa->setObjectName(QStringLiteral("lchapa"));

        gridLayout->addWidget(lchapa, 0, 0, 1, 1);

        chapa = new QLineEdit(tab);
        chapa->setObjectName(QStringLiteral("chapa"));

        gridLayout->addWidget(chapa, 0, 1, 1, 1);

        lmarca = new QLabel(tab);
        lmarca->setObjectName(QStringLiteral("lmarca"));

        gridLayout->addWidget(lmarca, 1, 0, 1, 1);

        marca = new QLineEdit(tab);
        marca->setObjectName(QStringLiteral("marca"));

        gridLayout->addWidget(marca, 1, 1, 1, 1);

        lfabricacion = new QLabel(tab);
        lfabricacion->setObjectName(QStringLiteral("lfabricacion"));

        gridLayout->addWidget(lfabricacion, 2, 0, 1, 1);

        fabricacion = new QLineEdit(tab);
        fabricacion->setObjectName(QStringLiteral("fabricacion"));

        gridLayout->addWidget(fabricacion, 2, 1, 1, 1);

        lreparaciones = new QLabel(tab);
        lreparaciones->setObjectName(QStringLiteral("lreparaciones"));

        gridLayout->addWidget(lreparaciones, 3, 0, 1, 1);

        reparaciones = new QLineEdit(tab);
        reparaciones->setObjectName(QStringLiteral("reparaciones"));

        gridLayout->addWidget(reparaciones, 3, 1, 1, 1);

        lgasto = new QLabel(tab);
        lgasto->setObjectName(QStringLiteral("lgasto"));
        lgasto->setEnabled(false);

        gridLayout->addWidget(lgasto, 4, 0, 1, 1);

        gasto = new QLineEdit(tab);
        gasto->setObjectName(QStringLiteral("gasto"));
        gasto->setEnabled(false);

        gridLayout->addWidget(gasto, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(418, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));

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
        listaCamiones->setObjectName(QStringLiteral("listaCamiones"));
        listaCamiones->setSelectionBehavior(QAbstractItemView::SelectRows);
        listaCamiones->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(listaCamiones);


        horizontalLayout_3->addLayout(verticalLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        admin = new QRadioButton(tab_2);
        admin->setObjectName(QStringLiteral("admin"));
        admin->setChecked(true);

        horizontalLayout_4->addWidget(admin);

        chofer = new QRadioButton(tab_2);
        chofer->setObjectName(QStringLiteral("chofer"));

        horizontalLayout_4->addWidget(chofer);

        horizontalSpacer_3 = new QSpacerItem(378, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lnombre = new QLabel(tab_2);
        lnombre->setObjectName(QStringLiteral("lnombre"));

        gridLayout_2->addWidget(lnombre, 0, 0, 1, 1);

        nombre = new QLineEdit(tab_2);
        nombre->setObjectName(QStringLiteral("nombre"));

        gridLayout_2->addWidget(nombre, 0, 1, 1, 1);

        lci = new QLabel(tab_2);
        lci->setObjectName(QStringLiteral("lci"));

        gridLayout_2->addWidget(lci, 1, 0, 1, 1);

        ci = new QLineEdit(tab_2);
        ci->setObjectName(QStringLiteral("ci"));

        gridLayout_2->addWidget(ci, 1, 1, 1, 1);

        ltelefono = new QLabel(tab_2);
        ltelefono->setObjectName(QStringLiteral("ltelefono"));

        gridLayout_2->addWidget(ltelefono, 2, 0, 1, 1);

        telefono = new QLineEdit(tab_2);
        telefono->setObjectName(QStringLiteral("telefono"));

        gridLayout_2->addWidget(telefono, 2, 1, 1, 1);

        ldireccion = new QLabel(tab_2);
        ldireccion->setObjectName(QStringLiteral("ldireccion"));

        gridLayout_2->addWidget(ldireccion, 3, 0, 1, 1);

        direccion = new QLineEdit(tab_2);
        direccion->setObjectName(QStringLiteral("direccion"));

        gridLayout_2->addWidget(direccion, 3, 1, 1, 1);

        lnescolar = new QLabel(tab_2);
        lnescolar->setObjectName(QStringLiteral("lnescolar"));
        lnescolar->setEnabled(true);

        gridLayout_2->addWidget(lnescolar, 4, 0, 1, 1);

        nescolar = new QLineEdit(tab_2);
        nescolar->setObjectName(QStringLiteral("nescolar"));
        nescolar->setEnabled(true);

        gridLayout_2->addWidget(nescolar, 4, 1, 1, 1);

        lexperiencia = new QLabel(tab_2);
        lexperiencia->setObjectName(QStringLiteral("lexperiencia"));
        lexperiencia->setEnabled(true);

        gridLayout_2->addWidget(lexperiencia, 5, 0, 1, 1);

        experiencia = new QLineEdit(tab_2);
        experiencia->setObjectName(QStringLiteral("experiencia"));
        experiencia->setEnabled(true);

        gridLayout_2->addWidget(experiencia, 5, 1, 1, 1);

        lsalariobase = new QLabel(tab_2);
        lsalariobase->setObjectName(QStringLiteral("lsalariobase"));
        lsalariobase->setEnabled(true);

        gridLayout_2->addWidget(lsalariobase, 6, 0, 1, 1);

        salariobase = new QLineEdit(tab_2);
        salariobase->setObjectName(QStringLiteral("salariobase"));
        salariobase->setEnabled(true);

        gridLayout_2->addWidget(salariobase, 6, 1, 1, 1);

        lcantdias = new QLabel(tab_2);
        lcantdias->setObjectName(QStringLiteral("lcantdias"));
        lcantdias->setEnabled(true);

        gridLayout_2->addWidget(lcantdias, 7, 0, 1, 1);

        cantdias = new QLineEdit(tab_2);
        cantdias->setObjectName(QStringLiteral("cantdias"));
        cantdias->setEnabled(true);

        gridLayout_2->addWidget(cantdias, 7, 1, 1, 1);

        lcargo = new QLabel(tab_2);
        lcargo->setObjectName(QStringLiteral("lcargo"));
        lcargo->setEnabled(true);

        gridLayout_2->addWidget(lcargo, 8, 0, 1, 1);

        cargo = new QLineEdit(tab_2);
        cargo->setObjectName(QStringLiteral("cargo"));
        cargo->setEnabled(true);

        gridLayout_2->addWidget(cargo, 8, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(418, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

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
        listaTrabajadores->setObjectName(QStringLiteral("listaTrabajadores"));
        listaTrabajadores->setSelectionBehavior(QAbstractItemView::SelectRows);
        listaTrabajadores->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(listaTrabajadores);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_2 = new QVBoxLayout(tab_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        interprovincial = new QRadioButton(tab_3);
        interprovincial->setObjectName(QStringLiteral("interprovincial"));
        interprovincial->setChecked(true);

        horizontalLayout_6->addWidget(interprovincial);

        otro = new QRadioButton(tab_3);
        otro->setObjectName(QStringLiteral("otro"));

        horizontalLayout_6->addWidget(otro);

        horizontalSpacer_5 = new QSpacerItem(378, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_6);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lchapa_3 = new QLabel(tab_3);
        lchapa_3->setObjectName(QStringLiteral("lchapa_3"));

        gridLayout_3->addWidget(lchapa_3, 0, 0, 1, 1);

        lmarca_3 = new QLabel(tab_3);
        lmarca_3->setObjectName(QStringLiteral("lmarca_3"));

        gridLayout_3->addWidget(lmarca_3, 1, 0, 1, 1);

        lfabricacion_3 = new QLabel(tab_3);
        lfabricacion_3->setObjectName(QStringLiteral("lfabricacion_3"));

        gridLayout_3->addWidget(lfabricacion_3, 2, 0, 1, 1);

        cargatransportada = new QLineEdit(tab_3);
        cargatransportada->setObjectName(QStringLiteral("cargatransportada"));

        gridLayout_3->addWidget(cargatransportada, 2, 1, 1, 1);

        lreparaciones_3 = new QLabel(tab_3);
        lreparaciones_3->setObjectName(QStringLiteral("lreparaciones_3"));

        gridLayout_3->addWidget(lreparaciones_3, 3, 0, 1, 1);

        kmrecorrido = new QLineEdit(tab_3);
        kmrecorrido->setObjectName(QStringLiteral("kmrecorrido"));

        gridLayout_3->addWidget(kmrecorrido, 3, 1, 1, 1);

        lgasto_3 = new QLabel(tab_3);
        lgasto_3->setObjectName(QStringLiteral("lgasto_3"));
        lgasto_3->setEnabled(true);

        gridLayout_3->addWidget(lgasto_3, 4, 0, 1, 1);

        cbcamiones = new QComboBox(tab_3);
        cbcamiones->setObjectName(QStringLiteral("cbcamiones"));

        gridLayout_3->addWidget(cbcamiones, 4, 1, 1, 1);

        fechainicio = new QDateEdit(tab_3);
        fechainicio->setObjectName(QStringLiteral("fechainicio"));
        fechainicio->setAutoFillBackground(false);
        fechainicio->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        fechainicio->setAccelerated(false);
        fechainicio->setCalendarPopup(true);

        gridLayout_3->addWidget(fechainicio, 0, 1, 1, 1);

        fechafin = new QDateEdit(tab_3);
        fechafin->setObjectName(QStringLiteral("fechafin"));
        fechafin->setCalendarPopup(true);

        gridLayout_3->addWidget(fechafin, 1, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_6 = new QSpacerItem(418, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

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
        listaviajes->setObjectName(QStringLiteral("listaviajes"));
        listaviajes->setSelectionBehavior(QAbstractItemView::SelectRows);
        listaviajes->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(listaviajes);


        verticalLayout_2->addLayout(verticalLayout_3);

        tabWidget->addTab(tab_3, QString());

        horizontalLayout_8->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 605, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionMedios_de_transporte->setText(QApplication::translate("MainWindow", "Medios de transporte", Q_NULLPTR));
        actionTrabajadores->setText(QApplication::translate("MainWindow", "Trabajadores", Q_NULLPTR));
        actionGestion_de_viajes->setText(QApplication::translate("MainWindow", "Gesti\303\263n de viajes", Q_NULLPTR));
        antiguo->setText(QApplication::translate("MainWindow", "Antiguo", Q_NULLPTR));
        moderno->setText(QApplication::translate("MainWindow", "Moderno", Q_NULLPTR));
        lchapa->setText(QApplication::translate("MainWindow", "Chapa:", Q_NULLPTR));
        lmarca->setText(QApplication::translate("MainWindow", "Marca:", Q_NULLPTR));
        lfabricacion->setText(QApplication::translate("MainWindow", "A\303\261o de fabricaci\303\263n", Q_NULLPTR));
        lreparaciones->setText(QApplication::translate("MainWindow", "Cantidad de reparaciones:", Q_NULLPTR));
        lgasto->setText(QApplication::translate("MainWindow", "Gasto Km/h:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Agregar cami\303\263n", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = listaCamiones->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Tipo de cami\303\263n", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = listaCamiones->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Chapa", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = listaCamiones->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Marca", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = listaCamiones->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "A\303\261o de fabricaci\303\263n", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = listaCamiones->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Cantidad de reparaciones", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = listaCamiones->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Gasto KM/L", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Camiones", Q_NULLPTR));
        admin->setText(QApplication::translate("MainWindow", "Administrador", Q_NULLPTR));
        chofer->setText(QApplication::translate("MainWindow", "Chofer", Q_NULLPTR));
        lnombre->setText(QApplication::translate("MainWindow", "Nombre:", Q_NULLPTR));
        lci->setText(QApplication::translate("MainWindow", "CI:", Q_NULLPTR));
        ltelefono->setText(QApplication::translate("MainWindow", "Tel\303\251fono", Q_NULLPTR));
        ldireccion->setText(QApplication::translate("MainWindow", "Direcci\303\263n:", Q_NULLPTR));
        lnescolar->setText(QApplication::translate("MainWindow", "Nivel escolar:", Q_NULLPTR));
        lexperiencia->setText(QApplication::translate("MainWindow", "A\303\261os experiencia:", Q_NULLPTR));
        lsalariobase->setText(QApplication::translate("MainWindow", "Salario base:", Q_NULLPTR));
        lcantdias->setText(QApplication::translate("MainWindow", "Cantidad de d\303\255as:", Q_NULLPTR));
        lcargo->setText(QApplication::translate("MainWindow", "Cargo:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Agregar trabajador", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = listaTrabajadores->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Tipo Trabajador", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = listaTrabajadores->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Nombre", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = listaTrabajadores->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "CI", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = listaTrabajadores->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Tel\303\251fono", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = listaTrabajadores->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Direcci\303\263n", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = listaTrabajadores->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "Nivel Escolar", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = listaTrabajadores->horizontalHeaderItem(6);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "Experiencia", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = listaTrabajadores->horizontalHeaderItem(7);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "Salario Base", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = listaTrabajadores->horizontalHeaderItem(8);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "Cant. D\303\255as", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = listaTrabajadores->horizontalHeaderItem(9);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "Cargo", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Trabajadores", Q_NULLPTR));
        interprovincial->setText(QApplication::translate("MainWindow", "Interprovincial", Q_NULLPTR));
        otro->setText(QApplication::translate("MainWindow", "otro", Q_NULLPTR));
        lchapa_3->setText(QApplication::translate("MainWindow", "Fecha inicio:", Q_NULLPTR));
        lmarca_3->setText(QApplication::translate("MainWindow", "Fecha fin:", Q_NULLPTR));
        lfabricacion_3->setText(QApplication::translate("MainWindow", "Carga transportada:", Q_NULLPTR));
        lreparaciones_3->setText(QApplication::translate("MainWindow", "Km recorrido:", Q_NULLPTR));
        lgasto_3->setText(QApplication::translate("MainWindow", "Camion:", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Aceptar viaje", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = listaviajes->horizontalHeaderItem(0);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "Tipo de viaje", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = listaviajes->horizontalHeaderItem(1);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "Fecha inicio", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = listaviajes->horizontalHeaderItem(2);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "Fecha fin", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = listaviajes->horizontalHeaderItem(3);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "Carga transportada", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = listaviajes->horizontalHeaderItem(4);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "Km recorrido", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = listaviajes->horizontalHeaderItem(5);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "Cami\303\263n", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Viajes", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
