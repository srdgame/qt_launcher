/********************************************************************************
** Form generated from reading UI file 'mediahome.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDIAHOME_H
#define UI_MEDIAHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MediaHome
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *camera_home_btn;
    QPushButton *media_btn;

    void setupUi(QWidget *MediaHome)
    {
        if (MediaHome->objectName().isEmpty())
            MediaHome->setObjectName(QStringLiteral("MediaHome"));
        MediaHome->setEnabled(true);
        MediaHome->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MediaHome->sizePolicy().hasHeightForWidth());
        MediaHome->setSizePolicy(sizePolicy);
        MediaHome->setMinimumSize(QSize(0, 0));
        MediaHome->setMaximumSize(QSize(16777215, 16777215));
        MediaHome->setStyleSheet(QStringLiteral("background-color: rgb(15,48,89);"));
        gridLayout = new QGridLayout(MediaHome);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 160, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 160, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(160, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 4, 2, 1);

        horizontalSpacer_2 = new QSpacerItem(160, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(160, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 160, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 160, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 4, 3, 1, 1);

        camera_home_btn = new QPushButton(MediaHome);
        camera_home_btn->setObjectName(QStringLiteral("camera_home_btn"));
        sizePolicy.setHeightForWidth(camera_home_btn->sizePolicy().hasHeightForWidth());
        camera_home_btn->setSizePolicy(sizePolicy);
        camera_home_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgba(255, 255, 255\357\274\214 0);\n"
"border-image: url(:/images/cameraIcons/camera.png);\n"
"}\n"
""));
        camera_home_btn->setIconSize(QSize(16, 16));
        camera_home_btn->setAutoRepeatDelay(300);

        gridLayout->addWidget(camera_home_btn, 2, 1, 1, 1);

        media_btn = new QPushButton(MediaHome);
        media_btn->setObjectName(QStringLiteral("media_btn"));
        sizePolicy.setHeightForWidth(media_btn->sizePolicy().hasHeightForWidth());
        media_btn->setSizePolicy(sizePolicy);
        media_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgba(255, 255, 255\357\274\214 0);\n"
"border-image: url(:/images/media.png);\n"
"}"));
        media_btn->setAutoRepeatDelay(300);
        media_btn->setAutoRepeatInterval(100);

        gridLayout->addWidget(media_btn, 2, 3, 1, 1);


        retranslateUi(MediaHome);

        QMetaObject::connectSlotsByName(MediaHome);
    } // setupUi

    void retranslateUi(QWidget *MediaHome)
    {
        MediaHome->setWindowTitle(QApplication::translate("MediaHome", "Form", Q_NULLPTR));
        camera_home_btn->setText(QString());
        media_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MediaHome: public Ui_MediaHome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDIAHOME_H
