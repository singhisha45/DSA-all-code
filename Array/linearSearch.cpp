#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
        for (int i = 0; i < size; i++)
        {

                if (arr[i] == target)
                {
                        return i;
                }
        }
        return -1;
}

int main()
{
        int arr[] = {10, 4, 30, 5, 40, 59, 2};
        int size = 7;
        int num = linearSearch(arr, size, 40);
        if (num != -1)
        {
                cout << "The index of targeted element in array is:" << num << endl;
        }
        else
        {
                cout << "target not found";
        }
}
