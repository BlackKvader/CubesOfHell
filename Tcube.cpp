/*
  Just a network used for other strutures


  most basic class for structure
  contains pointers to neighbours (and derfore no boundary conditions)
  also option to endure structure with second derivative
  or conect like single spring
  also check for maximum angles/distance
  and of course makeStep() that checks if there is colision.
*/

// this part go to Tcube.hpp later
class Tcube{
public:
  void makeStep(); //makes single step
}
