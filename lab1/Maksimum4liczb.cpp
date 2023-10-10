#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
int main()
{
    int a, b, c, d;
    int arr[4];
    cin >> a >> b >> c >> d;
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << arr[0];
    return 0;

}
