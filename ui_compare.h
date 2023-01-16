/********************************************************************************
** Form generated from reading UI file 'compare.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPARE_H
#define UI_COMPARE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Compare
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QComboBox *comboBox2;
    QLabel *label2;
    QPushButton *BTchart;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *labelType1;
    QLabel *label_type2_1;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLabel *label_type2_2;
    QLabel *labelType2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_11;
    QLabel *label_7;
    QLabel *label_12;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_hp2;
    QLabel *label_13;
    QLabel *labelsp_atk1;
    QLabel *label_sp_def1;
    QLabel *label_speed1;
    QLabel *label_atk2;
    QLabel *label_def2;
    QLabel *label_sp_atk2;
    QLabel *label_sp_def2;
    QLabel *label_speed2;
    QLabel *label_atk1;
    QLabel *label_hp1;
    QLabel *label_def1;

    void setupUi(QDialog *Compare)
    {
        if (Compare->objectName().isEmpty())
            Compare->setObjectName(QString::fromUtf8("Compare"));
        Compare->resize(650, 795);
        comboBox = new QComboBox(Compare);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 10, 181, 25));
        label = new QLabel(Compare);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 211, 201));
        label->setPixmap(QPixmap(QString::fromUtf8("question-mark.jpg")));
        label->setScaledContents(true);
        comboBox2 = new QComboBox(Compare);
        comboBox2->setObjectName(QString::fromUtf8("comboBox2"));
        comboBox2->setEnabled(false);
        comboBox2->setGeometry(QRect(460, 10, 181, 25));
        label2 = new QLabel(Compare);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(430, 40, 211, 201));
        label2->setPixmap(QPixmap(QString::fromUtf8("question-mark.jpg")));
        label2->setScaledContents(true);
        BTchart = new QPushButton(Compare);
        BTchart->setObjectName(QString::fromUtf8("BTchart"));
        BTchart->setEnabled(false);
        BTchart->setGeometry(QRect(280, 220, 93, 29));
        horizontalFrame = new QFrame(Compare);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        horizontalFrame->setGeometry(QRect(10, 300, 821, 671));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayoutWidget = new QWidget(Compare);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 260, 631, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        labelType1 = new QLabel(horizontalLayoutWidget);
        labelType1->setObjectName(QString::fromUtf8("labelType1"));

        horizontalLayout_2->addWidget(labelType1);

        label_type2_1 = new QLabel(horizontalLayoutWidget);
        label_type2_1->setObjectName(QString::fromUtf8("label_type2_1"));

        horizontalLayout_2->addWidget(label_type2_1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        label_type2_2 = new QLabel(horizontalLayoutWidget);
        label_type2_2->setObjectName(QString::fromUtf8("label_type2_2"));

        horizontalLayout_2->addWidget(label_type2_2);

        labelType2 = new QLabel(horizontalLayoutWidget);
        labelType2->setObjectName(QString::fromUtf8("labelType2"));

        horizontalLayout_2->addWidget(labelType2);

        gridLayoutWidget = new QWidget(Compare);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(234, 40, 181, 157));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 3, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 1, 1, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_12, 4, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 0, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 2, 1, 1, 1);

        label_hp2 = new QLabel(gridLayoutWidget);
        label_hp2->setObjectName(QString::fromUtf8("label_hp2"));
        label_hp2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_hp2, 0, 2, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_13, 5, 1, 1, 1);

        labelsp_atk1 = new QLabel(gridLayoutWidget);
        labelsp_atk1->setObjectName(QString::fromUtf8("labelsp_atk1"));

        gridLayout->addWidget(labelsp_atk1, 3, 0, 1, 1);

        label_sp_def1 = new QLabel(gridLayoutWidget);
        label_sp_def1->setObjectName(QString::fromUtf8("label_sp_def1"));

        gridLayout->addWidget(label_sp_def1, 4, 0, 1, 1);

        label_speed1 = new QLabel(gridLayoutWidget);
        label_speed1->setObjectName(QString::fromUtf8("label_speed1"));

        gridLayout->addWidget(label_speed1, 5, 0, 1, 1);

        label_atk2 = new QLabel(gridLayoutWidget);
        label_atk2->setObjectName(QString::fromUtf8("label_atk2"));
        label_atk2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_atk2, 1, 2, 1, 1);

        label_def2 = new QLabel(gridLayoutWidget);
        label_def2->setObjectName(QString::fromUtf8("label_def2"));
        label_def2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_def2, 2, 2, 1, 1);

        label_sp_atk2 = new QLabel(gridLayoutWidget);
        label_sp_atk2->setObjectName(QString::fromUtf8("label_sp_atk2"));
        label_sp_atk2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_sp_atk2, 3, 2, 1, 1);

        label_sp_def2 = new QLabel(gridLayoutWidget);
        label_sp_def2->setObjectName(QString::fromUtf8("label_sp_def2"));
        label_sp_def2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_sp_def2, 4, 2, 1, 1);

        label_speed2 = new QLabel(gridLayoutWidget);
        label_speed2->setObjectName(QString::fromUtf8("label_speed2"));
        label_speed2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_speed2, 5, 2, 1, 1);

        label_atk1 = new QLabel(gridLayoutWidget);
        label_atk1->setObjectName(QString::fromUtf8("label_atk1"));

        gridLayout->addWidget(label_atk1, 1, 0, 1, 1);

        label_hp1 = new QLabel(gridLayoutWidget);
        label_hp1->setObjectName(QString::fromUtf8("label_hp1"));

        gridLayout->addWidget(label_hp1, 0, 0, 1, 1);

        label_def1 = new QLabel(gridLayoutWidget);
        label_def1->setObjectName(QString::fromUtf8("label_def1"));

        gridLayout->addWidget(label_def1, 2, 0, 1, 1);


        retranslateUi(Compare);

        QMetaObject::connectSlotsByName(Compare);
    } // setupUi

    void retranslateUi(QDialog *Compare)
    {
        Compare->setWindowTitle(QApplication::translate("Compare", "Dialog", nullptr));
        label->setText(QString());
        label2->setText(QString());
        BTchart->setText(QApplication::translate("Compare", "View chart", nullptr));
        label_2->setText(QApplication::translate("Compare", "Type:", nullptr));
        labelType1->setText(QString());
        label_type2_1->setText(QString());
        label_3->setText(QApplication::translate("Compare", "Type:", nullptr));
        label_type2_2->setText(QString());
        labelType2->setText(QString());
        label_11->setText(QApplication::translate("Compare", "Sp atk", nullptr));
        label_7->setText(QApplication::translate("Compare", "Atk", nullptr));
        label_12->setText(QApplication::translate("Compare", "Sp def", nullptr));
        label_9->setText(QApplication::translate("Compare", "Hp", nullptr));
        label_10->setText(QApplication::translate("Compare", "Def", nullptr));
        label_hp2->setText(QString());
        label_13->setText(QApplication::translate("Compare", "Speed", nullptr));
        labelsp_atk1->setText(QString());
        label_sp_def1->setText(QString());
        label_speed1->setText(QString());
        label_atk2->setText(QString());
        label_def2->setText(QString());
        label_sp_atk2->setText(QString());
        label_sp_def2->setText(QString());
        label_speed2->setText(QString());
        label_atk1->setText(QString());
        label_hp1->setText(QString());
        label_def1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Compare: public Ui_Compare {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPARE_H
