#ifndef POKEMON_CONTOLLER_H
#define POKEMON_CONTOLLER_H
#include "pokemon.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QFile>
#include<vector>
#include <QString>
#include<string>
#include <QDebug>
#include <fstream>


void popolate_table( QTableWidget *table, std::list<pokemon>::iterator b, std::list<pokemon>::iterator e);
void load_pokedex(std::list<pokemon> &pokemonList, int totalPokeNum, std::string typefilter);

#endif // POKEMON_CONTOLLER_H
