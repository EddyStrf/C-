#ifndef FENETRE_LISTE_H
#define FENETRE_LISTE_H

#include "custombutton.h"
#include "Liste.cpp"
#include "NoeudDeListe.cpp"
#include <QLineEdit>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QWidget>

class fenetre_liste : public QWidget
{
    Q_OBJECT
public:
    fenetre_liste();

private slots:
    void ajoutliste(int nbre);
    void affichliste();


private:
    QTextEdit *affi;
    int nbre;
    QString contenu;
    QLineEdit *nombre;
    QList<custombutton*> m_list_btn1;
    custombutton* btn4;
    custombutton* btn5;
    Liste<int> liste;
    QVBoxLayout* box2;
    QWidget* mainWidget1;
};

#endif // FENETRE_LISTE_H
