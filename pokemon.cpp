#include "pokemon.h"

#include<string>

pokemon::pokemon()
{

}
pokemon::pokemon(std::string dexnum,
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
        std::string total):
    _dexnum(dexnum),
    _name(name),
    _link(link),
    _type1(type1),
    _type2(type2),
    _hp(hp),
    _atk(atk),
    _def(def),
    _sp_atk(sp_atk),
    _sp_def(sp_def),
    _speed(speed),
    _total(total)
{

}

std::string pokemon::dexnum(){return _dexnum ;}
std::string pokemon::name(void)const{return _name;}
std::string pokemon::link(void)const{return _link;}
std::string pokemon::type1(void)const{return _type1;}
std::string pokemon::type2(void)const{return _type2;}
std::string pokemon::hp(void)const{return _hp;}
std::string pokemon::atk(void)const{return _atk;}
std::string pokemon::def(void)const{return _def;}
std::string pokemon::sp_atk(void)const{return _sp_atk;}
std::string pokemon::sp_def(void)const{return _sp_def;}
std::string pokemon::speed(void)const{return _speed;}
std::string pokemon::total(void)const{return _total;}
