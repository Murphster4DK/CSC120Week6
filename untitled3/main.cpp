#include <iostream>

using namespace std;

void cubeByReference(int*);

int main() {
    int number {5};

    cout << "The original value of number is " << number;
    cubeByReference(&number); // pass number address to cubeByReference
    cout << "\nThe new value of number is " << number << endl;
  }

  // calculate cube of *nPtr; modifies variable number in main
  void cubeByReference(int* nPtr) {
    *nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
}