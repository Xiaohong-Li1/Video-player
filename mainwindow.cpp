#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_Landscape = new Landscape(this);
    m_Portrait = new Portrait(this);
    setFixedSize(1330,700);
    ui->stackedWidget->setGeometry(0,0,1330,700);
    ui->stackedWidget->addWidget(m_Landscape);
    ui->stackedWidget->addWidget(m_Portrait);
    ui->stackedWidget->setCurrentWidget(m_Landscape);
    ui->stackedWidget->setContentsMargins(0, 0, 0, 0);
    connect(m_Landscape,&Landscape::ChangeRatio_R,this,&MainWindow::ChangeRatio);
    connect(m_Portrait,&Portrait::ChangeRatio_R,this,&MainWindow::ChangeRatio);
    m_change1 = true;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ChangeRatio()
{
    //横屏
    m_change1 = !m_change1;
    if (m_change1)
    {
        setFixedSize(1330,700);
        ui->stackedWidget->setCurrentWidget(m_Landscape);
    }
    else //竖屏
    {
        setFixedSize(900,700);
        ui->stackedWidget->setCurrentWidget(m_Portrait);

    }
}




