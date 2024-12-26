#include <iostream>

using namespace std;
int removeDupes(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}
int main()
{
    int arr[] = {1, 4, 4, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = removeDupes(arr, n);
    cout << "The array after removing duplicates: " << endl;
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
}