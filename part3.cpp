#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void getOper(int, int, char&);
int calcSum(int, int);
int calcDiff(int, int);
int calcProd(int, int);
double calcQuo(int, int);

int main()
{
    srand(time(NULL));
    int rndNum1 = 1+(rand()%50);
    int rndNum2 = 1+(rand()%50);
    char oper;

    getOper(rndNum1, rndNum2, oper);

    switch(oper)
    {
    case '+':
        cout << "The sum of "<< rndNum1 << " and " << rndNum2 << " is: " << calcSum(rndNum1, rndNum2) << endl;
        break;
    case '-':
        cout << "The difference of "<< rndNum1 << " and " << rndNum2 << " is: " << calcDiff(rndNum1, rndNum2) << endl;
        break;
    case '*':
        cout << "The product of "<< rndNum1 << " and " << rndNum2 << " is: " << calcProd(rndNum1, rndNum2) << endl;
        break;
    case '/':
        cout << "The quotient of "<< rndNum1 << " and " << rndNum2 << " is: " << calcQuo(rndNum1, rndNum2) << endl;
        break;
    default:
        cout << "Error: You entered an invalid operation." << endl;
        break;
    }

    system("pause");
    return 0;
}

void getOper(int num1, int num2, char& op)
{
    cout << "Two random numbers " << num1 <<" and " << num2 << " have been created, Enter a valid math operator: ";
    cin >> op;
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
    return (double)num1 / double(num2);
}


/*
 * This program is an attempt to make a simple caculator that
 * generate 2 random numbers
 * ask the user to chose a basic math opration to be performed on the 2 random numbers
 */
