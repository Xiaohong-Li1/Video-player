﻿#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QDebug>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsVideoItem>
#include <QDateTime>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    player = new QMediaPlayer(this);//创建视频播放器
    player->setNotifyInterval(2000);//信息更新周期
    player->setVideoOutput(ui->videoWidget);//视频显示组件

    ui->videoWidget->setMediaPlayer(player);//设置显示组件的关联播放器

    connect(player,SIGNAL(stateChanged(QMediaPlayer::State)),
            this, SLOT(onstateChanged(QMediaPlayer::State)));
    connect(player,SIGNAL(positionChanged(qint64)),
            this, SLOT(onPositionChanged(qint64)));
    connect(player,SIGNAL(durationChanged(qint64)),
            this, SLOT(onDurationChanged(qint64)));
    connect(player,SIGNAL(mediaStatusChanged(QMediaPlayer::MediaStatus)),
            this,SLOT(playstate(QMediaPlayer::MediaStatus)));

    ui->comboBox->setCurrentIndex(1);

    videoWidget_Min = new QVideoWidget();
    videoWidget_Min->setGeometry(0,0,300,200);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete videoWidget_Min;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    qDebug()<<"MainWindow::keyPressEvent";
    //退出全屏
    ui->videoWidget->setWindowFlags(Qt::SubWindow);
    ui->videoWidget->showNormal();
    ui->videoWidget->setGeometry(10,10,800,600);
}

void MainWindow::onstateChanged(QMediaPlayer::State state)
{//播放器状态变化
    ui->btnPlay->setEnabled(!(state==QMediaPlayer::PlayingState));
    ui->btnPause->setEnabled(state==QMediaPlayer::PlayingState);
    ui->btnStop->setEnabled(state==QMediaPlayer::PlayingState);
}

void MainWindow::playstate(QMediaPlayer::MediaStatus status)
{
    if(status == QMediaPlayer::EndOfMedia)
    {
        qDebug()<<u8"视频播放结束";
        if(ui->checkBox_DQ->isChecked())
        {
            ui->plainTextEdit->appendPlainText(CurrentselectedDir+"/"+QString(VideoNameList[curentVideoNum]));
            player->play();
        }
        else if(ui->checkBox_LB->isChecked())
        {
            if(VideoNameList.length() > 0)
            {
                curentVideoNum++;
                if(curentVideoNum >= VideoNameList.length())
                {
                    curentVideoNum = 0;
                }
                QString Path = CurrentselectedDir+"/"+QString(VideoNameList[curentVideoNum]);
                ui->plainTextEdit->appendPlainText(CurrentselectedDir+"/"+QString(VideoNameList[curentVideoNum]));
                qDebug()<<"curentVideoNum="<<curentVideoNum<<",Path="<<Path;
                player->setMedia(QUrl::fromLocalFile(Path));//设置播放文件
                player->play();
            }
        }
    }
}

void MainWindow::onDurationChanged(qint64 duration)
{//文件时长变化
    ui->sliderPosition->setMaximum(duration);

    int   secs=duration/1000;//秒
    int   mins=secs/60; //分钟
    secs=secs % 60;//余数秒
    durationTime=QString::asprintf("%d:%d",mins,secs);
    qDebug()<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<secs<<mins<<durationTime;
    ui->LabRatio->setText(positionTime+"/"+durationTime);
}

void MainWindow::onPositionChanged(qint64 position)
{//文件播放位置变化
    if (ui->sliderPosition->isSliderDown())
        return; //如果正在拖动滑条，退出

    ui->sliderPosition->setSliderPosition(position);//

    int   secs=position/1000;//秒
    int   mins=secs/60; //分钟
    secs=secs % 60;//余数秒
    positionTime=QString::asprintf("%d:%d",mins,secs);
    ui->LabRatio->setText(positionTime+"/"+durationTime);
    qDebug()<<"xxxxxx"<<positionTime+"/"+durationTime;
}

void MainWindow::on_btnAdd_clicked()
{//打开文件
    QString curPath=QCoreApplication::applicationDirPath();//获取系统当前目录
    QString dlgTitle=u8"选择视频文件"; //对话框标题
    QString filter=u8"所有文件(*.*);;wmv文件(*.wmv);;mp4文件(*.mp4)"; //文件过滤器
    QString aFile=QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);

    if (aFile.isEmpty())
      return;

    QFileInfo   fileInfo(aFile);
    ui->LabCurMedia->setText(fileInfo.fileName());

    player->setMedia(QUrl::fromLocalFile(aFile));//设置播放文件
    ui->plainTextEdit->appendPlainText(aFile);

    player->play();
}

void MainWindow::on_btnPlay_clicked()
{//播放
    player->play();
}

void MainWindow::on_btnPause_clicked()
{//暂停
    player->pause();
}

void MainWindow::on_btnStop_clicked()
{//停止
    player->stop();
}

void MainWindow::on_sliderVolumn_valueChanged(int value)
{//调节音量
    player->setVolume(value);
}

void MainWindow::on_btnSound_clicked()
{//静音按钮
    bool mute=player->isMuted();
    player->setMuted(!mute);
    if (mute)
        ui->btnSound->setIcon(QIcon(":/images/images/volumn.bmp"));
    else
        ui->btnSound->setIcon(QIcon(":/images/images/mute.bmp"));
}

void MainWindow::on_sliderPosition_valueChanged(int value)
{//播放位置
   player->setPosition(value);
}

void MainWindow::on_pushButton_clicked()
{//全屏按钮
    ui->videoWidget->setFullScreen(true);
}

void MainWindow::on_btnAdd_File_clicked()
{
    QString curPath=QCoreApplication::applicationDirPath();//
    QString dlgTitle=u8"选择一个目录"; //对话框标题
    QString selectedDir=QFileDialog::getExistingDirectory(this,dlgTitle,curPath,QFileDialog::ShowDirsOnly);
    qDebug()<<"selectedDir="<<selectedDir;
    if (!selectedDir.isEmpty())
    {
        CurrentselectedDir = selectedDir;
        VideoNameList.clear();
        QDir dir(selectedDir);
        foreach(QFileInfo fileInfo, dir.entryInfoList(QDir::Files))
        {
            QString name = fileInfo.baseName();
            qDebug()<<"name="<<name<<fileInfo.fileName();
            if(fileInfo.fileName().indexOf(".mp4") != -1 || fileInfo.fileName().indexOf(".wmv") != -1 )
            {
                qDebug()<<"---------------"<<fileInfo.fileName();
                VideoNameList.append(fileInfo.fileName());
            }
        }

        for(int i=ui->listWidget->count()-1;i>=0;i--)
        {
            ui->listWidget->takeItem(i);
        }
        for(int i=0;i<VideoNameList.length();i++)
        {
            ui->listWidget->addItem(new QListWidgetItem(VideoNameList[i]));
        }
    }
}

void MainWindow::on_listWidget_doubleClicked(const QModelIndex &index)
{
    curentVideoNum = index.row();
    QString Path = CurrentselectedDir+"/"+ui->listWidget->item(index.row())->text();
    qDebug()<<"curentVideoNum="<<curentVideoNum<<",Path="<<Path;
    player->setMedia(QUrl::fromLocalFile(Path));//设置播放文件
    ui->plainTextEdit->appendPlainText(Path);
    player->play();
}

void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    qDebug()<<"on_comboBox_currentTextChanged="<<arg1;
    qreal initialPlaybackRate = arg1.toDouble();
    player->setPlaybackRate(initialPlaybackRate);
}



void MainWindow::on_pushButton_2_clicked()
{
    if(ui->spinBox->value() > 0)
    {
        QTimer::singleShot(ui->spinBox->value()*6000, this,[&](){
              this->close();
        });
    }

//    QGraphicsScene *scene = new QGraphicsScene(this);
//    QGraphicsView *view = new QGraphicsView(scene);
//    view->setFixedSize(640, 480);
//    // 创建 QMediaPlayer 和 QVideoWidget，并设置为镜像翻转模式
//    QMediaPlayer *player_1 = new QMediaPlayer();
//    QString Path = CurrentselectedDir+"/"+QString(VideoNameList[curentVideoNum]);
//    qDebug()<<"curentVideoNum="<<curentVideoNum<<",Path="<<Path;
//    player_1->setMedia(QUrl::fromLocalFile(Path));
//    QVideoWidget *videoWidget = new QVideoWidget();
//    videoWidget->setAttribute(Qt::WA_TransparentForMouseEvents);
//    videoWidget->show();
//    // 将 QMediaPlayer 和 QVideoWidget 添加到 scene 中
//    scene->addWidget(videoWidget);

//    // 创建 QGraphicsVideoItem 并添加到 scene 中
//    QGraphicsVideoItem *videoItem = new QGraphicsVideoItem();
//    videoItem->setSize(view->size());
//    scene->addItem(videoItem);
//    // 将播放器的视频输出设置为 QGraphicsVideoItem，并开启播放
//    player_1->setVideoOutput(videoItem);
//    player_1->play();
}

void MainWindow::on_radioButton_clicked(bool checked)
{
    if(checked)
        ui->videoWidget->setAspectRatioMode(Qt::IgnoreAspectRatio);
}

void MainWindow::on_radioButton_2_clicked(bool checked)
{
    if(checked)
        ui->videoWidget->setAspectRatioMode(Qt::KeepAspectRatioByExpanding);
}

void MainWindow::on_pushButton_3_clicked()
{
//    QScreen *screen = QGuiApplication::primaryScreen();
//    QPixmap m_widgetScreenPic = screen->grabWindow(0, rect.x(), rect.y(), rect.width(), rect.height());//抓取widget的图片
//    m_widgetScreenPic = m_widgetScreenPic.scaled(QSize(rect.width(), rect.height()), Qt::KeepAspectRatio);

     player->pause();
     QPixmap pixmap = QPixmap::grabWindow(ui->videoWidget->winId());

     QString curPath=QCoreApplication::applicationDirPath();//
     QString dlgTitle=u8"选择一个目录"; //对话框标题
     QString selectedDir=QFileDialog::getExistingDirectory(this,dlgTitle,curPath,QFileDialog::ShowDirsOnly);

     QDateTime time = QDateTime::currentDateTime();
     QString TimeData = time.toString("yyyy_MM_dd_hh_mm_ss.png");

     pixmap.save(selectedDir+"/"+TimeData);

     player->play();
}

void MainWindow::on_radioButton_3_clicked(bool checked)
{
    if(checked)
    {
        videoWidget_Min = new QVideoWidget();
        videoWidget_Min->setGeometry(0,0,300,200);
        player->setVideoOutput(videoWidget_Min);
        videoWidget_Min->show();
    }
}

void MainWindow::on_radioButton_4_clicked(bool checked)
{
    if(checked)
    {
        player->setVideoOutput(ui->videoWidget);
        videoWidget_Min->hide();
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    for(int i=ui->listWidget->count()-1;i>=0;i--)
    {
        ui->listWidget->takeItem(i);
    }

    if(ui->lineEdit->text().length() > 0)
    {
        QString sousuo = ui->lineEdit->text();
        for(int i=0;i<VideoNameList.length();i++)
        {
            if(QString(VideoNameList[i]).indexOf(sousuo) != -1)
                ui->listWidget->addItem(new QListWidgetItem(VideoNameList[i]));
        }
    }
    else
    {
        for(int i=0;i<VideoNameList.length();i++)
        {
            ui->listWidget->addItem(new QListWidgetItem(VideoNameList[i]));
        }
    }


}

void MainWindow::on_checkBox_DQ_clicked(bool checked)
{
    ui->checkBox_DQ->setChecked(checked);
    ui->checkBox_LB->setChecked(!checked);

}

void MainWindow::on_checkBox_LB_clicked(bool checked)
{
    ui->checkBox_DQ->setChecked(!checked);
    ui->checkBox_LB->setChecked(checked);
}
