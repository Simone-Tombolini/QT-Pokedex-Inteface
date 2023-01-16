#ifndef COMPARE_H
#define COMPARE_H

#include <QDialog>

namespace Ui {
class Compare;
}

class Compare : public QDialog
{
    Q_OBJECT

public:
    explicit Compare(QWidget *parent = nullptr);
    ~Compare();

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_activated(int index);



    void on_comboBox2_activated(int index);

    void on_BTchart_clicked();

    void on_comboBox2_currentIndexChanged(int index);

private:
    Ui::Compare *ui;
};

#endif // COMPARE_H
