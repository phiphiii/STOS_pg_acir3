/*
 Zad 2-1A (chyba)
    napisz program ktory wcztuje 4 dane A B C:D, A, B oraz C są oddzielone spacjami, a C i D są oddzielone znakiem ":". 
    Gdzie A oraz B to nazwy drużyny a C oraz D to strzelone bramki w meczu. 
    Gdy C jest wieksze niż D wypisz że drużyna A wygrała a jeżeli D jest większe to B wygrała, jeżeli bramki są równe to wypisz remis
    Przykład
    Dane wejściowe: S F 12:4
    Dane wyjściowe: Wygrała drużyna S

*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string teamA, teamB, goals, goals_1 = "", goals_2 = "";
    int goals_1_asInt, goals_2_asInt;
    bool switchTeam = false;
    cin >> teamA >> teamB >> goals;
    
    /* Przykładowo mamy S F 30:20
        
        goals.size() - funckja size sprawdza długość stringa goals (przyk 30:20 która w tym wypadku wynosi 5)

        goals[i] - TABLICEEEE!!!!, kocham tablice(szkoda że nie były przed kolokwium :>>> ). 
        [i] oznacza który znak z ze stringa goals ma wziąć do działania przykładowo:
        - goals[0] = 3
        - goals[1] = 0
        - goals[2] = :
        ...
        - goals[4] = 0 - Tu kończymy
     */
    for (int i = 0; i < goals.size(); i++) {
        if (goals[i] == ':') { //Tutaj jakby było ":" to by nie działało - Kocham C++
            switchTeam = true; // Tutaj nie dodajemy ':' do żadnej z drużyn ponieważ jest to rozdzielacz, natomiast zamieniemy drużyny by móc rozróżnić wyniki
        }
        else if (!switchTeam) { // Tutaj może być switchTeam == false, ale ponieważ jest to bool możemy po prostu dać '!' przed zmienną czyli działa to tak że Jeżeli(nie - prawda) gdzie nie to jest nasz '!' a prawda to nasza zmienna 
            goals_1 = goals_1 + goals[i]; 
            /* Wyżej gdy definiowaliśmy zmienną goals_1 przypisaliśmy jej wartość "", by nie wyjebało programu.
            * do naszego pustego znaku dodajemy wartość goals[i]
            * Przykładowo:
            * i = 0 --- goals_1 = goals_1 + golas[0] czyli inaczej "" = "" + "3"
            * i = 1 --- goals_1 = goals_1 + golas[1] czyli inaczej "" = "" + "0"
            * Wyżej pomineliśmy znak ':' i zmieniliśmy drużyny więc następne działania bedą się działy z goals2
            */
        }
        else {
            goals_2 = goals_2 + goals[i];
        }
        

    }
    goals_1_asInt = stoi(goals_1); // Zamiana z String na int --- STOI czyli inaczej String TO Int
    goals_2_asInt = stoi(goals_2);

    if (goals_1_asInt > goals_2_asInt) {
        cout <<teamA<< " WYGRAŁO\n"; // \n to inaczej <<endl 
    }
    else if (goals_1_asInt < goals_2_asInt) {
        cout << teamB << " WYGRAŁO\n";
    }
    else {
        cout << "REMIS\n";
    }

    
    return 0;
}
