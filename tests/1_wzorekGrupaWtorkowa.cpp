#include <iostream>

using namespace std;

int main() {
    int r,c;
    cout<<"Program wypisuje fajny wzorek\n";
    cout<<"Podaj r <4;50>: ";
    cin>>r;
    cout<<"Podaj c <4;10>: ";
    cin>>c;
    if(r<4 || r>50 || c<4 || c>10){
        cout<<"Podane dane nie należą do przedziału";
        return 0;
    }
    char dot = '.';
    char star = '*';
    int needSwap = 0;
    for(int i =0; i<r; i++){
        for(int j = 0; j<c-needSwap; j++){
            cout<<dot;
        }
        for(int j =0; j< needSwap;j++){
            cout<<star;
        }
        if(i!=0 && needSwap%c==0){
            swap(dot,star);
            needSwap = 0;
            
        }
        cout<<endl;
        needSwap++;
    }
    return 0;
}
