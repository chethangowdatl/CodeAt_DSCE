#include <stdio.h>
int LieanSearch(int* a, int n, int key)
{   int pos = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            pos = i;
            printf("Number is found at %d.",pos);
        }
    }
    return -1;
}
int main()
{
    int arr[6] = {1, 2, 4, 3, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 4;
    LieanSearch(arr, n, key);
}