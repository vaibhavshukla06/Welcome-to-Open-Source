//  Program to print the largest element of an array(usng a function).
#include <iostream>
#include <stdlib.h>
using namespace std;

int largest(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    system("cls");
    int size = 0;
    int arr[size], i;
    cout << "Enter how many element you want : ";
    cin >> size;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the elements : ";
        cin >> arr[i];
        cout << "\n";
    }
    int biggest = largest(arr, i);
    cout << "Largest in given array is " << biggest;

    return 0;
}