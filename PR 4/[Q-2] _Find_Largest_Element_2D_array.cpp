//2.Find Largest element in 2D Array

#include <iostream>
using namespace std;
main()
{
    int rows, cols;
    cout << "Enter number of rows : ";
    cin >> rows;
    cout << "Enter number of columns : ";
    cin  >> cols;
    int arr[rows][cols];
    int large = 0;

    cout << "Enter the elements of the 2D array: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > large)
                large = arr[i][j];
        }
    }
    cout << "Largest element in array is: " << large << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == large)
                large = arr[i][j];
        }
    }
}

