#ifndef BOOKINGDIALOG_H
#define BOOKINGDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class BookingDialog; }
QT_END_NAMESPACE

class BookingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BookingDialog(QWidget *parent = nullptr);
    ~BookingDialog();

    QString getPatientID() const;
    QString getDoctorID() const;
    QString getDate() const;
    QString getStartTime() const;

private:
    Ui::BookingDialog *ui;
};

#endif
