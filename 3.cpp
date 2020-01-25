#include<iostream>
using namespace std;
class demo
{
    private:
    int x,y;
    public:
    demo(int a,int b)
    {
        x=a;
        y=b;
    }
    friend class frnd;
    friend class add;
    friend class subt;
    friend class multi;
};
class frnd{
    public:
    void display(demo d1)
    {
        cout<<"x is "<<d1.x<<endl;
        cout<<"y is "<<d1.y;
    }
};
class add{
    public:
    void displaySum(demo d3)
    {
        cout<<"The sum : "<<d3.x+d3.y<<endl;
    }
};
class subt{
    public:
    void displaySubtract(demo d4)
    {
        cout<<"The difference : "<<d4.y-d4.x<<endl;
    }
};
class multi{
    public:
    void displayProduct(demo d5)
    {
        cout<<"The product is : "<<d5.x*d5.y<<endl;
    }
};
int main()
{
    demo d2(50,100);
    frnd f1;
    add a1;
    subt s1;
    multi m1;
    s1.displaySubtract(d2);
    a1.displaySum(d2);
    m1.displayProduct(d2);
    f1.display(d2);
}