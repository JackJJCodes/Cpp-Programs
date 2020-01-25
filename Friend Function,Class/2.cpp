#include<iostream>
using namespace std;
class sample
{
    private:
    int a,b;
    public:
    void setVal();
    friend float mean(sample);
};
void sample::setVal()
{
    a=25;
    b=45;
}
float mean(sample s)
{
    return s.a+s.b/2.0;
}
int main()
{
    sample x;
    x.setVal();
    cout<<mean(x);
}
