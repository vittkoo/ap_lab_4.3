#include <iostream> 
#include <iomanip> 
#include <cmath> 

using namespace std;

int main()
{
    double x_start, x_end, dx, a, b, c, x, F;

    cout << "Enter x_start: "; cin >> x_start;
    cout << "Enter x_end: "; cin >> x_end;
    cout << "Enter dx: "; cin >> dx;
    cout << "Enter a: "; cin >> a;
    cout << "Enter b: "; cin >> b;
    cout << "Enter c: "; cin >> c;


    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(7) << "F" << "       |" << endl;
    cout << "---------------------------" << endl;

    x = x_start;
    while (x <= x_end)
    {
        if (x < 5 && c != 0)
            F = -a * pow(x, 2) - b;
        else
            if (x > 5 && c == 0)
                F = (x - a) / x;
            else
                F = -x / c;
        cout << "|" << setw(7) << setprecision(2) << x
            << "   |" << setw(10) << setprecision(3) << F
            << "    |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}   