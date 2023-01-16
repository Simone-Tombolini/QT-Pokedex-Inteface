#include "compare.h"
#include "ui_compare.h"
#include "pokemon.h"
#include "pokemon_contoller.h"
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QtCharts/QHorizontalBarSeries>

QT_CHARTS_USE_NAMESPACE

Compare::Compare(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Compare)
{
    ui->setupUi(this);
    std::list<pokemon> pokemonList;
    int all_pokemon_number = 1190;
    load_pokedex(pokemonList, all_pokemon_number, "all");

    std::list<pokemon>::iterator b;
    b = pokemonList.begin();
    std::list<pokemon>::iterator e;
    e = pokemonList.end();
    std::string str = "None";
    QString item = QString::fromStdString(str);
     ui->comboBox->addItem(item);
     for (; b!=e; ++b){
        std::string str = b->name();
        QString item = QString::fromStdString(str);
        ui->comboBox->addItem(item);
     }

     QBarSet *set0 = new QBarSet("Left pokemon");
     QBarSet *set1 = new QBarSet("Right pokemon");


     *set0 << 0 << 0 << 0 << 0 << 0 << 0;
     *set1 << 0 << 0 << 0 << 0 << 0 << 0;


     QHorizontalBarSeries *series = new QHorizontalBarSeries();
     series->append(set0);
     series->append(set1);


     QChart *chart = new QChart();


     chart->addSeries(series);
     chart->setTitle("Statistics");
     chart->setAnimationOptions(QChart::SeriesAnimations);

     QStringList categories;
     categories << "Hp" << "Atk" << "Def" << "Sp Atk" << "Sp Def" << "Speed";
     QBarCategoryAxis *axisY = new QBarCategoryAxis();
     axisY->append(categories);
     chart->addAxis(axisY, Qt::AlignLeft);
     series->attachAxis(axisY);
     QValueAxis *axisX = new QValueAxis();
     chart->addAxis(axisX, Qt::AlignBottom);
     series->attachAxis(axisX);
     axisX->applyNiceNumbers();

     chart->legend()->setVisible(true);
     chart->legend()->setAlignment(Qt::AlignBottom);

     QChartView *chartView = new QChartView(chart);
     chartView->setRenderHint(QPainter::Antialiasing);
     chartView->setParent(ui->horizontalFrame);
    // ui->horizontalFrame->showNormal();

}

Compare::~Compare()
{
    delete ui;
}

void Compare::on_comboBox_currentIndexChanged(int index)
{
    if(index==0){
        ui->labelType1->setText("");

        ui->label_type2_1->setText("");

        ui->label_hp1->setText("");

        ui->label_def1->setText("");

        ui->label_speed1->setText("");

        ui->label_atk1->setText("");

        ui->labelsp_atk1->setText("");

        ui->label_sp_def1->setText("");

    }else{
        std::list<pokemon> pokemonList;
        int all_pokemon_number = 1190;
        load_pokedex(pokemonList, all_pokemon_number, "all");

        std::list<pokemon>::iterator b;
        b = pokemonList.begin();
        std::list<pokemon>::iterator e;
        e = pokemonList.end();

        for (; b!=e; ++b){
            std::string str = b->name();
            QString item = QString::fromStdString(str);
            if(item == ui->comboBox->itemText(index))
            {
                std::string strtype1 = b->type1();
                QString tyitem = QString::fromStdString(strtype1);
                ui->labelType1->setText(tyitem);

                std::string strtype2 = " " + b->type2();
                QString ty2item = QString::fromStdString(strtype2);
                ui->label_type2_1->setText(ty2item);

                std::string strhp = b->hp();
                QString hpitem = QString::fromStdString(strhp);
                ui->label_hp1->setText(hpitem);

                std::string strdef = b->def();
                QString defitem = QString::fromStdString(strdef);
                ui->label_def1->setText(defitem);

                std::string strspeed = b->speed();
                QString speeditem = QString::fromStdString(strspeed);
                ui->label_speed1->setText(speeditem);

                std::string stratk = b->atk();
                QString atkitem = QString::fromStdString(stratk);
                ui->label_atk1->setText(atkitem);

                std::string stratks = b->sp_atk();
                QString atksitem = QString::fromStdString(stratks);
                ui->labelsp_atk1->setText(atksitem);

                std::string strdefs = b->sp_def();
                QString defsitem = QString::fromStdString(strdefs);
                ui->label_sp_def1->setText(defsitem);
            }

        }

    }

}


void Compare::on_comboBox_activated(int index)
{

    ui->comboBox2->setEnabled(true);
    ui->comboBox2->clear();

    std::list<pokemon> pokemonList;
    int all_pokemon_number = 1190;
    load_pokedex(pokemonList, all_pokemon_number, "all");

    std::list<pokemon>::iterator b;
    b = pokemonList.begin();
    std::list<pokemon>::iterator e;
    e = pokemonList.end();
    std::string str = "None";
    QString item = QString::fromStdString(str);
    QPixmap mypix2 ("question-mark.jpg");
    ui->label->setPixmap(mypix2);
     ui->comboBox2->addItem(item);
    for (; b!=e; ++b){

        std::string str = b->name();
        QString item = QString::fromStdString(str);
        if(item != ui->comboBox->currentText()){
            ui->comboBox2->addItem(item);
        }
        if(item == ui->comboBox->currentText()){
            std::string str = b->link();
            QString item = QString::fromStdString(str);
            QPixmap mypix (item);
            ui->label->setPixmap(mypix);
        }
    }
    QPixmap mypix ("question-mark.jpg");
    ui->label2->setPixmap(mypix);
    if(index == 0 || ui->comboBox2->currentIndex() == 0){
        ui->BTchart->setEnabled(false);
    }else{
        ui->BTchart->setEnabled(true);
    }


}

void Compare::on_comboBox2_activated(int index)
{
    std::list<pokemon> pokemonList;
    int all_pokemon_number = 1190;
    load_pokedex(pokemonList, all_pokemon_number, "all");

    std::list<pokemon>::iterator b;
    b = pokemonList.begin();
    std::list<pokemon>::iterator e;
    e = pokemonList.end();
    for (; b!=e; ++b){

        std::string str = b->name();
        QString item = QString::fromStdString(str);
        if(item == ui->comboBox2->currentText()){
            std::string str = b->link();
            QString item = QString::fromStdString(str);
            QPixmap mypix (item);
            ui->label2->setPixmap(mypix);
        }
    }
    if(index==0){
        QPixmap mypix ("question-mark.jpg");
        ui->label2->setPixmap(mypix);

    }
    if(index == 0 || ui->comboBox->currentIndex() == 0){
        ui->BTchart->setEnabled(false);
    }else{
        ui->BTchart->setEnabled(true);
    }
}


void Compare::on_BTchart_clicked()
{

    std::list<pokemon> pokemonList;
    int all_pokemon_number = 1190;
    load_pokedex(pokemonList, all_pokemon_number, "all");

    std::list<pokemon>::iterator b;
    b = pokemonList.begin();
    std::list<pokemon>::iterator e;
    e = pokemonList.end();
    QString pokemon1_name;
    int hp1,atk1,def1,spatk1,spdef1,speed1;
    QString pokemon2_name;
    int hp2,atk2,def2,spatk2,spdef2,speed2;

        for (; b!=e; ++b){
            std::string str = b->name();
            QString item = QString::fromStdString(str);
            if(item == ui->comboBox->itemText(ui->comboBox->currentIndex()))
            {
                pokemon1_name = item;
                hp1=std::stoi(b->hp());
                atk1=std::stoi(b->atk());
                def1=std::stoi(b->def());
                spatk1=std::stoi(b->sp_atk());
                spdef1=std::stoi(b->sp_def());
                speed1=std::stoi(b->speed());

            }
            if(item == ui->comboBox2->itemText(ui->comboBox2->currentIndex()))
            {
                pokemon2_name = item;
                hp2=std::stoi(b->hp());
                atk2=std::stoi(b->atk());
                def2=std::stoi(b->def());
                spatk2=std::stoi(b->sp_atk());
                spdef2=std::stoi(b->sp_def());
                speed2=std::stoi(b->speed());

            }
        }
/*
if(ui->comboBox->itemText(ui->comboBox->currentIndex())!= "None" ){

    pokemon1_name = "None";
    hp1=0;
    atk1=0;
    def1=0;
    spatk1=0;
    spdef1=0;
    speed1=0;

}
if(ui->comboBox2->itemText(ui->comboBox->currentIndex())== "None")
{
    pokemon2_name = "None";
    hp2=0;
    atk2=0;
    def2=0;
    spatk2=0;
    spdef2=0;
    speed2=0;
}*/
    QBarSet *set0 = new QBarSet(pokemon1_name);
    QBarSet *set1 = new QBarSet(pokemon2_name);


    *set0 << hp1 << atk1 << def1 << spatk1 << spdef1 << speed1;
    *set1 << hp2 << atk2 << def2 << spatk2 << spdef2 << speed2;

    QHorizontalBarSeries *series = new QHorizontalBarSeries();
    series->append(set0);
    series->append(set1);


    QChart *chart = new QChart();


    chart->addSeries(series);
    chart->setTitle("Statistics");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories;
    categories << "Hp" << "Atk" << "Def" << "Sp Atk" << "Sp Def" << "Speed";
    QBarCategoryAxis *axisY = new QBarCategoryAxis();
    axisY->append(categories);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);
    QValueAxis *axisX = new QValueAxis();
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);
    axisX->applyNiceNumbers();

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    ui->horizontalFrame->hide();
    chartView->setParent(ui->horizontalFrame);
    ui->horizontalFrame->show();
}


void Compare::on_comboBox2_currentIndexChanged(int index)
{
    if(index==0){
        ui->labelType2->setText("");

        ui->label_type2_2->setText("");

        ui->label_hp2->setText("");

        ui->label_def2->setText("");

        ui->label_speed2->setText("");

        ui->label_atk2->setText("");

        ui->label_sp_atk2->setText("");

        ui->label_sp_def2->setText("");

    }else{
        std::list<pokemon> pokemonList;
        int all_pokemon_number = 1190;
        load_pokedex(pokemonList, all_pokemon_number, "all");

        std::list<pokemon>::iterator b;
        b = pokemonList.begin();
        std::list<pokemon>::iterator e;
        e = pokemonList.end();

        for (; b!=e; ++b){
            std::string str = b->name();
            QString item = QString::fromStdString(str);
            if(item == ui->comboBox2->itemText(index))
            {
                std::string strtype1 = b->type1();
                QString tyitem = QString::fromStdString(strtype1);
                ui->labelType2->setText(tyitem);

                std::string strtype2 = " " + b->type2();
                QString ty2item = QString::fromStdString(strtype2);
                ui->label_type2_2->setText(ty2item);

                std::string strhp = b->hp();
                QString hpitem = QString::fromStdString(strhp);
                ui->label_hp2->setText(hpitem);

                std::string strdef = b->def();
                QString defitem = QString::fromStdString(strdef);
                ui->label_def2->setText(defitem);

                std::string strspeed = b->speed();
                QString speeditem = QString::fromStdString(strspeed);
                ui->label_speed2->setText(speeditem);

                std::string stratk = b->atk();
                QString atkitem = QString::fromStdString(stratk);
                ui->label_atk2->setText(atkitem);

                std::string stratks = b->sp_atk();
                QString atksitem = QString::fromStdString(stratks);
                ui->label_sp_atk2->setText(atksitem);

                std::string strdefs = b->sp_def();
                QString defsitem = QString::fromStdString(strdefs);
                ui->label_sp_def2->setText(defsitem);
            }

        }

    }
}

