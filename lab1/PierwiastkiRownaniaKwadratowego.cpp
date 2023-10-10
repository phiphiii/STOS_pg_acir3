#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a,b,c,delta,x1,x2;
    cin>>a>>b>>c;
    delta = b*b-4*a*c;
    if(a==0 && b==0 && c!=0){
        cout<<"B";
    }
    /*else if(a==0){
        x1=c/b;
        cout << fixed << setprecision(6) <<x1;
    }*/
    else if(delta==-0 && a+b+c==0){
        cout<<"N";
    }
    else{
        
        if(delta==0){
            x1=(-1*b)/2*a;
            if(isinf(x1)){
                cout<<"N";
            }
            else{
                cout << fixed << setprecision(6) <<x1;
            }
        }
        else if(delta>0){
            x1 = (-b-sqrt(delta))/(2*a);
            x2 = (-b+sqrt(delta))/(2*a);
            if(isinf(x1) || isinf(x2)){
                x1=-c/b;
                cout << fixed << setprecision(6) <<x1;
            }
            else{
                cout << fixed << setprecision(6) <<x1<<" "<<x2;
            }
            
        }
        else{
                cout<<"B";
        }
    }
    return 0;
}
