#include <iostream>
#include <iomanip>

using namespace std;

// Prototypes
void populateArray(int[][4], int, int);
void calcAvgRow(int[][4], int, int);
void findHighRow(int[][4], int, int);
void countOdds(int[][4], int, int);
void calcSumEven(int[][4], int, int);
bool determineEven(int);
bool determineOdd(int);
void displayTable(int[][4]);

const int ROWS=3;
const int COLS=4;

double rowAvg[ROWS];
int rowHigh[ROWS];
int totalOdd[ROWS];
int sumEven[ROWS];

int main()
{
    int myArray[ROWS][COLS];

    populateArray(myArray, ROWS, COLS);
    calcAvgRow(myArray, ROWS, COLS);
    findHighRow(myArray, ROWS, COLS);
    countOdds(myArray, ROWS, COLS);
    calcSumEven(myArray, ROWS, COLS);
    displayTable(myArray);

    return 0;
}


void populateArray(int arr[][4], int rows, int cols)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout << "Enter an integer value at position [" << i << "][" << j << "] :";
            cin >> arr[i][j];
        }
        cout << endl;
    }
}

void calcAvgRow(int arr[][4], int rows, int cols)
{
    for(int i=0; i<rows; i++)
    {
        double average=0;
        double sum=0;
        for(int j=0; j<cols; j++)
        {
            sum += double(arr[i][j]);
            average = sum/cols;
            rowAvg[i] = average;
        }
    }
    cout << "Row averages: " << rowAvg[0] << " | " << rowAvg[1] << " | " << rowAvg[2] << endl;
}

void findHighRow(int arr[][4], int rows, int cols)
{
    for(int i=0; i<rows; i++)
    {
        double highest=arr[i][0];
        for(int j=0; j<cols; j++)
        {
            if(highest<arr[i][j])
            {
                highest=arr[i][j];
            }
            rowHigh[i] = highest;
        }
    }
    cout << "Row Highests: " << rowHigh[0] << " | " << rowHigh[1] << " | " << rowHigh[2] << endl;
}

void countOdds(int arr[][4], int rows, int cols)
{
    for(int i=0; i<rows; i++)
    {
        int count=0;
        for(int j=0; j<cols; j++)
        {
            if(determineOdd(arr[i][j]))
            {
                count++;
            }
            totalOdd[i] = count;
        }
    }
    cout << "Row number of odds: " << totalOdd[0] << " | " << totalOdd[1] << " | " << totalOdd[2] << endl;
}

void calcSumEven(int arr[][4], int rows, int cols)
{
    for(int i=0; i<rows; i++)
    {
        int sum=0;
        for(int j=0; j<cols; j++)
        {
            if(determineEven(arr[i][j]))
            {
                sum += arr[i][j];
            }
            sumEven[i] = sum;
        }
    }
    cout << "Row sums of even: " << sumEven[0] << " | " << sumEven[1] << " | " << sumEven[2] << endl << endl;
}

bool determineEven(int num)
{
    bool isEven = false;
    if(num%2==0)
        isEven=true;
    return isEven;
}

bool determineOdd(int num)
{
    bool isOdd = false;
    if(num%2!=0)
        isOdd=true;
    return isOdd;
}

void displayTable(int arr[][4])
{
    cout << "0-----0-----0-----0-----0" << endl;
    cout << "|" << setw(5) << arr[0][0] << "|" << setw(5) << arr[0][1] << "|" << setw(5) << arr[0][2] << "|" << setw(5) << arr[0][3] << "|" << endl;
    cout << "0-----0-----0-----0-----0" << endl;
    cout << "|" << setw(5) << arr[1][0] << "|" << setw(5) << arr[1][1] << "|" << setw(5) << arr[1][2] << "|" << setw(5) << arr[1][3] << "|" << endl;
    cout << "0-----0-----0-----0-----0" << endl;
    cout << "|" << setw(5) << arr[2][0] << "|" << setw(5) << arr[2][1] << "|" << setw(5) << arr[2][2] << "|" << setw(5) << arr[2][3] << "|" << endl;
    cout << "0-----0-----0-----0-----0" << endl;

}

