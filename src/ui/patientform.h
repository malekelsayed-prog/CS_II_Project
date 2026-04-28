#ifndef PATIENTFORM_H
#define PATIENTFORM_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class PatientForm; }
QT_END_NAMESPACE

class PatientForm : public QDialog
{
    Q_OBJECT

public:
    explicit PatientForm(QWidget *parent = nullptr);
    ~PatientForm();

    QString getName() const;
    QString getBirthdate() const;
    QString getGender() const;
    QString getMobile() const;
    QString getNationalID() const;

private:
    Ui::PatientForm *ui;
};

#endif
