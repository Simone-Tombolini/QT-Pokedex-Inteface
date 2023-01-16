/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QRadioButton *RBall;
    QRadioButton *RBice;
    QRadioButton *RBsteel;
    QRadioButton *RBdragon;
    QRadioButton *RBfairy;
    QRadioButton *RBghost;
    QRadioButton *RBpsy;
    QRadioButton *RBground;
    QRadioButton *RBbug;
    QRadioButton *RBwhater;
    QRadioButton *RBfire;
    QRadioButton *RBeletric;
    QRadioButton *RBrock;
    QRadioButton *RBpoison;
    QRadioButton *RBgrass;
    QRadioButton *RBfight;
    QRadioButton *RBfly;
    QRadioButton *RBdark;
    QRadioButton *RBnormal;
    QPushButton *filterBtn;
    QPushButton *compareBtn;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *close;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1199, 673);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 10, 1151, 641));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        RBall = new QRadioButton(verticalLayoutWidget);
        RBall->setObjectName(QString::fromUtf8("RBall"));
        RBall->setChecked(true);

        gridLayout_2->addWidget(RBall, 2, 0, 1, 1);

        RBice = new QRadioButton(verticalLayoutWidget);
        RBice->setObjectName(QString::fromUtf8("RBice"));

        gridLayout_2->addWidget(RBice, 3, 1, 1, 1);

        RBsteel = new QRadioButton(verticalLayoutWidget);
        RBsteel->setObjectName(QString::fromUtf8("RBsteel"));

        gridLayout_2->addWidget(RBsteel, 4, 4, 1, 1);

        RBdragon = new QRadioButton(verticalLayoutWidget);
        RBdragon->setObjectName(QString::fromUtf8("RBdragon"));

        gridLayout_2->addWidget(RBdragon, 4, 6, 1, 1);

        RBfairy = new QRadioButton(verticalLayoutWidget);
        RBfairy->setObjectName(QString::fromUtf8("RBfairy"));

        gridLayout_2->addWidget(RBfairy, 3, 6, 1, 1);

        RBghost = new QRadioButton(verticalLayoutWidget);
        RBghost->setObjectName(QString::fromUtf8("RBghost"));

        gridLayout_2->addWidget(RBghost, 4, 5, 1, 1);

        RBpsy = new QRadioButton(verticalLayoutWidget);
        RBpsy->setObjectName(QString::fromUtf8("RBpsy"));

        gridLayout_2->addWidget(RBpsy, 4, 7, 1, 1);

        RBground = new QRadioButton(verticalLayoutWidget);
        RBground->setObjectName(QString::fromUtf8("RBground"));

        gridLayout_2->addWidget(RBground, 4, 3, 1, 1);

        RBbug = new QRadioButton(verticalLayoutWidget);
        RBbug->setObjectName(QString::fromUtf8("RBbug"));

        gridLayout_2->addWidget(RBbug, 3, 7, 1, 1);

        RBwhater = new QRadioButton(verticalLayoutWidget);
        RBwhater->setObjectName(QString::fromUtf8("RBwhater"));

        gridLayout_2->addWidget(RBwhater, 4, 0, 1, 1);

        RBfire = new QRadioButton(verticalLayoutWidget);
        RBfire->setObjectName(QString::fromUtf8("RBfire"));

        gridLayout_2->addWidget(RBfire, 3, 2, 1, 1);

        RBeletric = new QRadioButton(verticalLayoutWidget);
        RBeletric->setObjectName(QString::fromUtf8("RBeletric"));

        gridLayout_2->addWidget(RBeletric, 4, 1, 1, 1);

        RBrock = new QRadioButton(verticalLayoutWidget);
        RBrock->setObjectName(QString::fromUtf8("RBrock"));

        gridLayout_2->addWidget(RBrock, 3, 5, 1, 1);

        RBpoison = new QRadioButton(verticalLayoutWidget);
        RBpoison->setObjectName(QString::fromUtf8("RBpoison"));

        gridLayout_2->addWidget(RBpoison, 4, 2, 1, 1);

        RBgrass = new QRadioButton(verticalLayoutWidget);
        RBgrass->setObjectName(QString::fromUtf8("RBgrass"));

        gridLayout_2->addWidget(RBgrass, 4, 8, 1, 1);

        RBfight = new QRadioButton(verticalLayoutWidget);
        RBfight->setObjectName(QString::fromUtf8("RBfight"));

        gridLayout_2->addWidget(RBfight, 3, 3, 1, 1);

        RBfly = new QRadioButton(verticalLayoutWidget);
        RBfly->setObjectName(QString::fromUtf8("RBfly"));

        gridLayout_2->addWidget(RBfly, 3, 8, 1, 1);

        RBdark = new QRadioButton(verticalLayoutWidget);
        RBdark->setObjectName(QString::fromUtf8("RBdark"));

        gridLayout_2->addWidget(RBdark, 3, 4, 1, 1);

        RBnormal = new QRadioButton(verticalLayoutWidget);
        RBnormal->setObjectName(QString::fromUtf8("RBnormal"));

        gridLayout_2->addWidget(RBnormal, 3, 0, 1, 1);

        filterBtn = new QPushButton(verticalLayoutWidget);
        filterBtn->setObjectName(QString::fromUtf8("filterBtn"));

        gridLayout_2->addWidget(filterBtn, 2, 1, 1, 1);

        compareBtn = new QPushButton(verticalLayoutWidget);
        compareBtn->setObjectName(QString::fromUtf8("compareBtn"));

        gridLayout_2->addWidget(compareBtn, 2, 8, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        tableWidget = new QTableWidget(verticalLayoutWidget);
        if (tableWidget->columnCount() < 11)
            tableWidget->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setFrameShadow(QFrame::Raised);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSortingEnabled(true);
        tableWidget->setRowCount(0);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        close = new QPushButton(verticalLayoutWidget);
        close->setObjectName(QString::fromUtf8("close"));

        horizontalLayout_2->addWidget(close);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(close, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PokeDex", nullptr));
        RBall->setText(QApplication::translate("MainWindow", "Show All", nullptr));
        RBice->setText(QApplication::translate("MainWindow", "Ice", nullptr));
        RBsteel->setText(QApplication::translate("MainWindow", "Steel", nullptr));
        RBdragon->setText(QApplication::translate("MainWindow", "Dragon", nullptr));
        RBfairy->setText(QApplication::translate("MainWindow", "Fairy", nullptr));
        RBghost->setText(QApplication::translate("MainWindow", "Ghost", nullptr));
        RBpsy->setText(QApplication::translate("MainWindow", "Psychic", nullptr));
        RBground->setText(QApplication::translate("MainWindow", "Ground", nullptr));
        RBbug->setText(QApplication::translate("MainWindow", "Bug", nullptr));
        RBwhater->setText(QApplication::translate("MainWindow", "Water", nullptr));
        RBfire->setText(QApplication::translate("MainWindow", "Fire", nullptr));
        RBeletric->setText(QApplication::translate("MainWindow", "Electric", nullptr));
        RBrock->setText(QApplication::translate("MainWindow", "Rock", nullptr));
        RBpoison->setText(QApplication::translate("MainWindow", "Poison", nullptr));
        RBgrass->setText(QApplication::translate("MainWindow", "Grass", nullptr));
        RBfight->setText(QApplication::translate("MainWindow", "Fighting", nullptr));
        RBfly->setText(QApplication::translate("MainWindow", "Flying", nullptr));
        RBdark->setText(QApplication::translate("MainWindow", "Dark", nullptr));
        RBnormal->setText(QApplication::translate("MainWindow", "Normal", nullptr));
        filterBtn->setText(QApplication::translate("MainWindow", "Filter", nullptr));
        compareBtn->setText(QApplication::translate("MainWindow", "Compare", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Dex num", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Type 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Type 2", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Hp", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Atk", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Def.", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Sp. Atk.", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Sp. Def.", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Speed", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Total", nullptr));
        close->setText(QApplication::translate("MainWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
