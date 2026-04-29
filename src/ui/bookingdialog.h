#ifndef BOOKINGDIALOG_H
#define BOOKINGDIALOG_H

#include <QDialog>
#include <vector>

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

    void setDoctors(const std::vector<std::pair<QString, QString>>& doctors);
    void setSlots(const std::vector<QString>& slots);

private:
    Ui::BookingDialog *ui;
};

#endif