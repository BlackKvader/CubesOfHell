#include <iostream>

using namespace std;

class Tskuska{
public:
  draw();
}

Tskuska::draw(){
	cout << "ok, draw called";
}

int main(){
	Tskuska skuska; // creating skuska
	
	cout << "CubesOfHell";
	cout << "OK, let's do something!";
  if (3>1) {
    cout << "ok, we are geting somewhere";
    cout << "It just not wery good, just for coments";
    cout << "why is syntax highlighting not working?";
  }
  
  skuska.draw();  //test call
}