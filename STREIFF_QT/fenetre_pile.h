#ifndef FENETRE_PILE_H
#define FENETRE_PILE_H


#include "Pile.cpp"
#include "custombutton.h"

#include <QLineEdit>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QWidget>

class fenetre_pile : public QWidget
{
    Q_OBJECT
public:
    fenetre_pile();

private slots:
    void ajoutpile(int nbre);
    void supprpile();
    void affichpile();

private:
    QTextEdit *affi;
    int nbre;
    Pile<int> pile;
    QString contenu;
    QLineEdit *nombre;
    QList<custombutton*> m_list_btn3;
    custombutton* btn9;
    custombutton* btn10;
    custombutton* btn11;

    QVBoxLayout* box4;
    QWidget* mainWidget3;
};

#endif // FENETRE_PILE_H
