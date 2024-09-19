//WAP to find out the large number using friend fuction
#include <iostream>
using namespace std;


class Number {
private:
    int num;

public:
    // Constructor to initialize the number
    Number(int n) : num(n) {}

    // Friend function to find the larger number
    friend Number findLarger(Number, Number);
};

// Friend function definition
Number findLarger(Number a, Number b) {
    return (a.num > b.num) ? a : b;
}


int main() {
    int first, second;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> first >> second;

    // Create Number objects
    Number num1(first);
    Number num2(second);

    // Find and display the larger number
    Number larger = findLarger(num1, num2);
    cout << "The larger number is: " << larger.num << endl;


    return 0;
}
