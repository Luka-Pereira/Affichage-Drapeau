#include "Color.h"
#include <QPalette>
#include <QString>

Color::Color(QWidget *parent) : QWidget(parent) {}

Color::Color(QString couleur)
{
    setGeometry(0, 0, 100, 100);
    this->setAutoFillBackground(true);
    QPalette myPalette = palette();
    myPalette.setColor(QPalette::Window, QColor(couleur));
    setPalette(myPalette);
}

Color::~Color() {}
