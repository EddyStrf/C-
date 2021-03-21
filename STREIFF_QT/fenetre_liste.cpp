#include "fenetre_liste.h"
#include<QString>
#include<QDebug>
#include <QApplication>
#include <QTextEdit>
#include "Liste.cpp"
#include "NoeudDeListe.cpp"
#include "ajout_nombre.h"

fenetre_liste::fenetre_liste() : QWidget()
{
    setWindowTitle("Entrez un nombre et cliquer sur ajouter");
    resize(600,215);
    Liste<int> liste;
    mainWidget1 = new QWidget(this);
    box2 = new QVBoxLayout(this);
    bool ok = true;
    int nbre = 0;

    mainWidget1->setLayout(box2);


    nombre = new QLineEdit(this);
    box2->addWidget(nombre);
    btn4 = new custombutton("Ajouter", mainWidget1);
    QString contenu =nombre->text();
    contenu.toInt(&ok, 10);
    contenu = nbre;
    connect(btn4, SIGNAL(clicked()),this, SLOT(ajoutliste(int nbre)));
    m_list_btn1.append(btn4);
    box2->addWidget(btn4);

    btn5 = new custombutton("Afficher", mainWidget1);
     connect(btn5, SIGNAL(clicked()),this, SLOT(affichliste()));
     m_list_btn1.append(btn5);
    box2->addWidget(btn5);

    setLayout(box2);



}

void fenetre_liste::ajoutliste(int nbre)
{

    liste.ajouterFin(nbre);
}

void fenetre_liste::affichliste()
{
    affi = new QTextEdit(this);
    //affi->setText(liste.afficher());
     liste.afficher();
}



