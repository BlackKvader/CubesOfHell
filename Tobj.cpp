/*
  !! Always standard axis in 3D !!

  class of moving cubes or better objects in Tcube lattice
  always just one Tobj in Tcube

  most basic class for structure
  contains pointers to neighbours (and derfore no boundary conditions)
  also option to endure structure with second derivative - bending
  and conect like single spring
  also check for maximum angles/distance to break springs/bending
  and of course makeStep() that checks if there is colision.
*/

// this goes to the header later
class Tobj{
	public:
    // physical properties
	double m; //mass
	Tvector pos; // position
	Tvector v; // velocity
  Tvector F; // final force
  double k; // spring elasticity (koeficient tuhosti)
  double dump; // dumping of spring
  double k_bend; // elasticity of bending
  double dump_bend; // dumping of bending
  double break_distance; // +-distance when spring breaks

	Tobj* ObjConect[6]; // Pointers to objects that I am conected to
	// up,down x axis // left,right y // front,back z

  // bools
	bool bool_bend_x,bool_bend_y,bool_bend_z; // 1 for active bending force from d2/dx2
  // bool is_local_force_calc; // not yet. implemented. Local force inside Tcube is calculated 3 times
  bool bool_obj_conect[6]; // 

  void calcForce(); // calculates the forces. but just ADD them
  // void checkBreaking(); // check structure for breaking
  void makeStep(); // calc and check everything and than make move due to velocity
  void calcSpringForce(int num); // At first it checks if the spring break
};

void Tobj::calcForce(){
  // later it might be better to just add
  F.null();
  
  // calculation of direct spring press/elongation
  for (int i=0; i<6;i++)
    if (bool_obj_conect[i]==1) calcSpringForce(i);

  // this will be for bending

}

void Tobj::calcSpringForce(int num){
  Tvector Vdelta;
  double pom_l;

  Vdelta=(PObj2.pos-pos);
  pom_l=Vdelta.l();
  if (pom_l-cube_side>break_distance){ // so far you can't break spring by pressing
    bool_obj_conect[num]=0;
    if (num%2==1)
      ObjConect[num].bool_obj_conect[num-1];
    else
      ObjConect[num].bool_obj_conect[num+1];
  }

  F=F+delta*(k+ObjConect[num].k)*(pom_l-cube_side)/2.0; // add spring force, cube side = global variable

  // still have to add dumping force
  // dumping force = (v2-v1)*dump*Force/length(Force)


}
