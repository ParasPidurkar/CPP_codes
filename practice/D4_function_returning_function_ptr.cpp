//code for  the function returning the function pointer as an output

//cretaing a game that does some thing depending upon the user input
#include<iostream>
#include<string>
using namespace std;
//syntax <function pointer return > (*func_play(args))(functn ptr args )
string you_win(string aa, string bb)
{
	string cc;
	cc = aa + " wins over " + bb + " \n";
	return cc;
}
string you_lose(string aa, string bb)
{
	string cc;
	cc = bb + " wins over " + aa + " \n";
	return cc;
}


string(*Get_Operation(int x)) (string, string)
{
	switch (x)
	{

	case 0:
		return you_win;
	case 1:
		return you_lose;
	default:
			return nullptr;
	}
}
	
	int main()
{   
	//function pointer syntax retrn (*fnptr) (args)= address of function
	string(*fnptr)(string, string) = Get_Operation(0);
	std::cout<<fnptr("Hero", "Villan");
}
