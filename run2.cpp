// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;


const int ROWS = 3;
const int COLS = 4;

// Prototypes
void populateArray(int[][COLS], int, int);
void calcAvgRow(int[][COLS], int, int, double[]);
void findHighRow(int[][COLS], int, int, int[]);
void countOdds(int[][COLS], int, int, int[]);
void calcSumEven(int[][COLS], int, int, int[]);
bool determineEven(int);
bool determineOdd(int);
void displayTable(int[][COLS]);
void displayChar(int arr[][COLS]);


int main()
{
	srand(time(NULL));

	int myArray[ROWS][COLS];
	double rowAvg[ROWS];
	int rowHigh[ROWS];
	int totalOdd[ROWS];
	int sumEven[ROWS];
	char charRay[ROWS][COLS];

	populateArray(myArray, ROWS, COLS);
	calcAvgRow(myArray, ROWS, COLS, rowAvg);
	findHighRow(myArray, ROWS, COLS, rowHigh);
	countOdds(myArray, ROWS, COLS, totalOdd);
	calcSumEven(myArray, ROWS, COLS, sumEven);
	displayTable(myArray);
	displayChar(myArray);

	system("pause");
	return 0;
}


void populateArray(int arr[][COLS], int rows, int cols)
{
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			
			int randNum = 10 + rand() % 90;
			arr[i][j]=randNum;
		}
	}
}

void calcAvgRow(int arr[][COLS], int rows, int cols, double rowAvg[])
{
	for (int i = 0; i<rows; i++)
	{
		double average = 0;
		double sum = 0;
		for (int j = 0; j<cols; j++)
		{
			sum += double(arr[i][j]);
			average = sum / cols;
			rowAvg[i] = average;
		}
	}
}

void findHighRow(int arr[][COLS], int rows, int cols, int rowHigh[])
{
	for (int i = 0; i<rows; i++)
	{
		int highest = arr[i][0];
		for (int j = 0; j<cols; j++)
		{
			if (highest<arr[i][j])
			{
				highest = arr[i][j];
			}
			rowHigh[i] = highest;
		}
	}
}

void countOdds(int arr[][COLS], int rows, int cols, int totalOdd[])
{
	for (int i = 0; i<rows; i++)
	{
		int count = 0;
		for (int j = 0; j<cols; j++)
		{
			if (determineOdd(arr[i][j]))
			{
				count++;
			}	
		}
		totalOdd[i] = count;
	}
}

void calcSumEven(int arr[][COLS], int rows, int cols, int sumEven[])
{
	for (int i = 0; i<rows; i++)
	{
		int sum = 0;
		for (int j = 0; j<cols; j++)
		{
			if (determineEven(arr[i][j]))
			{
				sum += arr[i][j];
			}
		}
		sumEven[i] = sum;
	}
}

bool determineEven(int num)
{
	bool isEven = false;
	if (num % 2 == 0)
		isEven = true;
	return isEven;
}

bool determineOdd(int num)
{
	bool isOdd = false;
	if (num % 2 != 0)
		isOdd = true;
	return isOdd;
}

void displayTable(int arr[][COLS])
{
	cout << "0-----0-----0-----0-----0" << endl;
	cout << "|" << setw(5) << arr[0][0] << "|" << setw(5) << arr[0][1] << "|" << setw(5) << arr[0][2] << "|" << setw(5) << arr[0][3] << "|" << endl;
	cout << "0-----0-----0-----0-----0" << endl;
	cout << "|" << setw(5) << arr[1][0] << "|" << setw(5) << arr[1][1] << "|" << setw(5) << arr[1][2] << "|" << setw(5) << arr[1][3] << "|" << endl;
	cout << "0-----0-----0-----0-----0" << endl;
	cout << "|" << setw(5) << arr[2][0] << "|" << setw(5) << arr[2][1] << "|" << setw(5) << arr[2][2] << "|" << setw(5) << arr[2][3] << "|" << endl;
	cout << "0-----0-----0-----0-----0" << endl << endl;

}

void displayChar(int arr[][COLS])
{
	cout << "0-----0-----0-----0-----0" << endl;
	cout << "|" << setw(5) << (char)arr[0][0] << "|" << setw(5) << (char)arr[0][1] << "|" << setw(5) << (char)arr[0][2] << "|" << setw(5) << (char)arr[0][3] << "|" << endl;
	cout << "0-----0-----0-----0-----0" << endl;
	cout << "|" << setw(5) << (char)arr[1][0] << "|" << setw(5) << (char)arr[1][1] << "|" << setw(5) << (char)arr[1][2] << "|" << setw(5) << (char)arr[1][3] << "|" << endl;
	cout << "0-----0-----0-----0-----0" << endl;
	cout << "|" << setw(5) << (char)arr[2][0] << "|" << setw(5) << (char)arr[2][1] << "|" << setw(5) << (char)arr[2][2] << "|" << setw(5) << (char)arr[2][3] << "|" << endl;
	cout << "0-----0-----0-----0-----0" << endl << endl;
}

