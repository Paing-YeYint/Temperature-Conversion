#include <iostream>
using namespace std;

int main()
{
    double temp;
    char unit;

    cout << "***** Temperature Conversion *****\n";
    cout << "What temperature do you want to convert to?\n";
    cout << "Press C for Celcius.\n";
    cout << "Press F for Fahrenheit.\n";
    cout << "Enter the option: ";
    cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        cout << "Enter the celcius temperature: " ;
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "Temperature in Fahrenheit is: " << temp << " F.";
    }

    else if (unit == 'C' || unit == 'c')
    {
        cout << "Enter the fahrenheit temperature: ";
        cin >> temp;

        temp = (temp - 32.0) / 1.8;
        cout << "Temperature in Celcius is: " << temp << " C.";
    }

    else
    {
        cout << "Enter only the value C or F.";
    }

    cout << "\n**********************************";

    return 0;
}