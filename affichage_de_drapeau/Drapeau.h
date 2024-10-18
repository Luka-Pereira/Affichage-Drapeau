#ifndef DRAPEAU_H
#define DRAPEAU_H

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>

class Drapeau : public QWidget
{
    Q_OBJECT

public:
    Drapeau(QWidget *parent = nullptr);
    Drapeau(QString C1, QString C2, QString C3, QString type, QString title);
    ~Drapeau();

    QHBoxLayout *Horiz_layout = new QHBoxLayout;
    QVBoxLayout *Vertic_layout = new QVBoxLayout;

private:
    // Ui::Widget *ui;
};

#endif // DRAPEAU_H
