//Derefering a pointer


#include<iostream>
using namespace std;
int main()
{
	int player_health{40};
	int* potion{&player_health};
	char ip{NULL};
	cout << player_health << "    use potion your health is " << *potion << endl;;
	cout << "Input y or n" << endl;
	cin >> ip;
	if ((ip == 'Y')||(ip=='y'))
	{
		*potion = 100;
		cout << "Health increased " << player_health<<endl;
	}
	if ((ip == 'N')||(ip=='n'))
		cout << "Low Health" << endl;




}