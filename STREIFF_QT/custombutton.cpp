#include "custombutton.h"
#include<QDebug>

custombutton::custombutton(QString text, QWidget *parent)
    :QPushButton(parent), m_text(text)
{
    setText(m_text);
    setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);
}

    custombutton::~custombutton()
{
 qDebug() << "Destruction" << endl;
}
