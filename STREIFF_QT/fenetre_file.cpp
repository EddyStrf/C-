#include "fenetre_file.h"
#include<QString>
#include <QApplication>
#include"File.cpp"


fenetre_file::fenetre_file(): QWidget()
{
    setWindowTitle("Entrez un nombre et cliquer sur ajouter");
    resize(600,215);
    File<int> file;
    mainWidget2 = new QWidget(this);
    box3 = new QVBoxLayout(this);
    bool ok = true;
    int nbre = 0;

    mainWidget2->setLayout(box3);


    nombre = new QLineEdit(this);
    box3->addWidget(nombre);
    QString contenu =nombre->text();
    contenu.toInt(&ok, 10);
    contenu = nbre;
    btn6 = new custombutton("Ajouter", mainWidget2);
    connect(btn6, SIGNAL(clicked()),this, SLOT(ajoutfile(int nbre)));
    m_list_btn2.append(btn6);
    box3->addWidget(btn6);

    btn7 = new custombutton("Supprimer", mainWidget2);
    connect(btn7, SIGNAL(clicked()),this, SLOT(supprfile()));
    m_list_btn2.append(btn7);
    box3->addWidget(btn7);

    btn8 = new custombutton("Afficher", mainWidget2);
     connect(btn8, SIGNAL(clicked()),this, SLOT(affichfile()));
     m_list_btn2.append(btn8);
    box3->addWidget(btn8);

    setLayout(box3);

}

void fenetre_file::ajoutfile(int nbre)
{
    file.ajouterFin(nbre);
}

void fenetre_file::supprfile()
{
    file.supprimerDeb();
}

void fenetre_file::affichfile()
{
    affi = new QTextEdit(this);
    //affi->setText(file.afficher());
    file.afficher();
}
