#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double halfPerimeter, triArea;
    double a, b, c;
    cin >> a>> b>> c;
    halfPerimeter = (a + b + c) / 2;
    triArea = sqrt(halfPerimeter * (halfPerimeter - a) * (halfPerimeter - b) * (halfPerimeter - c));
    cout << fixed << setprecision(6) << triArea;
}
