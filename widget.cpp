#include "widget.h"
#include "ui_widget.h"
#include<QTimerEvent>
#include<QTimer>
#include<QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //去掉边框
    this->setWindowFlags(Qt::FramelessWindowHint);
    //设置背景透明
    this->setAttribute(Qt::WA_TranslucentBackground);
     flag=true;
    QTimer *time=new QTimer(this);
    time->start(100);
    connect(time,&QTimer::timeout,this,[=](){
       flag =!flag;
         update();

    });


}

Widget::~Widget()
{
    delete ui;
}
void Widget::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    if (flag)
    {
        p.drawPixmap(0,0,a1);

    }
   else
   {
    p.drawPixmap(0,0,a);
    }


}
