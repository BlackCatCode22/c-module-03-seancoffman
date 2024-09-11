#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p;
    p = &a;

    cout << "\nAddress in pointer p: " << p << endl;

    cout << "\nValue of using pointer p: " << *p << endl;

    *p = 20;

    cout << "\nNew Value of a: " << a << endl;
    {
        int arr[5] = {1, 2, 3, 4, 5};
        int *p = arr;
        for (int i = 0; i < 5; i++) {
            cout << "\nAddress of arr[" << i << "]: " << (p + i) << endl;
            cout << "\nValue of arr[" << i << "]: " << *(p + i) << endl;
        }
        return 0;
    }
}