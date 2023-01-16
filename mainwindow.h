#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pokemon.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_filterBtn_clicked();

    void on_compareBtn_clicked();

private:
    Ui::MainWindow *ui;
};
void load_pokedex(std::list<pokemon> &pokemonList, int totalPokeNum );

#endif // MAINWINDOW_H
