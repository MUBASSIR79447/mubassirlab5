
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 3, 8, 1, 2};

    cout << "Array Elements: ";

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "\nPress Enter to exit...";
    cin.get();

    return 0;
}

