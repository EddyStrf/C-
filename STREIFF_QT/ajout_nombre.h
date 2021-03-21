#ifndef AJOUT_NOMBRE_H
#define AJOUT_NOMBRE_H
#include "custombutton.h"
#include "Liste.cpp"
#include "NoeudDeListe.cpp"
#include <QLineEdit>
#include <QVBoxLayout>
#include <QWidget>
#include "Liste.cpp"
#include "NoeudDeListe.cpp"

class ajout_nombre : public QWidget
{
    Q_OBJECT
public:
    ajout_nombre();
private slots:
    void recupnombre();

private:
    QString *contenu;
    custombutton *btn12;
    QLineEdit *nombre;
    QKeyEvent *event;
    QVBoxLayout* box5;
    QWidget* mainWidget5;
    Liste<int> liste;
};

#endif // AJOUT_NOMBRE_H



