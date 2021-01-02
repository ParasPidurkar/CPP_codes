#include<iostream>
using namespace std;
#include<vector>
int main()
{
	//vector usage 
	vector<string> Players = {"Alpha","Beta","Gamma"};
	//vector pointer
	vector<string> *pntr {&Players};
	cout << "This is the first element of the vector" << endl;
	std::cout << (*pntr).at(0) << endl;
	cout << "These are all the players in the team" << endl;
	//auto range 
	for (auto all_players : *pntr)
		cout << all_players<<"  ";
}