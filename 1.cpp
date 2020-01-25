#include <iostream>
#include<string>
using namespace std;
 class demo
 {
     int x;
     public:
     demo(int a)
     {
         x=a;
     }
     friend void display(demo);  //Friend function called
 };
 void display(demo d1)       //Friend Function definition
 {
     cout<<d1.x<<endl;
 }
 int main()
 {
     demo d2(5);
     display(d2);
 }
