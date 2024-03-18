#include "stdafx.h"
#include <iostream>


using namespace std;

void getNums(int&, int&);
int calcSum(int, int);
int calcDiff(int, int);
int calcProd(int, int);
double calcQuo(int, int);

int main()
{
    int firstNum, scndNum, sum, diff, product;
    double quotient;

    // get user input
    getNums(firstNum, scndNum);

    // calculate ad display results
    sum = calcSum(firstNum, scndNum);
    cout << "The sum of "<< firstNum << " and " << scndNum << " is: " << sum << endl;

    diff = calcDiff(firstNum, scndNum);
    cout << "The difference of "<< firstNum << " and " << scndNum << " is: " << diff << endl;

    product = calcProd(firstNum, scndNum);
    cout << "The product of "<< firstNum << " and " << scndNum << " is: " << product << endl;

    quotient = calcQuo(firstNum, scndNum);
    cout << "The quotient of "<< firstNum << " and " << scndNum << " is: " << quotient << endl;

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


int calcSum(int num1, int num2)
{
    return num1 + num2;
}

int calcDiff(int num1, int num2)
{
    return num1 - num2;
}

int calcProd(int num1, int num2)
{
    return num1 * num2;
}

double calcQuo(int num1, int num2)
{
    return double(num1) / double(num2);
}
