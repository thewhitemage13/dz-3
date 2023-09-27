#include <iostream>
using namespace std;

void reverse(double arr[], int length) {
    int start = 0;
    int end = length - 1;


    while (start < end) {
        //способ перестоновки
        double temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}
int main() {
    double arr[] = { 1, 2, 3, 4, 5 };
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "Real version" << endl;
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout <<endl;

    reverse(arr, length);

    cout << "Change version" << endl;
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}