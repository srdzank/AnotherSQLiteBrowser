/********************************************************************************
** Form generated from reading UI file 'PlotDock.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTDOCK_H
#define UI_PLOTDOCK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_PlotDock
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitterForPlot;
    QTreeWidget *treePlotColumns;
    QCustomPlot *plotWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboLineType;
    QLabel *label_3;
    QComboBox *comboPointShape;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *butSavePlot;
    QToolButton *buttonLoadAllData;

    void setupUi(QDialog *PlotDock)
    {
        if (PlotDock->objectName().isEmpty())
            PlotDock->setObjectName(QString::fromUtf8("PlotDock"));
        PlotDock->resize(515, 553);
        verticalLayout = new QVBoxLayout(PlotDock);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitterForPlot = new QSplitter(PlotDock);
        splitterForPlot->setObjectName(QString::fromUtf8("splitterForPlot"));
        splitterForPlot->setOrientation(Qt::Vertical);
        treePlotColumns = new QTreeWidget(splitterForPlot);
        treePlotColumns->setObjectName(QString::fromUtf8("treePlotColumns"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(treePlotColumns->sizePolicy().hasHeightForWidth());
        treePlotColumns->setSizePolicy(sizePolicy);
        treePlotColumns->setAlternatingRowColors(true);
        treePlotColumns->setColumnCount(3);
        splitterForPlot->addWidget(treePlotColumns);
        treePlotColumns->header()->setDefaultSectionSize(100);
        treePlotColumns->header()->setStretchLastSection(false);
        plotWidget = new QCustomPlot(splitterForPlot);
        plotWidget->setObjectName(QString::fromUtf8("plotWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(8);
        sizePolicy1.setHeightForWidth(plotWidget->sizePolicy().hasHeightForWidth());
        plotWidget->setSizePolicy(sizePolicy1);
        splitterForPlot->addWidget(plotWidget);

        verticalLayout->addWidget(splitterForPlot);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(PlotDock);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        widget = new QWidget(PlotDock);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        comboLineType = new QComboBox(widget);
        comboLineType->addItem(QString());
        comboLineType->addItem(QString());
        comboLineType->addItem(QString());
        comboLineType->addItem(QString());
        comboLineType->addItem(QString());
        comboLineType->addItem(QString());
        comboLineType->setObjectName(QString::fromUtf8("comboLineType"));

        horizontalLayout_4->addWidget(comboLineType);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        comboPointShape = new QComboBox(widget);
        comboPointShape->addItem(QString());
        comboPointShape->addItem(QString());
        comboPointShape->addItem(QString());
        comboPointShape->addItem(QString());
        comboPointShape->addItem(QString());
        comboPointShape->addItem(QString());
        comboPointShape->addItem(QString());
        comboPointShape->addItem(QString());
        comboPointShape->addItem(QString());
        comboPointShape->addItem(QString());
        comboPointShape->addItem(QString());
        comboPointShape->addItem(QString());
        comboPointShape->addItem(QString());
        comboPointShape->addItem(QString());
        comboPointShape->addItem(QString());
        comboPointShape->setObjectName(QString::fromUtf8("comboPointShape"));

        horizontalLayout_4->addWidget(comboPointShape);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        butSavePlot = new QPushButton(widget);
        butSavePlot->setObjectName(QString::fromUtf8("butSavePlot"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/image_save"), QSize(), QIcon::Normal, QIcon::Off);
        butSavePlot->setIcon(icon);
        butSavePlot->setCheckable(false);
        butSavePlot->setAutoDefault(false);
        butSavePlot->setFlat(false);

        horizontalLayout_4->addWidget(butSavePlot);

        buttonLoadAllData = new QToolButton(widget);
        buttonLoadAllData->setObjectName(QString::fromUtf8("buttonLoadAllData"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/refresh"), QSize(), QIcon::Normal, QIcon::Off);
        buttonLoadAllData->setIcon(icon1);

        horizontalLayout_4->addWidget(buttonLoadAllData);


        horizontalLayout->addWidget(widget);


        verticalLayout->addLayout(horizontalLayout);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(comboLineType);
        label_3->setBuddy(comboPointShape);
#endif // QT_CONFIG(shortcut)

        retranslateUi(PlotDock);
        QObject::connect(buttonLoadAllData, SIGNAL(clicked()), PlotDock, SLOT(fetchAllData()));

        comboLineType->setCurrentIndex(1);
        comboPointShape->setCurrentIndex(0);
        butSavePlot->setDefault(false);


        QMetaObject::connectSlotsByName(PlotDock);
    } // setupUi

    void retranslateUi(QDialog *PlotDock)
    {
        PlotDock->setWindowTitle(QCoreApplication::translate("PlotDock", "Plot", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treePlotColumns->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("PlotDock", "Y", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("PlotDock", "X", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("PlotDock", "Columns", nullptr));
#if QT_CONFIG(whatsthis)
        plotWidget->setWhatsThis(QCoreApplication::translate("PlotDock", "Here is a plot drawn when you select the x and y values above.\n"
"\n"
"Click on points to select them in the plot and in the table. Ctrl+Click for selecting a range of points.\n"
"\n"
"Use mouse-wheel for zooming and mouse drag for changing the axis range.\n"
"\n"
"Select the axes or axes labels to drag and zoom only in that orientation.", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_2->setText(QCoreApplication::translate("PlotDock", "Line type:", nullptr));
        comboLineType->setItemText(0, QCoreApplication::translate("PlotDock", "None", nullptr));
        comboLineType->setItemText(1, QCoreApplication::translate("PlotDock", "Line", nullptr));
        comboLineType->setItemText(2, QCoreApplication::translate("PlotDock", "StepLeft", nullptr));
        comboLineType->setItemText(3, QCoreApplication::translate("PlotDock", "StepRight", nullptr));
        comboLineType->setItemText(4, QCoreApplication::translate("PlotDock", "StepCenter", nullptr));
        comboLineType->setItemText(5, QCoreApplication::translate("PlotDock", "Impulse", nullptr));

        label_3->setText(QCoreApplication::translate("PlotDock", "Point shape:", nullptr));
        comboPointShape->setItemText(0, QCoreApplication::translate("PlotDock", "None", nullptr));
        comboPointShape->setItemText(1, QCoreApplication::translate("PlotDock", "Cross", nullptr));
        comboPointShape->setItemText(2, QCoreApplication::translate("PlotDock", "Plus", nullptr));
        comboPointShape->setItemText(3, QCoreApplication::translate("PlotDock", "Circle", nullptr));
        comboPointShape->setItemText(4, QCoreApplication::translate("PlotDock", "Disc", nullptr));
        comboPointShape->setItemText(5, QCoreApplication::translate("PlotDock", "Square", nullptr));
        comboPointShape->setItemText(6, QCoreApplication::translate("PlotDock", "Diamond", nullptr));
        comboPointShape->setItemText(7, QCoreApplication::translate("PlotDock", "Star", nullptr));
        comboPointShape->setItemText(8, QCoreApplication::translate("PlotDock", "Triangle", nullptr));
        comboPointShape->setItemText(9, QCoreApplication::translate("PlotDock", "TriangleInverted", nullptr));
        comboPointShape->setItemText(10, QCoreApplication::translate("PlotDock", "CrossSquare", nullptr));
        comboPointShape->setItemText(11, QCoreApplication::translate("PlotDock", "PlusSquare", nullptr));
        comboPointShape->setItemText(12, QCoreApplication::translate("PlotDock", "CrossCircle", nullptr));
        comboPointShape->setItemText(13, QCoreApplication::translate("PlotDock", "PlusCircle", nullptr));
        comboPointShape->setItemText(14, QCoreApplication::translate("PlotDock", "Peace", nullptr));

#if QT_CONFIG(tooltip)
        butSavePlot->setToolTip(QCoreApplication::translate("PlotDock", "<html><head/><body><p>Save current plot...</p><p>File format chosen by extension (png, jpg, pdf, bmp)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        butSavePlot->setStatusTip(QCoreApplication::translate("PlotDock", "Save current plot...", nullptr));
#endif // QT_CONFIG(statustip)
        butSavePlot->setText(QString());
#if QT_CONFIG(tooltip)
        buttonLoadAllData->setToolTip(QCoreApplication::translate("PlotDock", "Load all data and redraw plot", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class PlotDock: public Ui_PlotDock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTDOCK_H
