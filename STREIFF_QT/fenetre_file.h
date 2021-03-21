#ifndef FENETRE_FILE_H
#define FENETRE_FILE_H


#include "File.cpp"
#include "custombutton.h"

#include <QLineEdit>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QWidget>

class fenetre_file : public QWidget
{
     Q_OBJECT

public:
    fenetre_file();

private slots:
    void ajoutfile(int nbre);
    void supprfile();
    void affichfile();


private:
    QTextEdit *affi;
    int nbre;
    File<int> file;
    QString contenu;
    QLineEdit *nombre;
    QList<custombutton*> m_list_btn2;
    custombutton* btn6;
    custombutton* btn7;
    custombutton* btn8;
    QVBoxLayout* box3;
    QWidget* mainWidget2;
};

#endif // FENETRE_FILE_H
