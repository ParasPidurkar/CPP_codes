#include<iostream>
using namespace std;
int main()
{
	int scores[] = { 100,200,300 };
	cout << scores<< endl;
	cout << *scores << endl;
	cout << scores[0] << endl;                //array subscript notation
	cout << *(scores+1) << endl;			//array offset notation

	int* scr_ptr{ scores };
	cout << *scr_ptr<<endl;
	cout << scr_ptr[0] << endl;             //pointer subscript notation
	cout << scr_ptr[1] << endl;				//pointer offset notation

	// array_name[index]=*(array_name +index)
	//pointer_name[index]=*(pointer_name + index)
	cout << *(scr_ptr) << endl;
		cout << *(scr_ptr + 1) << endl;
	for (auto i : scores)
		cout << i;


}