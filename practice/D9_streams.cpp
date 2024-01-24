// we have various streams available that is istream ostream ifstream ofstream fstream
//to make our data permanent.

// we will se how to write data in data file

#include<iostream>
#include<fstream>  // contains all the file classes
using namespace std;
class Player{
    int number;
    char name[20];
    public:
    void getPlayer(){
        cout<<"Enter player no and name\n";
        cin>>number>>name;
    }
};
int main(){
    Player hero;//wehave to pass tghe date of obj to data file.
    //open a file for writing istream for cin ostream foread the data from data file ofstream-> send the data to file
    //ofstream file;//output from code to file   ofstream is predefined class combination of ifstream and ofstream is fsstream
//file is object of ofstream class

// we canopen file in 2 modes 
//1) parameterized constructors2)open member function
//1) using parameterized constructor
ofstream file("Player.dat",ios::out);//this file will be in hdd in input mode/purpose 
//ios::out is not compulsary
//2 Using open mem func
ofstream file2;
file2.open("player2.dat");

char op;
do{
    hero.getPlayer();   // taking data -> will be stored in stack
    //to make data permanent
    file2.write((char* )&hero,sizeof(hero)); //take the data from hero obj address and write to file 2 as a seq of character
    //data is passed from stack to hdd
    cout<<"One data row added\n";
    cout<<"Any more data to be added (Y/N)\n";
    cin>>op;
    
}while(op=='y' || op =='y');
file.close();
file2.close();
}