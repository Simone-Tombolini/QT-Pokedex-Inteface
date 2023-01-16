#ifndef POKEMON_H
#define POKEMON_H

#include<string>

class pokemon
{
    std::string _dexnum;
    std::string _name;
    std::string _link;
    std::string _type1;
    std::string _type2;
    std::string _hp;
    std::string _atk;
    std::string _def;
    std::string _sp_atk;
    std::string _sp_def;
    std::string _speed;
    std::string _total;



public:
    pokemon();

    pokemon(std::string dexnum,
            std::string name,
            std::string link,
            std::string type1,
            std::string type2,
            std::string hp,
            std::string atk,
            std::string def,
            std::string sp_atk,
            std::string sp_def,
            std::string speed,
            std::string total);

    std::string dexnum(void);
    std::string name(void)const;
    std::string link(void)const;
    std::string type1(void)const;
    std::string type2(void)const;
    std::string hp(void)const;
    std::string atk(void)const;
    std::string def(void)const;
    std::string sp_atk(void)const;
    std::string sp_def(void)const;
    std::string speed(void)const;
    std::string total(void)const;

};

#endif // POKEMON_H
