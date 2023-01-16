#include "pokemon_contoller.h"


void popolate_table( QTableWidget *table, std::list<pokemon>::iterator b, std::list<pokemon>::iterator e)
{

int i =0;
    for (; b!=e; ++b){



            table->insertRow(table->rowCount());

            std::string dex_numS = b->dexnum();
            QString dex_num = QString::fromStdString(dex_numS);
            table->setItem(i,0,new QTableWidgetItem(dex_num));

            std::string nameS = b->name();
            QString name = QString::fromStdString(nameS);
            table->setItem(i,1,new QTableWidgetItem(name));


            std::string type1S = b->type1();
            QString type1 = QString::fromStdString(type1S);
            table->setItem(i,2,new QTableWidgetItem(type1));

            std::string type2S = b->type2();
            QString type2 = QString::fromStdString(type2S);
            table->setItem(i,3,new QTableWidgetItem(type2));


            std::string hpS = b->hp();
            QString hp = QString::fromStdString(hpS);
            table->setItem(i,4,new QTableWidgetItem(hp));

            std::string atk = b->atk();
            QString atkSq = QString::fromStdString(atk);
            table->setItem(i,5,new QTableWidgetItem(atkSq));

            std::string defS = b->def();
            QString def = QString::fromStdString(defS);
            table->setItem(i,6,new QTableWidgetItem(def));

            std::string atkpS = b->sp_atk();
            QString atkp = QString::fromStdString(atkpS);
            table->setItem(i,7,new QTableWidgetItem(atkp));

            std::string defpS = b->sp_def();
            QString defp = QString::fromStdString(defpS);
            table->setItem(i,8,new QTableWidgetItem(defp));

            std::string speedS = b->speed();
            QString speed = QString::fromStdString(speedS);
            table->setItem(i,9,new QTableWidgetItem(speed));


            std::string totalS = b->total();
            QString total = QString::fromStdString(totalS);
            table->setItem(i,10,new QTableWidgetItem(total));
            ++i;
        //++b;
    }
}

void load_pokedex(std::list<pokemon> &pokemonList, int totalPokeNum, std::string typefilter){

    std::string line;
    std::string fname = "pokedex.csv";
    std::ifstream file;
    file.open(fname);

    if(file.is_open())
    {
        int i =0;
        while(i<=totalPokeNum)
        {
            std::string _link="";
            getline(file, _link,',');
            std::string _dexnum="";
            getline(file, _dexnum,',');
            std::string _name="";
            getline(file, _name,',');

            std::string _type1="";
            getline(file, _type1,',');
            std::string _type2="";
            std::string prova = "\"";
            if(!_type1.substr(0,1).compare(prova))
            {
                getline(file, _type2,',');
                _type1 = _type1.substr(1,_type1.length());
                _type2 = _type2.substr(0,_type2.length() -1);
            }else{
                //getline(file, _type2,',');
                _type2 = "";
            }

            std::string _total="";
            getline(file, _total,',');
            std::string _hp="";
            getline(file, _hp,',');
            std::string _atk="";
            getline(file, _atk,',');
            std::string _def="";
            getline(file, _def,',');
            std::string _sp_atk="";
            getline(file, _sp_atk,',');
            std::string _sp_def="";
            getline(file, _sp_def,',');
            std::string _speed="";
            getline(file, _speed);

            if(i!=0){
                if((typefilter == "all")||(typefilter==_type1)||(typefilter== _type2)){
pokemonList.push_back(pokemon(_dexnum, _name, _link, _type1, _type2, _hp, _atk, _def, _sp_atk, _sp_def,_speed, _total));
                }

            }

            ++i;

        }
    }
    file.close();
}

