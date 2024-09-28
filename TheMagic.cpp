#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    
    // Prompt the user to enter two values
    cout << "Enter the first value here: ";
    cin >> num1;
    
    cout << "Enter the second value here: ";
    cin >> num2;

    // Perform an operation to ensure the result is always 11
    // Here, we'll use the formula: 11 = num1 + num2 - (num1 + num2 - 11)
    int result = num1 + num2 - (num1 + num2 - 11);

    // Output the result
    cout << "The result is: " << result << endl;

    return 0;
}

