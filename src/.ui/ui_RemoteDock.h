/********************************************************************************
** Form generated from reading UI file 'RemoteDock.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTEDOCK_H
#define UI_REMOTEDOCK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RemoteDock
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboUser;
    QToolButton *buttonLogin;
    QSpacerItem *horizontalSpacer;
    QToolButton *buttonPushDatabase;
    QTreeView *treeStructure;

    void setupUi(QDialog *RemoteDock)
    {
        if (RemoteDock->objectName().isEmpty())
            RemoteDock->setObjectName(QString::fromUtf8("RemoteDock"));
        RemoteDock->resize(575, 310);
        verticalLayout = new QVBoxLayout(RemoteDock);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(RemoteDock);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        comboUser = new QComboBox(RemoteDock);
        comboUser->setObjectName(QString::fromUtf8("comboUser"));
        comboUser->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(comboUser);

        buttonLogin = new QToolButton(RemoteDock);
        buttonLogin->setObjectName(QString::fromUtf8("buttonLogin"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/cog_go.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonLogin->setIcon(icon);

        horizontalLayout->addWidget(buttonLogin);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonPushDatabase = new QToolButton(RemoteDock);
        buttonPushDatabase->setObjectName(QString::fromUtf8("buttonPushDatabase"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/push_database"), QSize(), QIcon::Normal, QIcon::Off);
        buttonPushDatabase->setIcon(icon1);

        horizontalLayout->addWidget(buttonPushDatabase);


        verticalLayout->addLayout(horizontalLayout);

        treeStructure = new QTreeView(RemoteDock);
        treeStructure->setObjectName(QString::fromUtf8("treeStructure"));

        verticalLayout->addWidget(treeStructure);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(comboUser);
#endif // QT_CONFIG(shortcut)

        retranslateUi(RemoteDock);
        QObject::connect(buttonLogin, SIGNAL(clicked()), RemoteDock, SLOT(setNewIdentity()));
        QObject::connect(treeStructure, SIGNAL(doubleClicked(QModelIndex)), RemoteDock, SLOT(fetchDatabase(QModelIndex)));
        QObject::connect(buttonPushDatabase, SIGNAL(clicked()), RemoteDock, SLOT(pushDatabase()));

        QMetaObject::connectSlotsByName(RemoteDock);
    } // setupUi

    void retranslateUi(QDialog *RemoteDock)
    {
        RemoteDock->setWindowTitle(QCoreApplication::translate("RemoteDock", "Remote", nullptr));
        label_2->setText(QCoreApplication::translate("RemoteDock", "Identity", nullptr));
#if QT_CONFIG(tooltip)
        buttonLogin->setToolTip(QCoreApplication::translate("RemoteDock", "Connect to the remote server using the currently selected identity. The correct server is taken from the identity as well.", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonLogin->setText(QCoreApplication::translate("RemoteDock", "Go", nullptr));
#if QT_CONFIG(tooltip)
        buttonPushDatabase->setToolTip(QCoreApplication::translate("RemoteDock", "Push currently opened database to server", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class RemoteDock: public Ui_RemoteDock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTEDOCK_H
