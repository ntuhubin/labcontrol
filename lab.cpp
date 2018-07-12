#include "lab.h"
#include "ui_lab.h"

LAB::LAB(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LAB)
{
    ui->setupUi(this);
}

LAB::~LAB()
{
    delete ui;
}
void LAB::SetMsg(showmsg msg)
{
    int w = ui->label_IMG->width();
    int h = ui->label_IMG->height();
    QPixmap mp = QPixmap::fromImage(msg.img);
    QPixmap fitpixmap = mp.scaled(w, h, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);  // 饱满填充
    ui->label_IMG->setPixmap(fitpixmap);
    ui->label_ID->setText(msg.id);
    ui->label_TIME->setText(msg.ttime);
    ui->label_CAMID->setText(msg.camid);
    ui->label_STATUS->setText(msg.status);
    QPalette palette;
    if(msg.warning == false)
        ui->label_WARN->setStyleSheet("background-color: rgb(0,0,255)");
    else
        ui->label_WARN->setStyleSheet("background-color: rgb(255,0,0)");

}
