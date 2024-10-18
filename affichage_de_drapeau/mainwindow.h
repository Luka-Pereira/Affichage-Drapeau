#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Color.h"
#include "Drapeau.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QPushButton *B1 = new QPushButton("ALLEMAGNE");
    QPushButton *B2 = new QPushButton("AUTRICHE");
    QPushButton *B3 = new QPushButton("BELGIQUE");
    QPushButton *B4 = new QPushButton("BULGARIE");
    QPushButton *B5 = new QPushButton("ESTONIE");
    QPushButton *B6 = new QPushButton("FRANCE");
    QPushButton *B7 = new QPushButton("HONGRIE");
    QPushButton *B8 = new QPushButton("IRLANDE");
    QPushButton *B9 = new QPushButton("ITALIE");
    QPushButton *B10 = new QPushButton("LETTONIE");
    QPushButton *B11 = new QPushButton("LITUANIE");
    QPushButton *B12 = new QPushButton("LUXEMBOURG");
    QPushButton *B13 = new QPushButton("PAYS-BAS");
    QPushButton *B14 = new QPushButton("ROUMANIE");
    QPushButton *B15 = new QPushButton("PORTUGAL");
    QPushButton *B16 = new QPushButton("UNITEDKINGDOM");

    QPalette palette;
    void set_bkgnd();


public slots:
    void Drapeau_ALLEMAGNE();
    void Drapeau_AUTRICHE();
    void Drapeau_BELGIQUE();
    void Drapeau_BULGARIE();
    void Drapeau_ESTONIE();
    void Drapeau_FRANCE();
    void Drapeau_HONGRIE();
    void Drapeau_IRLANDE();
    void Drapeau_ITALIE();
    void Drapeau_LETTONIE();
    void Drapeau_LITUANIE();
    void Drapeau_LUXEMBOURG();
    void Drapeau_PAYSBAS();
    void Drapeau_ROUMANIE();
    void Drapeau_PORTUGAL();
    void Drapeau_UNITEDKINGDOM();


private:
    Ui::MainWindow *ui;
    void resizeEvent(QResizeEvent* evt) override;
};

#endif // MAINWINDOW_H
