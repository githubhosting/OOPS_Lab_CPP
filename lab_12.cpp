#include <iostream>
using namespace std;
void bubbleSort(int[]);
void bubbleSort(float[]);
int main()
{
    int i, arr[10];
    float arr1[10];
    cout << "Enter 10 integer Elements: ";
    for (i = 0; i < 10; i++)
        cin >> arr[i];
    bubbleSort(arr);
    cout << "\nThe New Sorted Array is: \n";
    for (i = 0; i < 10; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "Enter 10 floating point Elements: ";
    for (i = 0; i < 10; i++)
        cin >> arr1[i];
    bubbleSort(arr1);
    cout << "\nThe New Sorted Array is: \n";
    for (i = 0; i < 10; i++)
        cout << arr1[i] << " ";
    cout << endl;
    return 0;
}
void bubbleSort(int arr[])
{
    int i, j, temp;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < (10 - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void bubbleSort(float arr[])
{
    int i, j;
    float temp;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < (10 - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}