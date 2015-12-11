/*
  !! Always standard axis in 3D !!

  class of moving cubes or better objects in Tcube lattice
  always just one Tobj in Tcube

  most basic class for structure
  contains pointers to neighbours (and derfore no boundary conditions)
  also option to endure structure with second derivative
  or conect like single spring
  also check for maximum angles/distance
  and of course makeStep() that checks if there is colision.
*/

// this goes to the header later
class Tobj{
	public:
	double m; //mass
	Tvector pos; // podition
	Tvector v; // velocity
	Tobj* up,down,left,right,front,back; // not lucky names :)
	// up,down x axis // left,right y // front,back z
	
}