/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *com_url;
    QCheckBox *check_HW;
    QPushButton *but_file;
    QPushButton *but_open;
    QPushButton *but_pause;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        com_url = new QComboBox(Widget);
        com_url->addItem(QString());
        com_url->addItem(QString());
        com_url->addItem(QString());
        com_url->addItem(QString());
        com_url->addItem(QString());
        com_url->addItem(QString());
        com_url->addItem(QString());
        com_url->addItem(QString());
        com_url->addItem(QString());
        com_url->setObjectName(QString::fromUtf8("com_url"));
        com_url->setEditable(true);
        com_url->setInsertPolicy(QComboBox::InsertAtBottom);
        com_url->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);
        com_url->setDuplicatesEnabled(false);

        horizontalLayout->addWidget(com_url);

        check_HW = new QCheckBox(Widget);
        check_HW->setObjectName(QString::fromUtf8("check_HW"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(check_HW->sizePolicy().hasHeightForWidth());
        check_HW->setSizePolicy(sizePolicy);
        check_HW->setCheckable(true);
        check_HW->setChecked(true);

        horizontalLayout->addWidget(check_HW);

        but_file = new QPushButton(Widget);
        but_file->setObjectName(QString::fromUtf8("but_file"));
        sizePolicy.setHeightForWidth(but_file->sizePolicy().hasHeightForWidth());
        but_file->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(but_file);

        but_open = new QPushButton(Widget);
        but_open->setObjectName(QString::fromUtf8("but_open"));
        sizePolicy.setHeightForWidth(but_open->sizePolicy().hasHeightForWidth());
        but_open->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(but_open);

        but_pause = new QPushButton(Widget);
        but_pause->setObjectName(QString::fromUtf8("but_pause"));
        sizePolicy.setHeightForWidth(but_pause->sizePolicy().hasHeightForWidth());
        but_pause->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(but_pause);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        com_url->setItemText(0, QApplication::translate("Widget", "rtsp://wowzaec2demo.streamlock.net/vod/mp4:BigBuckBunny_115k.mp4", nullptr));
        com_url->setItemText(1, QApplication::translate("Widget", "rtmp://ns8.indexforce.com/home/mystream", nullptr));
        com_url->setItemText(2, QApplication::translate("Widget", "rtmp://58.200.131.2:1935/livetv/cctv1", nullptr));
        com_url->setItemText(3, QApplication::translate("Widget", "http://vfx.mtime.cn/Video/2019/02/04/mp4/190204084208765161.mp4", nullptr));
        com_url->setItemText(4, QApplication::translate("Widget", "http://playertest.longtailvideo.com/adaptive/bipbop/gear4/prog_index.m3u8", nullptr));
        com_url->setItemText(5, QApplication::translate("Widget", "http://clips.vorwaerts-gmbh.de/big_buck_bunny.mp4", nullptr));
        com_url->setItemText(6, QApplication::translate("Widget", "http://vjs.zencdn.net/v/oceans.mp4", nullptr));
        com_url->setItemText(7, QApplication::translate("Widget", "https://media.w3.org/2010/05/sintel/trailer.mp4", nullptr));
        com_url->setItemText(8, QApplication::translate("Widget", "https://sf1-hscdn-tos.pstatp.com/obj/media-fe/xgplayer_doc_video/flv/xgplayer-demo-360p.flv", nullptr));

        com_url->setCurrentText(QApplication::translate("Widget", "F:/source/gogs/AI_gold_class_edit/bin/res/02.mp4", nullptr));
        check_HW->setText(QApplication::translate("Widget", "\347\241\254\350\247\243\347\240\201", nullptr));
        but_file->setText(QApplication::translate("Widget", "\351\200\211\346\213\251", nullptr));
        but_open->setText(QApplication::translate("Widget", "\345\274\200\345\247\213\346\222\255\346\224\276", nullptr));
        but_pause->setText(QApplication::translate("Widget", "\346\232\202\345\201\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
