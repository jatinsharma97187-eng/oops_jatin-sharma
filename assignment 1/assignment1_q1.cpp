#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    float b;
    string c;

    cout << "Enter integer: ";
    cin >> a;
    cout << "Enter decimal: ";
    cin >> b;
    cout << "Enter character: ";
    getline(cin, c);

    cout << "Integer = " << a << endl;
    cout << "Decimal = " << b << endl;
    cout << "Character = " << c << endl;

    return 0;
}

