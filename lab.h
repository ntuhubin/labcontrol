#ifndef LAB_H
#define LAB_H

#include <QWidget>

typedef struct
{
    QImage img;
    QString id;
    QString ttime;
    QString camid;
    QString status;
    bool warning;
}showmsg;

namespace Ui {
class LAB;
}

class LAB : public QWidget
{
    Q_OBJECT
public:
    void SetMsg(showmsg msg);
public:
    explicit LAB(QWidget *parent = 0);
    ~LAB();

private:
    Ui::LAB *ui;
};

#endif // LAB_H
