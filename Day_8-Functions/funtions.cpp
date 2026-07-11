#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b) {
    return a + b;  // gives back the sum
}

int main() {
    cout << "Sum: " << add(5, 3);  // calling the function
    return 0;
}
