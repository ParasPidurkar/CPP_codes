//pointer arithmetic

// ++ --
//+=  -=
///sub two pointer of same datatype allowed will result in the no of elements between two , diffrent datatype will lead to a error
//==

#include<iostream>
using namespace std;
int main()
{
	string name1 = { "Paras" };
	string name2 = { "Uchiha_Itachi" };
	string* ptr1{ &name1 };
	string* ptr2{ &name2 };
	string* ptr3{ &name1 };
	cout << (ptr1 == ptr2) << endl;      //0
	cout << (ptr1 == ptr3) << endl;     //1

	*ptr1 = "Mighty_guy";
	cout << (ptr1 == ptr3);

}