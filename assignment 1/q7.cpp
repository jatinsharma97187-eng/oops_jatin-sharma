#include <iostream>
using namespace std;

int main()
{
    int d, fine = 0;

    cout << "Enter number of days: ";
    cin >> d;

    if (d <= 5)
        fine = d * 50;
    else if (d <= 10)
        fine = (5 * 50) + (d - 5) * 100;
    else if (d <= 30)
        fine = (5 * 50) + (5 * 100) + (d - 10) * 150;
    else
        cout << "Membership cancelled";

    if (d <= 30)
        cout << "Fine = " << fine << " paise";

    return 0;
}

