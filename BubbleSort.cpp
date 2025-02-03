#include <iostream>
using namespace std;

int main() {
    int temp;
    int Bubble_Sort[4] = { 3, 4, 1, 0 }; 

    for (int j = 0; j < 5; j++) {

        for (int i = 0; i < 3; i++) {
            if (Bubble_Sort[i] > Bubble_Sort[i + 1]) {
                temp = Bubble_Sort[i + 1];
                Bubble_Sort[i + 1] = Bubble_Sort[i];
                Bubble_Sort[i] = temp;
            }
        }
    }
    for (int i = 0; i < 4; i++)
        cout << Bubble_Sort[i] << " ";
    return 0;
}
