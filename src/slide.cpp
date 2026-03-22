#include "slide.hpp"

// ---------------- Left Shift ----------------
template <typename T>
void arrayShiftLeft(T arr[], int size, int shifts) {
   bool doShift = (size > 0 && shifts > 0);

   if (doShift) {
      shifts %= size; //handle shifts >= size
      std::vector<T> temp(size);
      int index = 0;

      for (int i = shifts; i < size; i++) {
         temp[index++] = arr[i];
      }
      for (int i = 0; i < shifts; i++) {
         temp[index++] = arr[i];
      }
      for (int i = 0; i < size; i++) {
         arr[i] = temp[i];
      }
   }
}

// ---------------- Right Shift ----------------
template <typename T>
void arrayShiftRight(T arr[], int size, int shifts) {
   bool doShift = (size > 0 && shifts > 0);

   if (doShift) {
      shifts %= size; //handle shifts >= size
      std::vector<T> temp(size);
      int index = 0;

      // Copy last 'shifts' elements first
      for (int i = size - shifts; i < size; i++) {
         temp[index++] = arr[i];
      }
      // Copy first part
      for (int i = 0; i < size - shifts; i++) {
         temp[index++] = arr[i];
      }
      for (int i = 0; i < size; i++) {
         arr[i] = temp[i];
      }
   }
}

// ---------------- Vector Shift ----------------
template <typename T>
void vectorShift(std::vector<T> &vec, int shifts) {
   bool doShift = (!vec.empty() && shifts > 0);

   if (doShift) {
      int size = vec.size();
      shifts %= size;

      std::vector<T> temp(size);
      int index = 0;

      for (int i = shifts; i < size; i++) {
         temp[index++] = vec[i];
      }
      for (int i = 0; i < shifts; i++) {
         temp[index++] = vec[i];
      }
      vec = temp;
   }
}
// ---------------- Explicit template instantiations ----------------
// Needed if using separate .cpp file
template void arrayShiftLeft<int>(int[], int, int);
template void arrayShiftRight<int>(int[], int, int);
template void arrayShiftLeft<char>(char[], int, int);
template void arrayShiftRight<char>(char[], int, int);
template void vectorShift<int>(std::vector<int>&, int);
template void vectorShift<char>(std::vector<char>&, int);
