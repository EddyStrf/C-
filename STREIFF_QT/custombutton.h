#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H

#include<QObject>
#include<QPushButton>
class custombutton :public QPushButton
{
    Q_OBJECT
public:
    custombutton(QString text, QWidget *parent = 0);
    ~custombutton();
private:
    QString m_text;
};

#endif // CUSTOMBUTTON_H
