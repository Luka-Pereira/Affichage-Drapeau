#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QResizeEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Drapeaux tricolores UE");
    resize(700, 400);

    QPixmap bkgnd("/home/luka/Téléchargements/eu.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    QVBoxLayout *Pagelayout = new QVBoxLayout;
    QHBoxLayout *Hlayout1 = new QHBoxLayout;
    QHBoxLayout *Hlayout2 = new QHBoxLayout;
    QHBoxLayout *Hlayout3 = new QHBoxLayout;

    Hlayout1->addWidget(B1);
    Hlayout1->addWidget(B2);
    Hlayout1->addWidget(B3);
    Hlayout1->addWidget(B4);
    Hlayout1->addWidget(B5);
    Hlayout1->addWidget(B6);
    Hlayout1->addWidget(B7);
    Hlayout2->addWidget(B8);
    Hlayout2->addWidget(B9);
    Hlayout2->addWidget(B10);
    Hlayout2->addWidget(B11);
    Hlayout2->addWidget(B12);
    Hlayout2->addWidget(B13);
    Hlayout2->addWidget(B14);
    Hlayout3->addWidget(B15);


    Pagelayout->addLayout(Hlayout1);
    Pagelayout->addLayout(Hlayout2);
    Pagelayout->addLayout(Hlayout3);

    connect(B1, SIGNAL(clicked()), this, SLOT(Drapeau_ALLEMAGNE()));
    connect(B2, SIGNAL(clicked()), this, SLOT(Drapeau_AUTRICHE()));
    connect(B3, SIGNAL(clicked()), this, SLOT(Drapeau_BELGIQUE()));
    connect(B4, SIGNAL(clicked()), this, SLOT(Drapeau_BULGARIE()));
    connect(B5, SIGNAL(clicked()), this, SLOT(Drapeau_ESTONIE()));
    connect(B6, SIGNAL(clicked()), this, SLOT(Drapeau_FRANCE()));
    connect(B7, SIGNAL(clicked()), this, SLOT(Drapeau_HONGRIE()));
    connect(B8, SIGNAL(clicked()), this, SLOT(Drapeau_IRLANDE()));
    connect(B9, SIGNAL(clicked()), this, SLOT(Drapeau_ITALIE()));
    connect(B10, SIGNAL(clicked()), this, SLOT(Drapeau_LETTONIE()));
    connect(B11, SIGNAL(clicked()), this, SLOT(Drapeau_LITUANIE()));
    connect(B12, SIGNAL(clicked()), this, SLOT(Drapeau_LUXEMBOURG()));
    connect(B13, SIGNAL(clicked()), this, SLOT(Drapeau_PAYSBAS()));
    connect(B14, SIGNAL(clicked()), this, SLOT(Drapeau_ROUMANIE()));
    connect(B15, SIGNAL(clicked()), this, SLOT(Drapeau_PORTUGAL()));

    QWidget *widget = new QWidget;
    widget->setLayout(Pagelayout);
    setCentralWidget(widget);
}

void MainWindow::Drapeau_ALLEMAGNE() {
    Drapeau * D = new Drapeau("Black", "Red", "Gold", "Horizontal", "Allemagne");
    delete D;
}

void MainWindow::Drapeau_FRANCE() {
    Drapeau *D = new Drapeau("Blue", "White", "Red", "Vertical", "France");
    delete D;
}

void MainWindow::Drapeau_ITALIE() {
    Drapeau *D = new Drapeau("Green", "White", "Red", "Vertical", "Italie");
    delete D;
}

void MainWindow::Drapeau_AUTRICHE() {
    Drapeau *D = new Drapeau("Red", "White", "Red", "Horizontal", "Autriche");
    delete D;
}

void MainWindow::Drapeau_BELGIQUE() {
    Drapeau *D = new Drapeau("Black", "Yellow", "Red", "Vertical", "Belgique");
    delete D;
}

void MainWindow::Drapeau_BULGARIE() {
    Drapeau *D = new Drapeau("White", "Green", "Red", "Horizontal", "Bulgarie");
    delete D;
}

void MainWindow::Drapeau_ESTONIE() {
    Drapeau *D = new Drapeau("Blue", "Black", "White", "Horizontal", "Etonie");
    delete D;
}

void MainWindow::Drapeau_HONGRIE() {
    Drapeau *D = new Drapeau("Red", "White", "Green", "Horizontal", "Hongrie");
    delete D;
}

void MainWindow::Drapeau_IRLANDE() {
    Drapeau *D = new Drapeau("Green", "White", "DarkOrange", "Vertical", "Irlande");
    delete D;
}

void MainWindow::Drapeau_LETTONIE() {
    Drapeau *D = new Drapeau("DarkRed", "White", "DarkRed", "Horizontal1", "Lettonie");
    delete D;
}

void MainWindow::Drapeau_LITUANIE() {
    Drapeau *D = new Drapeau("Yellow", "Green", "Red", "Horizontal", "Lituanie");
    delete D;
}

void MainWindow::Drapeau_LUXEMBOURG() {
    Drapeau *D = new Drapeau("Red", "White", "SkyBlue", "Horizontal", "Luxembourg");
    delete D;
}

void MainWindow::Drapeau_PAYSBAS() {
    Drapeau *D = new Drapeau("Red", "White", "DarkBlue", "Horizontal", "Pays-Bas");
    delete D;
}

void MainWindow::Drapeau_ROUMANIE() {
    Drapeau *D = new Drapeau("DarkBlue", "Yellow", "Red", "Vertical", "Roumanie");
    delete D;
}

void MainWindow::Drapeau_PORTUGAL()
{
    QPixmap portugal("/home/luka/Téléchargements/pt.jpg");
    portugal = portugal.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QPalette palette;
    palette.setBrush(QPalette::Window, QBrush(portugal));

    QWidget *widget = new QWidget;
    widget->resize(700, 350);
    widget->setWindowTitle("Portugal");
    widget->setPalette(palette);
    widget->show();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent* evt)
{
    QMainWindow::resizeEvent(evt); // call inherited implementation
    this->set_bkgnd();

}

void MainWindow::set_bkgnd()
{
    QPixmap bkgnd("/home/luka/Téléchargements/eu.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}
