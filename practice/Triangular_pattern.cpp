/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{
     string Ip_String;
     getline(cin,Ip_String);
     int Str_Len;
     Str_Len =Ip_String.length();
     cout<<"This the length of  the input string"<<Str_Len<<endl;
     for(int i=0;i<Str_Len;i++)
     {
         for(int space = 0 ; space <= Str_Len - i ; space ++) cout << ' ' ;
       
        for(int j=0;j<=i;j++)
        {
            cout<<Ip_String[j];
        }
        if(i>0)
        for(int ch =i-1;ch>=0;ch--)
        {
            
            cout<< Ip_String[ch];
        }
        cout<<endl;
     }
     //#endif
    return 0;
}
