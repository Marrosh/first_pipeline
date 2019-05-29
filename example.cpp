#include <iostream>
#include <new>
#include "example.hpp"

using namespace std;

int main()
{
    int num1 = 2, num2 = 3, sum;
//     cout<<"Enters two numbers to add: ";
//     cin >> num1 >> num2;

    // Function call
    sum = add(num1, num2);
    cout << "Sum = " << sum;
    
    vector* vp = new vector<int>;
    //delete vp;
    return 0;
}

// Function definition
int add(int a, int b)
{
    int add;
    add = a + b;

    // Return statement
    return add;
}
