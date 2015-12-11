// header file for class Tvector
// and also TintVec which is integer vector
// some basic operations with vectors

// Also additional functions outside the class

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

	// operator overloading
	const Tvector& operator-(const Tvector& v2);
	const Tvector& operator+(const Tvector& v2);
	void operator= (const Tvector& v2);
};

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

const Tvector& Tobj::operator-(const Tvector& v2){
	obj result = *this;
	result.x=result.x-v2.x;
	result.y=result.y-v2.y;
	result.z=result.z-v2.z;
	return result;
}

const Tvector& Tobj::operator+(const Tvector& v2){
	obj result = *this;
	result.x=result.x+v2.x;
	result.y=result.y+v2.y;
	result.z=result.z+v2.z;
	return result;
}

void Tobj::operator= (const Tvector& v2){
	x=v2.x;
	y=v2.y;
	z=v2.z;
}

/********  out of the class overloaded operators  ******/
const Tobj operator* (double k2, const Tvector &v2){
	Tvector result;
	result.x=v2.x*k2;
	result.y=v2.y*k2;
	result.z=v2.z*k2;
	return result;
}

const Tobj operator* (const Tvector &v2, double k2){
	Tvector result;
	result.x=v2.x*k2;
	result.y=v2.y*k2;
	result.z=v2.z*k2;
	return result;
}

const Tobj operator/ (const Tvector &v2, double k2){
	Tvector result;
	result.x=v2.x/k2;
	result.y=v2.y/k2;
	result.z=v2.z/k2;
	return result;
}

/******* length function   ********/

double vecLen(Tvector &v2){
	return (v2.x*v2.x+v2.y*v2.y+v2.z*v2.z)
}

/******  TintVec class   *********/
class TintVec{
public:
	int x,y,z;
	double l; // can be used if you call l() much times
	
	void add(TintVec &v1);
	double l(); // length of vector
	void calcL(); // set length vector

	// operator overloading
	const TintVec& operator-(const TintVec& v2);
	const TintVec& operator+(const TintVec& v2);
	void operator= (const TintVec& v2);
};

void TintVec::add(TintVec &v1){
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

const TintVec& Tobj::operator-(const TintVec& v2){
	obj result = *this;
	result.x=result.x-v2.x;
	result.y=result.y-v2.y;
	result.z=result.z-v2.z;
	return result;
}

const TintVec& Tobj::operator+(const TintVec& v2){
	obj result = *this;
	result.x=result.x+v2.x;
	result.y=result.y+v2.y;
	result.z=result.z+v2.z;
	return result;
}

void Tobj::operator= (const TintVec& v2){
	x=v2.x;
	y=v2.y;
	z=v2.z;
}
