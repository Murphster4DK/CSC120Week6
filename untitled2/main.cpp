#include <iostream>

using namespace std;

int cubeByValue(int); //prototype

int main() {
    int number{5};

    cout << "The original value of the number is " << number;
    number = cubeByValue (number);
    cout << " \nThe new value of number is " << number << endl;
}

// calculate and return cube of integer argument
int cubeByValue(int n) {
    return n* n * n; //cube local variable n and return the result

}