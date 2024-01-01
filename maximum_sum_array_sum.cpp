#include <iostream>  // For input and output
using namespace std;

int main() {
    // Your code here
    int array [3] = {-1, 2, 3};
    int best = 0;
    int sum = 0;
    int size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size; i++){
        sum = max(array[i], array[i] + sum);
        best = max(best, sum);
    }
    cout << best << "\n";
    return 0;
}