// header file for class Tvector
// and also TintVec which is integer vector
// some basic operations with vectors

// dodat pretazenie operatorov
// finish setL and null functions

#include <cmath>

class Tvector{
public:
	double x,y,z;
	double l; // can be used if you call l() much times
	
	void add(Tvector &v1);
	void null();  // nulls the vector
	void setL(double l2); // set length of vector
	double l(); // length of vector
	void calcL(); // set length vector
	double scalar(Tvector &v2)
}

void Tvector::add(Tvector &v1){
	x+=v1.x;
	y+=v1.y;
	z+=v1.z;
}

void Tvector::null(){
	x=0; y=0; z=0;
}

void Tvector::setL(double l2){
  l= x*x+y*y+z*z;
  x=x*l2/l;
  y=y*l2/l;
  z=z*l2/l;
}

double Tvector::l(){
	return sqrt(x*x+y*y+z*z);
}

void Tvector::calcL(){
	l= x*x+y*y+z*z;
}

double Tvector::scalar(Tvector &v2){
	return x*v2.x+y*v2.y+z*v2.z;
}

/******  TintVec class   *********/

class TintVec{
public:
	int x,y,z;
	double l; // can be used if you call l() much times
	
	void add(Tvector &v1);
	double l(); // length of vector
	void calcL(); // set length vector
}

void TintVec::add(Tvector &v1){
	x+=v1.x;
	y+=v1.y;
	z+=v1.z;
}

double TintVec::l(){
	return sqrt(x*x+y*y+z*z);
}

void TintVec::calcL(){
	l=x*x+y*y+z*z;
}

