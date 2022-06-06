#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char opr;
    cin >> opr;
    cin >> a >> b;
    switch (opr)
    {
    case '-':
        cout << a - b << endl;
        break;
    case '+':
        cout << a + b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;

    default:
        cout << "wrong expresion" << endl;
        break;
    }
}