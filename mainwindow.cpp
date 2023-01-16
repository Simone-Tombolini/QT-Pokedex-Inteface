#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "compare.h"

#include "pokemon.h"
#include "pokemon_contoller.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    std::list<pokemon> pokemonList;
    int all_pokemon_number = 1190;
    load_pokedex(pokemonList, all_pokemon_number, "all");

    std::list<pokemon>::iterator b;
    b = pokemonList.begin();
    std::list<pokemon>::iterator e;
    e = pokemonList.end();
    QTableWidget *table = ui->tableWidget;
    popolate_table(table, b, e);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_filterBtn_clicked()
{
    /*
 */


   std::string filtertype = "all";

   if(ui->RBall->isChecked() == true)
   {
       filtertype = "all";
   }
   if(ui->RBgrass->isChecked() == true)
   {
       filtertype = "Grass";
   }
   if(ui->RBfire->isChecked() == true)
   {
       filtertype = "Fire";
   }

   if(ui->RBwhater->isChecked() == true)
   {
       filtertype = "Water";
   }

   if(ui->RBice->isChecked() == true)
   {
       filtertype = "Ice";
   }
   if(ui->RBghost->isChecked() == true)
   {
       filtertype = "Ghost";
   }
   if(ui->RBnormal->isChecked() == true)
   {
       filtertype = "Normal";
   }
   if(ui->RBeletric->isChecked() == true)
   {
       filtertype = "Electric";
   }
   if(ui->RBfly->isChecked() == true)
   {
       filtertype = "Flying";
   }
   if(ui->RBpsy->isChecked() == true)
   {
       filtertype = "Psychic";
   }
   if(ui->RBfairy->isChecked() == true)
   {
       filtertype = "Fairy";
   }
   if(ui->RBsteel->isChecked() == true)
   {
       filtertype = "Steel";
   }

   if(ui->RBdark->isChecked() == true)
   {
       filtertype = "Dark";
   }
   if(ui->RBdragon->isChecked() == true)
   {
       filtertype = "Dragon";
   }
   if(ui->RBfight->isChecked() == true)
   {
       filtertype = "Fighting";
   }
   if(ui->RBrock->isChecked() == true)
   {
       filtertype = "Rock";
   }
   if(ui->RBpoison->isChecked() == true)
   {
       filtertype = "Poison";
   }
   if(ui->RBground->isChecked() == true)
   {
       filtertype = "Ground";
   }
   if(ui->RBbug->isChecked() == true)
   {
       filtertype = "Bug";
   }
    QTableWidget *table = ui->tableWidget;
    table->setRowCount(0);
    std::list<pokemon> pokemonList;
    int all_pokemon_number = 1190;
    load_pokedex(pokemonList, all_pokemon_number, filtertype);

    std::list<pokemon>::iterator b;
    b = pokemonList.begin();
    std::list<pokemon>::iterator e;
    e = pokemonList.end();

    popolate_table(table, b, e);
}


void MainWindow::on_compareBtn_clicked()
{
    Compare compare_dialog;
    compare_dialog.setModal(true);
    compare_dialog.exec();
}

