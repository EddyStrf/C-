#include "fenetre_pile.h"
#include<QString>
#include <QApplication>
#include"Pile.cpp"

fenetre_pile::fenetre_pile() : QWidget()
{
    setWindowTitle("Entrez un nombre et cliquer sur ajouter");
    resize(600,215);
    mainWidget3 = new QWidget(this);
    box4 = new QVBoxLayout(this);
    bool ok = true;
    int nbre = 0;

    mainWidget3->setLayout(box4);


    nombre = new QLineEdit(this);
    box4->addWidget(nombre);
    QString contenu =nombre->text();
    contenu.toInt(&ok, 10);
    contenu = nbre;
    btn9 = new custombutton("Ajouter", mainWidget3);
    connect(btn9, SIGNAL(clicked()),this, SLOT(ajoutpile(int nbre)));
    m_list_btn3.append(btn9);
    box4->addWidget(btn9);

    btn10 = new custombutton("Supprimer", mainWidget3);
    connect(btn10, SIGNAL(clicked()),this, SLOT(supprpile()));
    m_list_btn3.append(btn10);
    box4->addWidget(btn10);

    btn11 = new custombutton("Afficher", mainWidget3);
     connect(btn11, SIGNAL(clicked()),this, SLOT(affichpile()));
     m_list_btn3.append(btn11);
    box4->addWidget(btn11);

    setLayout(box4);
}

void fenetre_pile::ajoutpile(int nbre)
{
    pile.ajouterFin(nbre);
}

void fenetre_pile::supprpile()
{
      pile.supprimerFin();
}
void fenetre_pile::affichpile()
{
    affi = new QTextEdit(this);
    //affi->setText(pile.afficher());
    pile.afficher();
}

