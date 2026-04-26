/********************************************************************************
** Form generated from reading UI file 'scheduleview.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULEVIEW_H
#define UI_SCHEDULEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ScheduleView
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblTitle;
    QHBoxLayout *filterLayout;
    QLabel *labelDoctor;
    QComboBox *cmbDoctor;
    QLabel *labelDepartment;
    QComboBox *cmbDepartment;
    QPushButton *btnRefresh;
    QTableWidget *tableSchedule;

    void setupUi(QDialog *ScheduleView)
    {
        if (ScheduleView->objectName().isEmpty())
            ScheduleView->setObjectName("ScheduleView");
        ScheduleView->resize(950, 620);
        verticalLayout = new QVBoxLayout(ScheduleView);
        verticalLayout->setObjectName("verticalLayout");
        lblTitle = new QLabel(ScheduleView);
        lblTitle->setObjectName("lblTitle");
        lblTitle->setAlignment(Qt::AlignCenter);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        lblTitle->setFont(font);

        verticalLayout->addWidget(lblTitle);

        filterLayout = new QHBoxLayout();
        filterLayout->setObjectName("filterLayout");
        labelDoctor = new QLabel(ScheduleView);
        labelDoctor->setObjectName("labelDoctor");

        filterLayout->addWidget(labelDoctor);

        cmbDoctor = new QComboBox(ScheduleView);
        cmbDoctor->setObjectName("cmbDoctor");

        filterLayout->addWidget(cmbDoctor);

        labelDepartment = new QLabel(ScheduleView);
        labelDepartment->setObjectName("labelDepartment");

        filterLayout->addWidget(labelDepartment);

        cmbDepartment = new QComboBox(ScheduleView);
        cmbDepartment->setObjectName("cmbDepartment");

        filterLayout->addWidget(cmbDepartment);

        btnRefresh = new QPushButton(ScheduleView);
        btnRefresh->setObjectName("btnRefresh");

        filterLayout->addWidget(btnRefresh);


        verticalLayout->addLayout(filterLayout);

        tableSchedule = new QTableWidget(ScheduleView);
        if (tableSchedule->columnCount() < 7)
            tableSchedule->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableSchedule->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableSchedule->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableSchedule->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableSchedule->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableSchedule->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableSchedule->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableSchedule->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableSchedule->setObjectName("tableSchedule");

        verticalLayout->addWidget(tableSchedule);


        retranslateUi(ScheduleView);

        QMetaObject::connectSlotsByName(ScheduleView);
    } // setupUi

    void retranslateUi(QDialog *ScheduleView)
    {
        ScheduleView->setWindowTitle(QCoreApplication::translate("ScheduleView", "View Schedule", nullptr));
        lblTitle->setText(QCoreApplication::translate("ScheduleView", "Doctors Schedule", nullptr));
        labelDoctor->setText(QCoreApplication::translate("ScheduleView", "Doctor:", nullptr));
        labelDepartment->setText(QCoreApplication::translate("ScheduleView", "Department:", nullptr));
        btnRefresh->setText(QCoreApplication::translate("ScheduleView", "Refresh", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableSchedule->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ScheduleView", "Doctor", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableSchedule->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ScheduleView", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableSchedule->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ScheduleView", "Department", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableSchedule->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ScheduleView", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableSchedule->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ScheduleView", "Start", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableSchedule->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ScheduleView", "End", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableSchedule->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ScheduleView", "Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScheduleView: public Ui_ScheduleView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULEVIEW_H
