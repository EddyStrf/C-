#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <custombutton.h>
#include <QVBoxLayout>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void affichefenetreliste();
    void affichefenetrefile();
    void affichefenetrepile();

private:
    QList<custombutton*> m_list_btn;
    custombutton* btn1;
    custombutton* btn2;
    custombutton* btn3;
    QVBoxLayout* box1;
    QWidget* mainWidget;
};
#endif // MAINWINDOW_H
