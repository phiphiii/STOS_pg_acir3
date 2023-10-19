#include <iostream>

using namespace std;

long long modulo_power(long long a, long long n, long long k) {
    if (k == 1) return 0;
    long long result = 1;
    a = a % k;

    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * a) % k;
        }
        a = (a * a) % k;
        n = n / 2;
    }

    return result;
}

int main() {
    long long a, n, k;
    while (cin >> a >> n >> k) {
        long long result = modulo_power(a, n, k);
        cout << result << endl;
    }
    return 0;
}
