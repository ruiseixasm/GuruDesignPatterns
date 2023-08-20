#include <iostream>

class IntArray {
private:
    int* arr;
    int size;
public:
    IntArray(int* arr, int size) : arr(arr), size(size) {}

    int* begin() {
        return arr;
    }

    int* end() {
        return arr + size;
    }
};

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    IntArray intArray(arr, size);

    for (auto i : intArray) {
        std::cout << "i: " << i << std::endl;
    }
}