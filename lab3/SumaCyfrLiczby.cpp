#include <iostream>
#include <string>

int suma_cyfr(int liczba) {
    int suma = 0;
    while (liczba > 0) {
        suma += liczba % 10;
        liczba /= 10;
    }
    return suma;
}

using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;

        int iloczyn = a * b;
        int suma_cyfr_iloczynu = suma_cyfr(iloczyn);

        cout << iloczyn << " " << suma_cyfr_iloczynu << endl;
    }

    return 0;
}