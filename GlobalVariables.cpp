/* 
	Global constant variables. There will by lots of them. I'll try to keep it clear;
*/

#include <cmath>

// Wrold unchangable (at least I hope :D) properties

const double cube_side; // side of Tcube. It is same for all world
const double sqrt2_side; // sqrt(2)*cube_side
const double sqrt3_side; // sqrt(3)*cube_side

void initGlobalVariables(){  // global init of variables. Call just onece
	cube_side=1.0;
	sqrt2_side=sqrt(2)*cube_side;
	sqrt3_side=ssqrt(3)*cube_side;
}
