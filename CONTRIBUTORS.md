<h4>Issue: 113 - Implement a function that finds the common elements between two arrays and returns them in a new array. </h4>

Author: [Rutvika Wagh](https://github.com/RutvikaWagh)

Roll No. : UCE2022669

```cpp
#include <iostream>
#include <vector>

std::vector<int> getCommonElements(const std::vector<int>& array1, const std::vector<int>& array2) {
    // declare a vector array with name common
    std::vector<int> common;

    // iterate over array1 and array2 and if common element is found, push it to common array
    for (const int& element1 : array1) {
        for (const int& element2 : array2) {
            if(element1 == element2){
                common.push_back(element1);
            }
        }

    }

    // return the array with common values
    return common;
}

int main() {
    std::vector<int> array1 = {1, 2, 3, 4, 5, 8, 9, 10};
    std::vector<int> array2 = {3, 4, 5, 6, 7, 10};

    std::vector<int> common = getCommonElements(array1, array2);

    for (const int& element : common) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    // output should be: 3 4 5 10
    return 0;
}
```
