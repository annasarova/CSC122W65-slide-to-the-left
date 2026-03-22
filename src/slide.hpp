#include <vector> // For the vector version

// Type-generic left shift for C-style array
template <typename T>
void arrayShiftLeft(T arr[], int size, int shifts);

// Type-generic right shift for C-style array
template <typename T>
void arrayShiftRight(T arr[], int size, int shifts);

// Rotate a vector
template <typename T>
void vectorShift(std::vector<T> &vec, int shifts);
