//const and pointers
//scenario :-  pointer_t0_constant  constant_pointer constanT_pointer_to_constant   
#include<iostream>
using namespace std;
int main()
{

	//pointer to a constant

	int score{100};
	int health{60};
	const int* ptr = { &score };
	//*ptr =200;  //Error
	ptr = &health; //ok



	//constant pointer
	int* const ark_ptr{& health};
	*ark_ptr = 200; //ok
	//ark_ptr = &score; //Error


}