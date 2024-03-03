/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
**
** Class: 	CSC 242
** Assignment: 	Final Assignment
** File: 	ComprehensiveAssignment.cpp
** Description: 
**
** Author: 	Paola Borges-Diaz
** Date: 	03-03-24
** -------------------------------------------------------------------------*/
#include <iostream>
#include <vector>
using namespace std;

// Section 1: Functions
// a) Implement a function that takes two integers as parameters and returns their sum.
int add(int a, int b) {
    return a + b;
}

// b) Develop a function that calculates the factorial of a given positive integer.
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// c) Use these functions to find and display the sum of factorial values for numbers 1 to 5.
void displaySumOfFactorials() {
    int sum = 0;
    for (int i = 1; i <= 5; ++i) {
        sum += factorial(i);
    }
    cout << "Sum of factorial values for numbers 1 to 5: " << sum << endl;
}

// Section 2: Vectors and Enhanced For Loops
// a) Create a vector of integers and populate it with values 1 to 10.
vector<int> createAndPopulateVector() {
    vector<int> myVector;
    for (int i = 1; i <= 10; ++i) {
        myVector.push_back(i);
    }
    return myVector;
}

// b) Utilize an enhanced for loop to iterate through the vector and display each element.
void displayVectorElements(const vector<int>& vec) {
    for (const auto& element : vec) {
        cout << element << " ";
    }
    cout << endl;
}

// c) Implement a function that receives the vector as a parameter, doubles each element, and returns the modified vector.
vector<int> doubleVectorElements(const vector<int>& vec) {
    vector<int> doubledVector = vec;
    for (auto& element : doubledVector) {
        element *= 2;
    }
    return doubledVector;
}

// d) Display the modified vector using an enhanced for loop.
void displayModifiedVector(const vector<int>& vec) {
    for (const auto& element : vec) {
        cout << element << " ";
    }
    cout << endl;
}

// Section 3: Basic Syntax
// a) Declaration and initialization of variables.
void variableDeclarationAndInitialization() {
    int x = 5;
    double y = 3.14;
    char ch = 'A';
    string str = "Hello";
}

// b) Use of if-else statements to check if a number is even or odd.
void checkEvenOrOdd(int num) {
    if (num % 2 == 0)
        cout << num << " is even." << endl;
    else
        cout << num << " is odd." << endl;
}

// c) Implementation of a while loop to find the sum of the first 100 natural numbers.
int sumOfFirst100NaturalNumbers() {
    int sum = 0;
    int i = 1;
    while (i <= 100) {
        sum += i;
        ++i;
    }
    return sum;
}

// d) Incorporate a switch statement to display a message based on a user-input day of the week.
void displayDayMessage(int day) {
    switch (day) {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid day" << endl;
    }
}

// Section 4: Integration of Concepts
// a) Take two numbers from the user and use the function from Section 1 to display their sum.
void userInputAndDisplaySum() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum: " << add(num1, num2) << endl;
}

// b) Request user input for a positive integer, then use the functions and vector from Sections 1 and 2 to display the sum of factorial values and modified vector.
void userFactorialAndVectorOperations() {
    int userNum;
    cout << "Enter a positive integer: ";
    cin >> userNum;

    // Display sum of factorial values
    int sumOfFactorials = 0;
    for (int i = 1; i <= userNum; ++i) {
        sumOfFactorials += factorial(i);
    }
    cout << "Sum of factorial values for " << userNum << ": " << sumOfFactorials << endl;

    // Display modified vector
    vector<int> userVector = createAndPopulateVector();
    vector<int> modifiedUserVector = doubleVectorElements(userVector);
    cout << "Modified Vector: ";
    displayModifiedVector(modifiedUserVector);
}

// c) Utilize basic syntax concepts from Section 3 to perform a simple mathematical operation (e.g., multiplication) on the sum obtained in Section 4a.
void performMathematicalOperation(int sum) {
    int multiplier = 3;
    int result = sum * multiplier;
    cout << "Result of multiplication: " << result << endl;
}

int main() {
    // Section 1
    // a)
    int sumResult = add(3, 7);
    cout << "Sum Result: " << sumResult << endl;
    
    // b)
    int factorialResult = factorial(5);
    cout << "Factorial Result: " << factorialResult << endl;

    // c)
    displaySumOfFactorials();

    // Section 2
    // a)
    vector<int> myVector = createAndPopulateVector();

    // b)
    cout << "Vector Elements: ";
    displayVectorElements(myVector);

    // c)
    vector<int> doubledVector = doubleVectorElements(myVector);

    // d)
    cout << "Modified Vector: ";
    displayModifiedVector(doubledVector);

    // Section 3
    // a)
    variableDeclarationAndInitialization();

    // b)
    checkEvenOrOdd(8);

    // c)
    int sumOfFirst100 = sumOfFirst100NaturalNumbers();
    cout << "Sum of first 100 natural numbers: " << sumOfFirst100 << endl;

    // d)
    displayDayMessage(3);

    // Section 4
    // a)
    userInputAndDisplaySum();

    // b)
    userFactorialAndVectorOperations();

    // c)
    performMathematicalOperation(sumResult);

    return 0;
}