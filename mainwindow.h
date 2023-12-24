#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include    <QMainWindow>
#include    <QMediaPlayer>
#include    <QMediaPlaylist>
#include    <QVideoWidget>

#include    "qmyvideowidget.h"
#include <QTimer>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void keyPressEvent(QKeyEvent *event);
private slots:
//自定义槽函数
    void onstateChanged(QMediaPlayer::State state);
    void playstate(QMediaPlayer::MediaStatus status);
    void onDurationChanged(qint64 duration);
    void onPositionChanged(qint64 position);

//
    void on_btnAdd_clicked();

    void on_btnPlay_clicked();

    void on_btnPause_clicked();

    void on_btnStop_clicked();

    void on_sliderVolumn_valueChanged(int value);

    void on_btnSound_clicked();

    void on_sliderPosition_valueChanged(int value);

    void on_pushButton_clicked();

    void on_btnAdd_File_clicked();
    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_2_clicked();

    void on_radioButton_clicked(bool checked);

    void on_radioButton_2_clicked(bool checked);

    void on_pushButton_3_clicked();

    void on_radioButton_3_clicked(bool checked);

    void on_radioButton_4_clicked(bool checked);

    void on_pushButton_4_clicked();


    void on_checkBox_DQ_clicked(bool checked);

    void on_checkBox_LB_clicked(bool checked);

public:
    QMediaPlayer    *player;//视频播放器
    QString  durationTime;
    QString  positionTime;

    int curentVideoNum;//当前视频的序号
    QString CurrentselectedDir;//当前文件夹目录
    QStringList VideoNameList;//视频列表

    QVideoWidget *videoWidget_Min;
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
