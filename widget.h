#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
     QPixmap a;
     QPixmap a1;
 protected:

       void paintEvent(QPaintEvent *);

};

#endif // WIDGET_H