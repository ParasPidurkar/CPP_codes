#include<iostream>
using namespace std;
// #define PART1
// #define PART2
// #define PART3
// #define PART4
// #define PART5
// #define PART6
// #define PART7
// #define PART8
// #define PART9

bool safe_team1(int player_health[],int size){
    int total_health = 0;
    for (int i=0;i<size;i++)
    {
        total_health+=player_health[i];
    }
    if (total_health>100)
    return true;
    else
    return false;
}
bool safe_team2(int *player_health,int size){
int total_health=0;
for(int i=0;i<size;i++){
total_health+=*(player_health+i);
}
if(total_health>100)
return true;
else 
return false;
}


class A{
    int a;
};
void test (){
    cout<<"Hello World";
}
void test2 (){
    cout<<"Hello World";
}
int main()
{
#ifdef PART1
cout<<&test<<"   "<<(void *)&test2<<"\t";
A obj1;
cout<<&obj1;
#endif

#ifdef PART2
int i=10;
float t=10.0;
int *ptr1 =&i;
float *ptr2 =&t;
void *ptr3;
//cout<< ptr1;
cout<<typeid(ptr1).name()<<"\t";
cout<<typeid(i).name()<<"\t";
cout<<typeid(ptr2).name()<<"\t";
cout<<typeid(t).name()<<"\t";
cout<<typeid(ptr3).name()<<"\t";
cout<<*(&i)<<endl;
#endif

#ifdef PART3
int *intptr = nullptr;
cout<<intptr;
//cout<<*intptr;  // will lead to segmentation fault
#endif


#ifdef PART4
int v[] ={1,2,3,4,5};
int *pv =v;
cout<<typeid(pv).name()<<endl;
*(pv+3)=99;
cout<<pv[3]<<endl;
// for(auto x:v)
// {
//     cout<<x<<" ";
// }
#endif

//sending an array to a function
#ifdef PART5
int player_health[4]={11,20,30,40};
bool resp,resp2 ;
resp=safe_team1(player_health,4);
resp2=safe_team2(player_health,4);
cout<<resp<<"\t"<<resp2<<endl;
#endif

#ifdef PART6
char c[] {"Hello"};  //pointer to constant
const char *ptc{c};
//*(ptc+1) ='E';// this will lead to error
cout<< *(ptc+1);
char * const cp{c}; //constant pointer
//cp++; //this will lead to error
#endif


#ifdef PART7
int *pi =static_cast<int *>(malloc(sizeof(int))); //static_cast is used for the pointer type conversion with compile time check for runtime check use dynamic_cast
*pi=100;
cout<<*pi<<endl;
free(pi);
cout<<*pi<<endl;// the memory is freed 
//static_cast  -> convert with compile time check 

#endif

#ifdef PART8
//new-> will call the default constructor  and delete -> calls the destructor
int *p =new int ;//built in types do  not have constructors
*p =20;
cout<<*p<<endl;
delete p;
cout<<*p<<endl;

#endif
#ifdef PART9

int* ptr1;
try {
ptr1 = new int[MACRO];
}
catch(const std::bad_alloc &e){
cout<<"cannot allocate memory"<<endl;
return;
}
#endif


#ifdef PART10
//memory lifetime
int *p1 = new int {15};
int * p2 = funct1(p1);
cout<< *p1;
cout<< *p2;
#endif


}



/*A void pointer should be treated as
merely storage for the memory address because you cannot access data and you cannot
perform pointer arithmetic (that is, manipulate the pointer value using arithmetic
operators) on a void pointer.*/