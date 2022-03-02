#include<iostream>
using namespace std;
class support_Player;
class Player{
    private:
    int age;
    string name;
    bool human ;
    public:
    
    friend class support_Player;
    
};


class support_Player{
    public:
    void make_player(Player subhero){
         subhero.age = 25;
        // subhero.name ="Starkid";
        // subhero.human = false;
        cout<<"The Hero registered is "<<subhero.name<<subhero.age;
        
    }
    
    
};

int main(){
    support_Player test;
    Player x;
    test.make_player(x);
    return 0;
    
}
