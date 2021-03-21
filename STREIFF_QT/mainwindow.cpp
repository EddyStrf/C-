#include "mainwindow.h"
#include<QDebug>

#include<QString>
#include <QApplication>
#include"fenetre_liste.h"
#include"fenetre_file.h"
#include"fenetre_pile.h"

#include "Liste.cpp"
#include "Pile.cpp "
#include "File.cpp"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    setWindowTitle("Bienvenue sur ce menu");
    resize(300,115);
    mainWidget = new QWidget(this);
    box1 = new QVBoxLayout(this);


    mainWidget->setLayout(box1);



    btn1 = new custombutton("Liste", mainWidget);
    connect(btn1, SIGNAL(clicked()),this, SLOT(affichefenetreliste()));
    m_list_btn.append(btn1);
    box1->addWidget(btn1);


    btn2 = new custombutton("File", mainWidget);
     connect(btn2, SIGNAL(clicked()),this, SLOT(affichefenetrefile()));
     m_list_btn.append(btn2);
    box1->addWidget(btn2);

    btn3 = new custombutton("Pile", mainWidget);
     connect(btn3, SIGNAL(clicked()),this, SLOT(affichefenetrepile()));
     m_list_btn.append(btn3);
    box1->addWidget(btn3);


    setCentralWidget(mainWidget);

}

MainWindow::~MainWindow()
{
}

void MainWindow::affichefenetreliste()
{
    fenetre_liste *fenetre = new fenetre_liste;
    fenetre->show();
}

void MainWindow::affichefenetrefile()
{
    fenetre_file *fenetre1 = new fenetre_file;
    fenetre1->show();
}

void MainWindow::affichefenetrepile()
{
    fenetre_pile *fenetre2 = new fenetre_pile;
    fenetre2->show();
}


//int testInteger() {
//    QString user_string_num;
//    int is_num = 0, decimal_count = 0, user_converted_num;
//    bool is_num1;
//    do {
//       cin >> user_string_num;

//        if (user_string_num[0] == '-')
//            is_num++;

//        if (user_string_num[0] == '0' &&
//            isdigit(user_string_num[1]))
//            is_num = 0;
//        else {
//            for (char i : user_string_num) {
//                if (isdigit(i))
//                    is_num++;
//                if (i == '.')
//                    decimal_count++;
//            }
//        }

//        if (decimal_count == 1)
//            is_num = 0;

//        if (is_num == user_string_num.size()) {
//            stringstream str_stream_object(user_string_num);
//            str_stream_object >> user_converted_num;

//            is_num1 = true;
//        } else {
//            cout << endl << "Vous avez entre une mauvaise valeur." << endl;

//            cin.clear();
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');

//            is_num1 = false;
//            is_num = 0;
//            decimal_count = 0;
//        }
//    } while (is_num1 == 0);
//    return user_converted_num;
//}
