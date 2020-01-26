#include <iostream>
using namespace std;
int add(int a, int b)
{
    int out;
    out = a + b;
    return out;
}
int sub(int a, int b)
{
    int out;
    out = a - b;
    return out;
}
int multi(int a, int b)
{
    int out;
    out = a * b;
    return out;
}
int divi(int a, int b)
{
    int out;
    out = a / b;
    return out;
}

int main()
{
    /*This is the Calculator Program.*/
    cout << "Enter the first and the second number:\n";
    int a, b;
    cin >> a;
    cin >> b;
    char op;
    cout << "Enter the operator:\n";
    cin >> op;
    cout << a << op << b;
    int res = 0;
    switch (op)
    {
    case '+':
        res = add(a, b);
        cout << res;
        break;
    case '-':
        res = sub(a, b);
        cout << res;
        break;
    case '/':
        res = divi(a, b);
        cout << res;
        break;
    case '*':
        res = multi(a, b);
        cout << res;
        break;
    }
}
