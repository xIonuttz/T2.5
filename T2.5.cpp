#include <iostream>
#include <cstring>
using namespace std;
// Define a custom struct
struct MyStruct {
    int data;
};

// Overloaded function with one parameter
int f(int x) {
    return sizeof(x);
}

// Overloaded function for double
int f(double x) {
    return sizeof(x);
}

// Overloaded function for char*
int f(const char* x) {
    return strlen(x);
}

// Overloaded function for custom struct
int f(const MyStruct& x) {
    return sizeof(x);
}

int main() {
    int intValue = 15;
    double doubleValue = 3.1415;
    const char* stringValue = "salutare";
    MyStruct structValue;

   cout << "Size of int: " << f(intValue) << " bytes\n";
    cout << "Size of double: " << f(doubleValue) << " bytes\n";
    cout << "Length of string: " << f(stringValue) << " characters\n";
   cout << "Size of struct: " << f(structValue) << " bytes\n";

    return 0;
}
