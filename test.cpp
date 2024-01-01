#include <iostream>

void print(){
    int v[] = {1,2,3,4};
    for (auto x : v){
        std::cout << x << "\n";
    }
}


void square(){
    int v[] = {1,2,3};
    for (auto& x : v){ // using & here as a reference so we apply increment on the array v itself and not a copy
        ++x;
        std::cout << x << "\n";
    }
}

// Function to count the number of occurrences of an element in an array

int array[10] = {1,2,3,1,2,3,1,2,3,4};

int count(int* p, int x){
    if (p == nullptr){ // Checks if input array is empty
        return 0;
    }
    int count = 0;
    while(*p){
        if (*p == x){ // increment if pointer to array finds x
            ++count;
        }
        ++p;
    }
    return count;
}

int main(){
    std::cout << count(array, 1) << "\n";
    return 0;    
}