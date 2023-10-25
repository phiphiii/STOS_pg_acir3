/*
* Zadanie 3
* użytkownik podaje 3 boki i program ma wypisać  (Chyba boki były wpisane jako double wiec zrobimy double)
    1) Wyświetla 'O' jeżeli trójkąt jest ostrokątny, 'P' jeżeli trójkąt jest prostokątny i 'R' jeżeli jest rozwartokątny
    2) '1' jeżeli trójkąt jest równoboczny '2' jeżeli jest równoramienny i '3' jeżeli jest inny
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    // https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQPlLqHepDoa-rDU-BuBTKHU28sNpiD8tvvos40V4gVPg&s
    if (a * a + b * b > c * c) {
        cout << "O";
    }
    else if (a * a + b * b == c * c) {
        cout << "P";
    }
    else if (a * a + b * b < c * c) {
        cout << "R";
    }
    if (a == b && b == c) {
        cout << "1";
    }
    else if (a == b || b == c || a == c) {
        cout << "2";
    }
    else {
        cout << "3";
    }
    // Będąc szczerym nie jestem pewny czy to jest dobrze, nie wiem jakie można przykłady dać XD
    return 0;
}
