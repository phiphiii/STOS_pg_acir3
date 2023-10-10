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
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
}