#include <iostream>
#include <cmath>
#include <vector>

std::vector<int> myVector = {1, 2, 3, 4, 5};
std::vector<int> my_vector(5, 0);

int num = 10;

int main() {
    std::cout << "Square Root of num: " << sqrt(num) << std::endl;

    std::cout << "Elements of myVector: ";
    for (size_t i = 0; i < myVector.size(); ++i) {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Elements of my_vector: ";
    for (size_t i = 0; i < my_vector.size(); ++i) {
        std::cout << my_vector[i] << " ";
    }

    return 0;
}
