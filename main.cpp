#include <iostream>
#include <vector>
#include "src/slide.hpp"

int main() {
  int arr1[] = {1, 2, 3, 4, 5};
  arrayShiftLeft(arr1, 5, 1); // This would update arr1 to [2, 3, 4, 5, 1]
  std::cout << "Left shift arr1 by 1: ";
  for(int i = 0; i < 5; i++) {
    std::cout << arr1[i] << " ";
  }
  std::cout << std::endl;

  arrayShiftLeft(arr1, 5, 1); // This would update arr1 to [3, 4, 5, 1, 2]
  std::cout << "Left shift arr1 by 1: ";
  for(int i = 0; i < 5; i++) {
    std::cout << arr1[i] << " ";
  }
  std::cout << std::endl;

  arrayShiftLeft(arr1, 5, 1); // This would update arr1 to [4, 5, 1, 2, 3]
  std::cout << "Left shift arr1 by 1: ";
  for(int i = 0; i < 5; i++) {
    std::cout << arr1[i] << " ";
  }
  std::cout << std::endl;

  int arr2[] = {1, 2, 3, 4, 5};
  arrayShiftLeft(arr2, 5, 3); // This would update arr2 to [4, 5, 1, 2, 3]
  std::cout << "Left shift arr2 by 3: ";
  for(int i = 0; i < 5; i++) {
    std::cout << arr2[i] << " ";
  }
  std::cout << std::endl;

  arrayShiftLeft(arr2, 5, 3); // This would update arr2 to [2, 3, 4, 5, 1]
  std::cout << "Left shift arr2 by 3: ";
  for(int i = 0; i < 5; i++) {
    std::cout << arr2[i] << " ";
  }
  std::cout << std::endl;

  arrayShiftLeft(arr2, 5, 3); // This would update arr2 to [5, 1, 2, 3, 4]
  std::cout << "Left shift arr2 by 3: ";
  for(int i = 0; i < 5; i++) {
    std::cout << arr2[i] << " ";
  }
  std::cout << std::endl;

  int arr3[] = {1, 2, 3};
  arrayShiftLeft(arr3, 3, 3); // This would update arr3 to [1, 2, 3] (back to where it began)
  std::cout << "Left shift arr3 by 3: ";
  for(int i = 0; i < 3; i++) {
    std::cout << arr3[i] << " ";
  }
  std::cout << std::endl;

  int arr4[] = {1, 2, 3};
  arrayShiftLeft(arr4, 3, 4); // This would update arr4 to [2, 3, 1]
  std::cout << "Left shift arr4 by 4: ";
  for(int i = 0; i < 3; i++) {
    std::cout << arr4[i] << " ";
  }
  std::cout << std::endl;

  char arr5[] = {'a', 'b', 'c', 'd', 'e'};
  arrayShiftLeft(arr5, 5, 1); // This would update arr5 to ['b', 'c', 'd', 'e','a']
  std::cout << "Left shift arr5 by 1: ";
  for(int i = 0; i < 5; i++) {
    std::cout << arr5[i] << " ";
  }
  std::cout << std::endl;

  std::vector<int> vec = {10, 20, 30, 40, 50};
  vectorShift(vec, 2);                    // Left shift vector by 2
  std::cout << "Vector left shift by 2: ";
  for (auto v : vec) {
    std::cout << v << " ";
  }
  std::cout << std::endl;

  return 0;
}
