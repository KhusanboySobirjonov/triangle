#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the height of the triangle : ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--)
            cout << " ";
        for (int k = 1; k <= i; k++)
            cout << "*";
        for (int l = 1; l <= i; l++)
            cout << "*";
        for (int m = n-1; m >= i; m--)
            cout << " ";
        printf("\n");
    }
    return 0;
}
