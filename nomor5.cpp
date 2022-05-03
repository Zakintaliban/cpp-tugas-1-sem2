#include <iostream>
using namespace std;

int main() {
    int test[4][3] = {{4,7,2},
                      {5,9,1},
                      {8,3,6},
                      {3,2,5},
    };

    for (int i = 0; i < 4; ++i) {
        cout << endl;
        for (int j = 0; j < 3; ++j) {
            cout << test[i][j] << " ";
        }
    }

    return 0;
}