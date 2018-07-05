#include <iostream>
#include "KoalaBot.h"
#include "Parts.h"
using namespace std;

Arms::Arms(std::string serial, bool f){
  _serial = serial;
  _func = f;
}

Arms::~Arms(){

}

void Arms::informations() const{
  if (this->_func)
    cout << "\t[Parts] Arms " << this->_serial << " status : OK" << endl;
  else
    cout << "\t[Parts] Arms " << this->_serial << " status : KO" << endl;
}

Legs::Legs(string serial, bool f){
  _serial = serial;
  _func = f;
}

Legs::~Legs(){

}

void Legs::informations() const{
    if (this->_func)
    cout << "\t[Parts] Legs " << this->_serial << " status : OK" << endl;
  else
    cout << "\t[Parts] Legs " << this->_serial << " status : KO" << endl;
}

Head::Head(string serial, bool f){
  _serial = serial;
  _func = f;
}

Head::~Head(){

}

void Head::informations() const{
  if (this->_func)
    cout << "\t[Parts] Head " << this->_serial << " status : OK" << endl;
  else
    cout << "\t[Parts] Head " << this->_serial << " status : KO" << endl;
}