#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter no. of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long c = 1;
        for (int j = 0; j <= i; j++) {
            if (j == 0)
                c = 1;
            else
                c = c * (i - j + 1) / j;

            cout << c << " ";
        }
        cout << "\n";
    }
    return 0;
}
