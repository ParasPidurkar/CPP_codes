//dynamic memory allocation
#include<iostream >
using namespace std;
int main()
{
	//vectors are also dependent on this concept
	int* player_health;
	player_health = new int;
	cout << *player_health << endl;
	*player_health = 100;
	cout << *player_health << endl;

	delete player_health;

	int* arr_ptr{nullptr};
	int size{ 1 };
	arr_ptr = new int[size];
	arr_ptr[0] = 220;
	cout <<"Dynamic memory allocate "<< arr_ptr[0] << endl;
	delete[] arr_ptr;


}