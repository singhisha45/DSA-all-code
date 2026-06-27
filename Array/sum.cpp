#include <iostream>
using namespace std;

int sumOfElement(int arr[], int size)
{
        int sum = 0;
        for (int i = 0; i < size; i++)
        {

                sum = sum + arr[i];
        }
        return sum;
}

int main()
{
        int arr[] = {10, 4, 30, 5, 40, 59, 2};
        int size = 7;
        cout << sumOfElement(arr, size);
}