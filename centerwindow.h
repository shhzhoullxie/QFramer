#ifndef CENTERWINDOW_H
#define CENTERWINDOW_H

#include <QFrame>
#include<QWidget>
#include<QStackedWidget>
#include "titlebar.h"
#include "navgationbar.h"

class CenterWindow : public QFrame
{
    Q_OBJECT
public:
    TitleBar* titleBar;
    NavgationBar* navagationBar;
    QStackedWidget* stackWidget;
    int currentIndex;
public:
    explicit CenterWindow(QWidget *parent = 0);
    void initData();
    void initUI();
    void initConnect();
signals:

public slots:
    void switchscreen(const int index);
    void switchscreen();
    void cloudAntimation(const int index);
};

#endif // CENTERWINDOW_H
