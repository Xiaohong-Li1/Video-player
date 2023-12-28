#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include    <QMainWindow>
#include "landscape.h"
#include "portrait.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void ChangeRatio();
private:
    Ui::MainWindow *ui;
    Landscape* m_Landscape;
    Portrait* m_Portrait;

    bool m_change1;
};

#endif // MAINWINDOW_H
