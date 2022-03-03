//streams and files

//data -> cin and cout

#include<iostream>
//#include<conio.h>
using namespace std;

class Player{
char name[10];
int age;
float health;
public:
void gethealth()
{
    cout<<"Enter the health name and age  of the player "<<endl;
    cin>>health>>name>>age ;
    cout<<"Health is "<<health;
    cout<<"Name is "<<name;

}

};
int main(){
    Player hero;//obj is class variable and variable is stored on stack
    //hero will consume  10 +2+4 bytes of memeory in RAM i.e temporary storage
    hero.gethealth();//function calling 


}