#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x1, x2, x3, z1, z2, z3, y1, y2, y3, halfPerimeter,triArea, a,b,c;
    cin>>x1>>y1>>z1;
    cin>>x2>>y2>>z2;
    cin>>x3>>y3>>z3;
    
    a = sqrt(pow(x1-x2,2.0)+pow(y1-y2,2.0)+pow(z1-z2,2.0));
    b = sqrt(pow(x2-x3,2.0)+pow(y2-y3,2.0)+pow(z2-z3,2.0));
    c = sqrt(pow(x1-x3,2.0)+pow(y1-y3,2.0)+pow(z1-z3,2.0));
    halfPerimeter = (a + b + c) / 2;
    triArea = sqrt(halfPerimeter * (halfPerimeter - a) * (halfPerimeter - b) * (halfPerimeter - c));
    cout << fixed << setprecision(6) << triArea;
    return 0;
}
