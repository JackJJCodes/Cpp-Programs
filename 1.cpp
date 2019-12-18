#include<iostream>
using namespace std;
namespace n1
{
    int val=5;
    namespace n2
    {
        int val1=val;
    } // namespace n2
}
int main()
{
    cout<<n1::n2::val1;
    cout<<endl;
    cout<<n1::val;
}