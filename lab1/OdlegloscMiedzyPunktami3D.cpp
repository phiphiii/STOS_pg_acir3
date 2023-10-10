#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x1, x2, z1, z2, y1, y2, wynik;
    cin>>x1>>y1>>z1;
    cout<<endl;
    cin>>x2>>y2>>z2;
    
    wynik = sqrt(pow(x1-x2,2.0)+pow(y1-y2,2.0)+pow(z1-z2,2.0));
    
    cout << fixed << setprecision(6) << wynik;
}
