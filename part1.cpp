#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void getNums(int&, int&);
void calcSum(int, int);
void calcDiff(int, int);
void calcProd(int, int);
void calcQuo(int, int);

int main()
{
    int firstNum, scndNum;

    // get user input
    getNums(firstNum, scndNum);

    // calculate ad display results
    calcSum(firstNum, scndNum);
    calcDiff(firstNum, scndNum);
    calcProd(firstNum, scndNum);
    calcQuo(firstNum, scndNum);

    system("pause");
    return 0;
}


void getNums(int& num1, int& num2)
{
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
}

void calcSum(int num1, int num2)
{
    cout << "The sum of "<< num1 << " and " << num2 << " is: " << num1 + num2 << endl;
}

void calcDiff(int num1, int num2)
{
    cout << "The difference of "<< num1 << " and " << num2 << " is: " << num1 - num2 << endl;
}

void calcProd(int num1, int num2)
{
    cout << "The product of "<< num1 << " and " << num2 << " is: " << num1 * num2 << endl;
}

void calcQuo(int num1, int num2)
{
    cout << "The quotient of "<< num1 << " and " << num2 << " is: " << double(num1) / double(num2) << endl;
}
