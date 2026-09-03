#include <stdio.h>
void traversal(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int arr[6] = {1, 2, 4, 3, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    traversal(arr, n);
}