#include "ajout_nombre.h"
#include<QString>
#include <QApplication>
#include <QKeyEvent>
#include "Liste.cpp"
#include "NoeudDeListe.cpp"
ajout_nombre::ajout_nombre(): QWidget()
{
    setWindowTitle("Bienvenue sur ce menu");
    Liste<int> liste;
    mainWidget5 = new QWidget(this);
    box5 = new QVBoxLayout(this);

    nombre = new QLineEdit(this);
    QString contenu =nombre->text();
    btn12 = new custombutton("ajouter", mainWidget5);
    connect(btn12, SIGNAL(clicked()),this, SLOT(recupnombre()));
    box5->addWidget(nombre);
    box5->addWidget(btn12);
    mainWidget5->setLayout(box5);

    setLayout(box5);
}

void ajout_nombre::recupnombre()
{
          liste.ajouterFin(30);

}
