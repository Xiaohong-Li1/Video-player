/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include <qmyvideowidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_8;
    QWidget *widget_6;
    QGridLayout *gridLayout_7;
    QPushButton *btnAdd_File;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QLabel *LabCurMedia;
    QPushButton *btnAdd;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_5;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QListWidget *listWidget;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QWidget *widget_4;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox_DQ;
    QCheckBox *checkBox_LB;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QPlainTextEdit *plainTextEdit;
    QWidget *widget_2;
    QGridLayout *gridLayout_9;
    QmyVideoWidget *videoWidget;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QLabel *LabRatio;
    QSlider *sliderPosition;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnPlay;
    QPushButton *btnPause;
    QPushButton *btnStop;
    QPushButton *btnPlay_2;
    QPushButton *btnPlay_3;
    QPushButton *btnSound;
    QSlider *sliderVolumn;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1282, 702);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(99999, 99999));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_8 = new QGridLayout(centralWidget);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        widget_6 = new QWidget(centralWidget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setMinimumSize(QSize(0, 70));
        widget_6->setMaximumSize(QSize(16777215, 51));
        gridLayout_7 = new QGridLayout(widget_6);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        btnAdd_File = new QPushButton(widget_6);
        btnAdd_File->setObjectName(QString::fromUtf8("btnAdd_File"));
        btnAdd_File->setMinimumSize(QSize(221, 51));
        btnAdd_File->setMaximumSize(QSize(221, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        btnAdd_File->setFont(font);
        btnAdd_File->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-image: url(:/images/iamge1/xqlbview-list.png);\n"
"	background-repeat: no-repeat;\n"
"	background-origin: padding;\n"
"	background-position: left center;\n"
"	padding-left:20px;\n"
"	border: none;\n"
"    background-color: rgb(240,240, 240);    \n"
"    color:rgb(0, 0, 0);\n"
"	text-align:right;\n"
"	border-radius:10px;\n"
"}\n"
""));

        gridLayout_7->addWidget(btnAdd_File, 0, 3, 1, 1);

        pushButton_4 = new QPushButton(widget_6);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(32, 32));
        pushButton_4->setMaximumSize(QSize(32, 32));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("border-image: url(:/images/iamge1/ss_search.png);"));

        gridLayout_7->addWidget(pushButton_4, 0, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer, 0, 6, 1, 1);

        lineEdit = new QLineEdit(widget_6);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(221, 31));
        lineEdit->setMaximumSize(QSize(221, 31));
        lineEdit->setFont(font1);

        gridLayout_7->addWidget(lineEdit, 0, 4, 1, 1);

        LabCurMedia = new QLabel(widget_6);
        LabCurMedia->setObjectName(QString::fromUtf8("LabCurMedia"));
        LabCurMedia->setMinimumSize(QSize(0, 40));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(false);
        LabCurMedia->setFont(font2);

        gridLayout_7->addWidget(LabCurMedia, 0, 0, 1, 1);

        btnAdd = new QPushButton(widget_6);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setMinimumSize(QSize(221, 51));
        btnAdd->setMaximumSize(QSize(221, 51));
        btnAdd->setFont(font);
        btnAdd->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-image: url(:/images/iamge1/sp_videoxx.png);\n"
"    background-repeat: no-repeat;\n"
"	background-position:top left;\n"
"	padding-left:20px;\n"
"	border: none;\n"
"    background-color: rgb(240,240, 240);    \n"
"    color:rgb(0, 0, 0);\n"
"	text-align:right;\n"
"	border-radius:10px;\n"
"}\n"
""));

        gridLayout_7->addWidget(btnAdd, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 0, 1, 1, 1);


        gridLayout_8->addWidget(widget_6, 0, 0, 1, 3);

        widget_5 = new QWidget(centralWidget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        gridLayout_6 = new QGridLayout(widget_5);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBox = new QGroupBox(widget_5);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setMaximumSize(QSize(9999, 9999));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        groupBox->setFont(font3);
        groupBox->setStyleSheet(QString::fromUtf8("\n"
"QGroupBox::title {\n"
"width:40px;\n"
"height\357\274\23340px;\n"
"	image: url(:/images/iamge1/lb2_list-two.png);\n"
"}"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout_3->addWidget(listWidget, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(widget_5);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(0, 0));
        groupBox_4->setMaximumSize(QSize(9999, 9999));
        groupBox_4->setFont(font3);
        groupBox_4->setStyleSheet(QString::fromUtf8("QGroupBox::title {\n"
"\n"
"	image: url(:/images/iamge1/qpbf_full-screen-play.png);\n"
"}"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        radioButton_2 = new QRadioButton(groupBox_4);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setMinimumSize(QSize(0, 40));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        radioButton_2->setFont(font4);
        radioButton_2->setStyleSheet(QString::fromUtf8("QRadioButton::indicator::unchecked{\n"
"	width:0px;\n"
"	height:0px;\n"
"    color:rgb(100, 100, 100);\n"
"	text-align:center;\n"
"}\n"
"QRadioButton::indicator::checked{\n"
"	width:0px;\n"
"	height:0px;\n"
"	color:rgb(43,162, 239);\n"
"	text-align:center;\n"
"}\n"
"QRadioButton::unchecked{\n"
"    color:rgb(100, 100, 100);\n"
"	text-align:center;\n"
"}\n"
"QRadioButton::checked{\n"
"	color:rgb(43,162, 239);\n"
"	text-align:center;\n"
"}\n"
"QRadioButton{\n"
"	text-align:center;\n"
"	border-radius:10px;\n"
"}"));
        radioButton_2->setCheckable(true);
        radioButton_2->setChecked(true);

        gridLayout_4->addWidget(radioButton_2, 0, 0, 1, 1);

        radioButton = new QRadioButton(groupBox_4);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setMinimumSize(QSize(0, 40));
        radioButton->setFont(font4);
        radioButton->setStyleSheet(QString::fromUtf8("QRadioButton::indicator::unchecked{\n"
"	width:0px;\n"
"	height:0px;\n"
"    color:rgb(100, 100, 100);\n"
"	text-align:center;\n"
"}\n"
"QRadioButton::indicator::checked{\n"
"	width:0px;\n"
"	height:0px;\n"
"	color:rgb(43,162, 239);\n"
"	text-align:center;\n"
"}\n"
"QRadioButton::unchecked{\n"
"    color:rgb(100, 100, 100);\n"
"	text-align:center;\n"
"}\n"
"QRadioButton::checked{\n"
"	color:rgb(43,162, 239);\n"
"	text-align:center;\n"
"}\n"
"QRadioButton{\n"
"	text-align:center;\n"
"	border-radius:10px;\n"
"}"));

        gridLayout_4->addWidget(radioButton, 0, 1, 1, 1);

        radioButton_5 = new QRadioButton(groupBox_4);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setMinimumSize(QSize(0, 40));
        radioButton_5->setFont(font4);
        radioButton_5->setStyleSheet(QString::fromUtf8("QRadioButton::indicator::unchecked{\n"
"	width:0px;\n"
"	height:0px;\n"
"    color:rgb(100, 100, 100);\n"
"	text-align:center;\n"
"}\n"
"QRadioButton::indicator::checked{\n"
"	width:0px;\n"
"	height:0px;\n"
"	color:rgb(43,162, 239);\n"
"	text-align:center;\n"
"}\n"
"QRadioButton::unchecked{\n"
"    color:rgb(100, 100, 100);\n"
"	text-align:center;\n"
"}\n"
"QRadioButton::checked{\n"
"	color:rgb(43,162, 239);\n"
"	text-align:center;\n"
"}\n"
"QRadioButton{\n"
"	text-align:center;\n"
"	border-radius:10px;\n"
"}"));

        gridLayout_4->addWidget(radioButton_5, 1, 0, 1, 1);

        radioButton_6 = new QRadioButton(groupBox_4);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setMinimumSize(QSize(0, 40));
        radioButton_6->setFont(font4);
        radioButton_6->setStyleSheet(QString::fromUtf8("QRadioButton::indicator::unchecked{\n"
"	width:0px;\n"
"	height:0px;\n"
"    color:rgb(100, 100, 100);\n"
"	text-align:center;\n"
"}\n"
"QRadioButton::indicator::checked{\n"
"	width:0px;\n"
"	height:0px;\n"
"	color:rgb(43,162, 239);\n"
"	text-align:center;\n"
"}\n"
"QRadioButton::unchecked{\n"
"    color:rgb(100, 100, 100);\n"
"	text-align:center;\n"
"}\n"
"QRadioButton::checked{\n"
"	color:rgb(43,162, 239);\n"
"	text-align:center;\n"
"}\n"
"QRadioButton{\n"
"	text-align:center;\n"
"	border-radius:10px;\n"
"}"));

        gridLayout_4->addWidget(radioButton_6, 1, 1, 1, 1);


        gridLayout_6->addWidget(groupBox_4, 1, 0, 1, 1);


        gridLayout_8->addWidget(widget_5, 1, 0, 4, 1);

        widget_4 = new QWidget(centralWidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMinimumSize(QSize(0, 63));
        widget_4->setMaximumSize(QSize(16777215, 63));
        gridLayout_2 = new QGridLayout(widget_4);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        checkBox_DQ = new QCheckBox(widget_4);
        checkBox_DQ->setObjectName(QString::fromUtf8("checkBox_DQ"));
        checkBox_DQ->setMinimumSize(QSize(181, 40));
        checkBox_DQ->setMaximumSize(QSize(181, 40));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        checkBox_DQ->setFont(font5);
        checkBox_DQ->setStyleSheet(QString::fromUtf8("QCheckBox::indicator::unchecked{\n"
"	width:0px;\n"
"	height:0px;\n"
"    color:rgb(0, 0, 0);\n"
"	text-align:center;\n"
"}\n"
"QCheckBox::indicator::checked{\n"
"	width:0px;\n"
"	height:0px;\n"
"	color:rgb(43,162, 239);\n"
"	text-align:center;\n"
"}\n"
"QCheckBox::unchecked{\n"
"    color:rgb(0, 0, 0);\n"
"	text-align:center;\n"
"}\n"
"QCheckBox::checked{\n"
"	color:rgb(43,162, 239);\n"
"	text-align:center;\n"
"}\n"
"QCheckBox{\n"
"\n"
"	background-image: url(:/images/iamge1/bfyc_play-once.png);\n"
"	background-repeat: no-repeat;\n"
"	background-origin: padding;\n"
"	background-position: right center;\n"
"	border: none;\n"
"    color:rgb(0, 0, 0);\n"
"	text-align:left;\n"
"	border-radius:10px;\n"
"}"));
        checkBox_DQ->setChecked(true);

        gridLayout_2->addWidget(checkBox_DQ, 0, 0, 1, 1);

        checkBox_LB = new QCheckBox(widget_4);
        checkBox_LB->setObjectName(QString::fromUtf8("checkBox_LB"));
        checkBox_LB->setMinimumSize(QSize(161, 40));
        checkBox_LB->setMaximumSize(QSize(161, 40));
        checkBox_LB->setFont(font5);
        checkBox_LB->setStyleSheet(QString::fromUtf8("QCheckBox::indicator::unchecked{\n"
"	width:0px;\n"
"	height:0px;\n"
"    color:rgb(0, 0, 0);\n"
"	text-align:center;\n"
"}\n"
"QCheckBox::indicator::checked{\n"
"	width:0px;\n"
"	height:0px;\n"
"	color:rgb(43,162, 239);\n"
"	text-align:center;\n"
"}\n"
"QCheckBox::unchecked{\n"
"    color:rgb(0, 0, 0);\n"
"	text-align:center;\n"
"}\n"
"QCheckBox::checked{\n"
"	color:rgb(43,162, 239);\n"
"	text-align:center;\n"
"}\n"
"QCheckBox{\n"
"	background-image: url(:/images/iamge1/lb_list-top.png);\n"
"	background-repeat: no-repeat;\n"
"	background-origin: padding;\n"
"	background-position: right center;\n"
"	border: none;\n"
"    color:rgb(0, 0, 0);\n"
"	text-align:left;\n"
"	border-radius:10px;\n"
"}"));

        gridLayout_2->addWidget(checkBox_LB, 0, 1, 1, 1);

        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(201, 40));
        label_2->setMaximumSize(QSize(201, 40));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(100, 100, 100);"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 0, 2, 1, 1);

        spinBox = new QSpinBox(widget_4);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimumSize(QSize(0, 0));
        QFont font6;
        font6.setPointSize(15);
        spinBox->setFont(font6);
        spinBox->setStyleSheet(QString::fromUtf8("\n"
"    color:rgb(100, 100, 100);"));
        spinBox->setMaximum(100);
        spinBox->setSingleStep(5);

        gridLayout_2->addWidget(spinBox, 0, 3, 1, 1);

        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(131, 40));
        label_3->setMaximumSize(QSize(131, 40));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(100, 100, 100);"));

        gridLayout_2->addWidget(label_3, 0, 4, 1, 1);

        pushButton_2 = new QPushButton(widget_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(41, 41));
        pushButton_2->setMaximumSize(QSize(41, 41));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/iamge1/yjt_arrow-circle-right.png);\n"
""));

        gridLayout_2->addWidget(pushButton_2, 0, 5, 1, 1);

        groupBox_3 = new QGroupBox(widget_4);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(40, 40));
        groupBox_3->setMaximumSize(QSize(40, 40));
        groupBox_3->setFont(font3);
        groupBox_3->setStyleSheet(QString::fromUtf8("color:rgb(100, 100, 100);"));
        pushButton_5 = new QPushButton(groupBox_3);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(0, 0, 40, 40));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/images/iamge1/ztsx_overall-reduction.png);"));

        gridLayout_2->addWidget(groupBox_3, 0, 6, 1, 1);


        gridLayout_8->addWidget(widget_4, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 0));
        groupBox_2->setMaximumSize(QSize(99999, 99999));
        groupBox_2->setFont(font3);
        groupBox_2->setStyleSheet(QString::fromUtf8("\n"
"QGroupBox::title {\n"
"\n"
"	image: url(:/images/iamge1/lsjl_history.png);\n"
"}"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout_5->addWidget(plainTextEdit, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_2, 1, 2, 4, 1);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_9 = new QGridLayout(widget_2);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        videoWidget = new QmyVideoWidget(widget_2);
        videoWidget->setObjectName(QString::fromUtf8("videoWidget"));
        videoWidget->setMinimumSize(QSize(0, 0));
        videoWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));

        gridLayout_9->addWidget(videoWidget, 0, 0, 1, 1);


        gridLayout_8->addWidget(widget_2, 2, 1, 1, 1);

        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(0, 45));
        widget_3->setMaximumSize(QSize(16777215, 45));
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        LabRatio = new QLabel(widget_3);
        LabRatio->setObjectName(QString::fromUtf8("LabRatio"));
        LabRatio->setMinimumSize(QSize(86, 22));
        LabRatio->setMaximumSize(QSize(86, 22));

        gridLayout->addWidget(LabRatio, 0, 0, 1, 1);

        sliderPosition = new QSlider(widget_3);
        sliderPosition->setObjectName(QString::fromUtf8("sliderPosition"));
        sliderPosition->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal { \n"
"	border: 1px solid gray;\n"
"	height: 2px; \n"
"	left: 8px; \n"
"	right: 8px; \n"
"} \n"
"\n"
"QSlider::handle:horizontal { \n"
"	border: 1px solid gray; \n"
"	background:white;\n"
"	border-radius: 5px;\n"
"	width: 10px; \n"
"	height: 10px; \n"
"	margin: -5px; \n"
"} \n"
"\n"
"QSlider::add-page:horizontal{ \n"
"	background: rgb(189, 189, 189); \n"
"} \n"
"QSlider::sub-page:horizontal{ \n"
"	background: rgb(80, 165, 245); \n"
"}\n"
""));
        sliderPosition->setTracking(false);
        sliderPosition->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderPosition, 0, 1, 1, 1);


        gridLayout_8->addWidget(widget_3, 3, 1, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 51));
        widget->setMaximumSize(QSize(16777215, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(9);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(1, 1, 1, 1);
        btnPlay = new QPushButton(widget);
        btnPlay->setObjectName(QString::fromUtf8("btnPlay"));
        btnPlay->setMinimumSize(QSize(40, 40));
        btnPlay->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border-image: url(:/images/iamge1/bofang_play-one.png);"));

        horizontalLayout->addWidget(btnPlay);

        btnPause = new QPushButton(widget);
        btnPause->setObjectName(QString::fromUtf8("btnPause"));
        btnPause->setMinimumSize(QSize(40, 40));
        btnPause->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border-image: url(:/images/iamge1/zt_pause.png);"));

        horizontalLayout->addWidget(btnPause);

        btnStop = new QPushButton(widget);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        btnStop->setMinimumSize(QSize(30, 30));
        btnStop->setMaximumSize(QSize(30, 30));
        btnStop->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border-image: url(:/images/iamge1/tc_fill.png);"));

        horizontalLayout->addWidget(btnStop);

        btnPlay_2 = new QPushButton(widget);
        btnPlay_2->setObjectName(QString::fromUtf8("btnPlay_2"));
        btnPlay_2->setMinimumSize(QSize(40, 40));
        btnPlay_2->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border-image: url(:/images/iamge1/z1_left-one.png);"));

        horizontalLayout->addWidget(btnPlay_2);

        btnPlay_3 = new QPushButton(widget);
        btnPlay_3->setObjectName(QString::fromUtf8("btnPlay_3"));
        btnPlay_3->setMinimumSize(QSize(40, 40));
        btnPlay_3->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border-image: url(:/images/iamge1/y1_right-one.png);"));

        horizontalLayout->addWidget(btnPlay_3);

        btnSound = new QPushButton(widget);
        btnSound->setObjectName(QString::fromUtf8("btnSound"));
        btnSound->setMinimumSize(QSize(40, 40));
        btnSound->setStyleSheet(QString::fromUtf8("border-image: url(:/images/iamge1/syd.png);"));
        btnSound->setFlat(true);

        horizontalLayout->addWidget(btnSound);

        sliderVolumn = new QSlider(widget);
        sliderVolumn->setObjectName(QString::fromUtf8("sliderVolumn"));
        sliderVolumn->setMinimumSize(QSize(0, 40));
        sliderVolumn->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal { \n"
"	border: 1px solid gray;\n"
"	height: 2px; \n"
"	left: 8px; \n"
"	right: 8px; \n"
"} \n"
"\n"
"QSlider::handle:horizontal { \n"
"	border: 1px solid gray; \n"
"	background:white;\n"
"	border-radius: 5px;\n"
"	width: 10px; \n"
"	height: 10px; \n"
"	margin: -5px; \n"
"} \n"
"\n"
"QSlider::add-page:horizontal{ \n"
"	background: rgb(189, 189, 189); \n"
"} \n"
"QSlider::sub-page:horizontal{ \n"
"	background: rgb(80, 165, 245); \n"
"}\n"
""));
        sliderVolumn->setMaximum(100);
        sliderVolumn->setValue(100);
        sliderVolumn->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(sliderVolumn);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(40, 40));
        pushButton->setMaximumSize(QSize(40, 40));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border-image: url(:/images/iamge1/kz_extend.png);\n"
"\n"
"    color:rgb(100, 100, 100);"));

        horizontalLayout->addWidget(pushButton);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QFont font7;
        font7.setBold(true);
        font7.setItalic(true);
        comboBox->setFont(font7);
        comboBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(comboBox);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font8;
        font8.setPointSize(13);
        font8.setBold(true);
        label->setFont(font8);
        label->setStyleSheet(QString::fromUtf8("\n"
"    color:rgb(100, 100, 100);"));

        horizontalLayout->addWidget(label);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(40, 40));
        pushButton_3->setMaximumSize(QSize(40, 40));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/images/iamge1/spwj_video-file.png);"));

        horizontalLayout->addWidget(pushButton_3);


        gridLayout_8->addWidget(widget, 4, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\247\206\351\242\221\346\222\255\346\224\276\345\231\250", nullptr));
        btnAdd_File->setText(QCoreApplication::translate("MainWindow", "   Select File ", nullptr));
        pushButton_4->setText(QString());
        LabCurMedia->setText(QCoreApplication::translate("MainWindow", "No Video", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "   Select Video ", nullptr));
        groupBox->setTitle(QString());
        groupBox_4->setTitle(QString());
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Adapt", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Fill", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainWindow", "16:9", nullptr));
        radioButton_6->setText(QCoreApplication::translate("MainWindow", "4:3", nullptr));
        checkBox_DQ->setText(QCoreApplication::translate("MainWindow", "Single Cycle", nullptr));
        checkBox_LB->setText(QCoreApplication::translate("MainWindow", "List Cycle", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Timed shutdown\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "minutes later", nullptr));
        pushButton_2->setText(QString());
        groupBox_3->setTitle(QString());
        pushButton_5->setText(QString());
        groupBox_2->setTitle(QString());
        LabRatio->setText(QCoreApplication::translate("MainWindow", "00:00/00:00", nullptr));
        btnPlay->setText(QString());
        btnPause->setText(QString());
        btnStop->setText(QString());
        btnPlay_2->setText(QString());
        btnPlay_3->setText(QString());
        btnSound->setText(QString());
        pushButton->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "0.5", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "1.5", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "Speed", nullptr));
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
