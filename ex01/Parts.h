#ifndef PARTS_H
# define PARTS_H
#include <string>
using namespace std;

class Arms{
  bool _func;
  string _serial;
 public:
  Arms(string serial = "A-01", bool f = true);
  ~Arms();
  void informations() const;
  bool isFunctionnal() const{return _func;};
  string serial()const{return _serial;};
};

class Legs{
  bool _func;
  string _serial;
 public:
  Legs(string serial = "L-01", bool f = true);
  ~Legs();
  void informations() const;
  bool isFunctionnal() const{return _func;};
  string serial()const{return _serial;};
};

class Head{
  bool _func;
  string _serial;
 public:
  Head(string serial = "H-01", bool f = true);
  ~Head();
  virtual void informations() const;
  bool isFunctionnal() const{return _func;};
  string serial()const{return _serial;};
};

#endif