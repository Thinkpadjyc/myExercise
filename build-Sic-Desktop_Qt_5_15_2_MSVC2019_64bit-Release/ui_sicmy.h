/********************************************************************************
** Form generated from reading UI file 'sicmy.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SICMY_H
#define UI_SICMY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sicmy
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *labelScanCodeQuantity;
    QLabel *label_22;
    QLabel *label_24;
    QLabel *labelStaticName;
    QPushButton *pushButtonStart;
    QLabel *labelDEquipmentID_2;
    QLabel *labScanDCodeNGTag;
    QLineEdit *lineEditHcodeValue;
    QLabel *labelDEquipmentID;
    QLabel *labelDcodeQuantityNow;
    QLabel *labelDEquipmentIDName;
    QLabel *labelStaticName01;
    QLabel *labelCodeH;
    QLabel *labelScanDcodeNGVal;
    QLabel *labelScanCodeQuantity_2;
    QLabel *labelStatus;
    QLabel *labelHcodeQuantityNow;
    QLabel *labelDEquipmentIDName_2;
    QLabel *labelCodeBatch;
    QLabel *labelCodeD;
    QLineEdit *lineEditDcodeValue;
    QLabel *labellStatusIcon;
    QLabel *label_18;
    QLabel *label_11;
    QLabel *label_17;
    QLabel *label_12;

    void setupUi(QWidget *Sicmy)
    {
        if (Sicmy->objectName().isEmpty())
            Sicmy->setObjectName(QString::fromUtf8("Sicmy"));
        Sicmy->resize(550, 253);
        gridLayout_2 = new QGridLayout(Sicmy);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(Sicmy);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget{border:3px solid rgb:0,0,0}"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelScanCodeQuantity = new QLabel(widget);
        labelScanCodeQuantity->setObjectName(QString::fromUtf8("labelScanCodeQuantity"));
        QFont font;
        font.setPointSize(15);
        labelScanCodeQuantity->setFont(font);

        gridLayout->addWidget(labelScanCodeQuantity, 1, 5, 1, 2);

        label_22 = new QLabel(widget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font);

        gridLayout->addWidget(label_22, 5, 5, 1, 1);

        label_24 = new QLabel(widget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font);

        gridLayout->addWidget(label_24, 5, 0, 1, 1);

        labelStaticName = new QLabel(widget);
        labelStaticName->setObjectName(QString::fromUtf8("labelStaticName"));
        QFont font1;
        font1.setPointSize(18);
        labelStaticName->setFont(font1);

        gridLayout->addWidget(labelStaticName, 0, 5, 1, 2);

        pushButtonStart = new QPushButton(widget);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));
        pushButtonStart->setFont(font);

        gridLayout->addWidget(pushButtonStart, 0, 0, 1, 2);

        labelDEquipmentID_2 = new QLabel(widget);
        labelDEquipmentID_2->setObjectName(QString::fromUtf8("labelDEquipmentID_2"));
        labelDEquipmentID_2->setFont(font);
        labelDEquipmentID_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelDEquipmentID_2, 4, 5, 1, 2);

        labScanDCodeNGTag = new QLabel(widget);
        labScanDCodeNGTag->setObjectName(QString::fromUtf8("labScanDCodeNGTag"));
        labScanDCodeNGTag->setFont(font);

        gridLayout->addWidget(labScanDCodeNGTag, 2, 0, 1, 2);

        lineEditHcodeValue = new QLineEdit(widget);
        lineEditHcodeValue->setObjectName(QString::fromUtf8("lineEditHcodeValue"));
        lineEditHcodeValue->setFont(font);
        lineEditHcodeValue->setReadOnly(true);

        gridLayout->addWidget(lineEditHcodeValue, 3, 1, 1, 4);

        labelDEquipmentID = new QLabel(widget);
        labelDEquipmentID->setObjectName(QString::fromUtf8("labelDEquipmentID"));
        labelDEquipmentID->setFont(font);
        labelDEquipmentID->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelDEquipmentID, 2, 5, 1, 2);

        labelDcodeQuantityNow = new QLabel(widget);
        labelDcodeQuantityNow->setObjectName(QString::fromUtf8("labelDcodeQuantityNow"));
        labelDcodeQuantityNow->setFont(font);
        labelDcodeQuantityNow->setContextMenuPolicy(Qt::DefaultContextMenu);
        labelDcodeQuantityNow->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelDcodeQuantityNow, 1, 7, 1, 1);

        labelDEquipmentIDName = new QLabel(widget);
        labelDEquipmentIDName->setObjectName(QString::fromUtf8("labelDEquipmentIDName"));
        labelDEquipmentIDName->setFont(font);

        gridLayout->addWidget(labelDEquipmentIDName, 2, 4, 1, 1);

        labelStaticName01 = new QLabel(widget);
        labelStaticName01->setObjectName(QString::fromUtf8("labelStaticName01"));
        labelStaticName01->setFont(font1);
        labelStaticName01->setContextMenuPolicy(Qt::DefaultContextMenu);
        labelStaticName01->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelStaticName01, 0, 7, 1, 1);

        labelCodeH = new QLabel(widget);
        labelCodeH->setObjectName(QString::fromUtf8("labelCodeH"));
        labelCodeH->setFont(font);

        gridLayout->addWidget(labelCodeH, 3, 0, 1, 1);

        labelScanDcodeNGVal = new QLabel(widget);
        labelScanDcodeNGVal->setObjectName(QString::fromUtf8("labelScanDcodeNGVal"));
        labelScanDcodeNGVal->setFont(font);
        labelScanDcodeNGVal->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelScanDcodeNGVal, 2, 2, 1, 1);

        labelScanCodeQuantity_2 = new QLabel(widget);
        labelScanCodeQuantity_2->setObjectName(QString::fromUtf8("labelScanCodeQuantity_2"));
        labelScanCodeQuantity_2->setFont(font);

        gridLayout->addWidget(labelScanCodeQuantity_2, 3, 5, 1, 1);

        labelStatus = new QLabel(widget);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));
        labelStatus->setFont(font);

        gridLayout->addWidget(labelStatus, 8, 0, 1, 2);

        labelHcodeQuantityNow = new QLabel(widget);
        labelHcodeQuantityNow->setObjectName(QString::fromUtf8("labelHcodeQuantityNow"));
        labelHcodeQuantityNow->setFont(font);
        labelHcodeQuantityNow->setContextMenuPolicy(Qt::DefaultContextMenu);
        labelHcodeQuantityNow->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelHcodeQuantityNow, 3, 7, 1, 1);

        labelDEquipmentIDName_2 = new QLabel(widget);
        labelDEquipmentIDName_2->setObjectName(QString::fromUtf8("labelDEquipmentIDName_2"));
        labelDEquipmentIDName_2->setFont(font);

        gridLayout->addWidget(labelDEquipmentIDName_2, 4, 0, 1, 2);

        labelCodeBatch = new QLabel(widget);
        labelCodeBatch->setObjectName(QString::fromUtf8("labelCodeBatch"));
        labelCodeBatch->setFont(font);
        labelCodeBatch->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelCodeBatch, 3, 6, 1, 1);

        labelCodeD = new QLabel(widget);
        labelCodeD->setObjectName(QString::fromUtf8("labelCodeD"));
        labelCodeD->setFont(font);

        gridLayout->addWidget(labelCodeD, 1, 0, 1, 1);

        lineEditDcodeValue = new QLineEdit(widget);
        lineEditDcodeValue->setObjectName(QString::fromUtf8("lineEditDcodeValue"));
        lineEditDcodeValue->setFont(font);
        lineEditDcodeValue->setReadOnly(true);

        gridLayout->addWidget(lineEditDcodeValue, 1, 1, 1, 4);

        labellStatusIcon = new QLabel(widget);
        labellStatusIcon->setObjectName(QString::fromUtf8("labellStatusIcon"));
        labellStatusIcon->setFont(font);
        labellStatusIcon->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labellStatusIcon, 8, 2, 1, 1);

        label_18 = new QLabel(widget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_18, 5, 6, 1, 2);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        gridLayout->addWidget(label_11, 5, 1, 1, 1);

        label_17 = new QLabel(widget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font);

        gridLayout->addWidget(label_17, 5, 2, 1, 1);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_12, 5, 3, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(Sicmy);

        QMetaObject::connectSlotsByName(Sicmy);
    } // setupUi

    void retranslateUi(QWidget *Sicmy)
    {
        Sicmy->setWindowTitle(QCoreApplication::translate("Sicmy", "Form", nullptr));
#if QT_CONFIG(tooltip)
        labelScanCodeQuantity->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        labelScanCodeQuantity->setText(QCoreApplication::translate("Sicmy", "\346\211\253\347\240\201\346\225\260", nullptr));
        label_22->setText(QCoreApplication::translate("Sicmy", "\344\270\212\344\274\240\347\216\207", nullptr));
        label_24->setText(QCoreApplication::translate("Sicmy", "\346\211\253\347\240\201\347\216\207", nullptr));
        labelStaticName->setText(QCoreApplication::translate("Sicmy", "\345\267\245\344\275\215\345\217\267\357\274\232", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("Sicmy", "\347\224\237\344\272\247\347\273\223\346\235\237", nullptr));
        labelDEquipmentID_2->setText(QCoreApplication::translate("Sicmy", "PPMY101023", nullptr));
        labScanDCodeNGTag->setText(QCoreApplication::translate("Sicmy", "\346\211\253\347\240\201NG\346\225\260\357\274\232", nullptr));
        labelDEquipmentID->setText(QCoreApplication::translate("Sicmy", "PPMY101023", nullptr));
        labelDcodeQuantityNow->setText(QCoreApplication::translate("Sicmy", "10000", nullptr));
        labelDEquipmentIDName->setText(QCoreApplication::translate("Sicmy", "\350\256\276\345\244\207ID\357\274\232", nullptr));
        labelStaticName01->setText(QCoreApplication::translate("Sicmy", "10", nullptr));
#if QT_CONFIG(tooltip)
        labelCodeH->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        labelCodeH->setText(QCoreApplication::translate("Sicmy", "\350\242\213\347\240\201\357\274\232", nullptr));
        labelScanDcodeNGVal->setText(QCoreApplication::translate("Sicmy", "#####", nullptr));
#if QT_CONFIG(tooltip)
        labelScanCodeQuantity_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        labelScanCodeQuantity_2->setText(QCoreApplication::translate("Sicmy", "\346\211\253\347\240\201\346\225\260", nullptr));
        labelStatus->setText(QCoreApplication::translate("Sicmy", "\347\224\237\344\272\247\347\212\266\346\200\201\357\274\232", nullptr));
        labelHcodeQuantityNow->setText(QCoreApplication::translate("Sicmy", "100000", nullptr));
        labelDEquipmentIDName_2->setText(QCoreApplication::translate("Sicmy", "\350\256\276\345\244\207ID\357\274\232", nullptr));
        labelCodeBatch->setText(QCoreApplication::translate("Sicmy", "[##]", nullptr));
#if QT_CONFIG(tooltip)
        labelCodeD->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        labelCodeD->setText(QCoreApplication::translate("Sicmy", "\347\256\261\347\240\201\357\274\232", nullptr));
        labellStatusIcon->setText(QCoreApplication::translate("Sicmy", "\345\233\276\346\240\207", nullptr));
        label_18->setText(QCoreApplication::translate("Sicmy", "100.00%", nullptr));
        label_11->setText(QCoreApplication::translate("Sicmy", "100.00%", nullptr));
        label_17->setText(QCoreApplication::translate("Sicmy", "\350\242\213\347\240\201", nullptr));
        label_12->setText(QCoreApplication::translate("Sicmy", "100.00%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sicmy: public Ui_Sicmy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SICMY_H
