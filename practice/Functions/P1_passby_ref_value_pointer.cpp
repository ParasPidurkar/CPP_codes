#include<bits/stdc++.h>
using namespace std;
void pass_by_value(int a,int b){
    a=15;
    b=25;
    cout<<"Inside pass_by_value"<<a<<"\t"<<b<<"\n";
}
void pass_by_ref(int &a,int &b){
    a=15;
    b=25;
    cout<<"Inside pass_by_ref"<<a<<"\t"<<b<<"\n";
}
void pass_by_pointer(int *a,int *b){
    *a=15;
    *b=25;
    cout<<"Inside pass_by_ref"<<*a<<"\t"<<*b<<"\n";
}
int main(){
    int  a=10,b=20;
    // pass_by_value(a,b);
    // cout<<"pass_by_value"<<a<<"\t"<<b<<"\n";
    // pass_by_ref(a,b);
    // cout<<"pass_by_ref"<<a<<"\t"<<b<<"\n";
    pass_by_pointer(&a,&b);
    cout<<"pass_by_pointer"<<a<<"\t"<<b<<"\n";
}
