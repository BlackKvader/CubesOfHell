/*
  Just a network used for other strutures
*/

#ifndef _Tcube_hpp
#define _Tcube_hpp

#include "Tvector.hpp"
#include "Tobj.hpp"

// this part go to Tcube.hpp later
class Tcube{
public:
  Tvector pos;
  bool bool_ocupied; // if is something inside
  Tobj* PObj; // pointer tovobject inside
}

#endif