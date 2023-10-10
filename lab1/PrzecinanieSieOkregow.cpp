#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x1,x2,y1,y2,r1,r2,odlsrod,promienbez,promiendod;
    cin>>x1>>y1>>r1;
    cin>>x2>>y2>>r2;
    
    odlsrod = sqrt(pow(x2-x1, 2.0)+pow(y2-y1, 2.0));
    promienbez = sqrt(pow(r1-r2, 2.0));
    promiendod = r1+r2;
    
    if (promienbez<odlsrod && odlsrod<promiendod) {
        cout<<"T";
    }
    else{
        cout<<"F";
    }
    return 0;
}
