/*
  Just a network used for other strutures
  list of content in Pobj (pointer to objects)
*/

#ifndef _Tcube_hpp // guardian of treasure :)
#define _Tcube_hpp

#include "Tvector.hpp"
#include "Tobj.hpp"

#define max_inside 3 	// maximum number of Tobj of same structure inside one Tcube.
  						// Tobj inside Tcube interact therefore keep low.

// this part go to Tcube.hpp later
class Tcube{
public:
  Tvector pos; // position in the world
  char n_inside; // number of Tobj inside
  Tobj* Pobj[max_inside]; // pointer tovobject inside
};

#endif
