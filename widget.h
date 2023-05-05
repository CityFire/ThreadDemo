#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "mythread.h"
#include <QThread>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

signals:
    void dealSignal();
    void dealClose();
    void startThread(); // 启动子线程的信号

private slots:

    void on_buttonStart_clicked();

    void on_buttonStop_clicked();

private:
    Ui::Widget *ui;
    MyThread *myT;
    QThread *thread;
};
#endif // WIDGET_H
