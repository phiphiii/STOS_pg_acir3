#include <iostream>

using namespace std;

int collatz_iterations(int n) {
    int iterations = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        iterations++;
    }
    return iterations;
}

int main() {
    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int ai;
        cin >> ai;
        int iterations = collatz_iterations(ai);
        cout << iterations << endl;
    }

    return 0;
}
