#include <stdio.h>
void traversal(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n%d ", a[i]);
    }
}
void Insert_Begin(int* a, int n, int val, int last)
{   int i;
    for (i = 0; i < last; i--)
    {
        a[i] = a[i + 1];
    }
    a[i] = val;
    last++;
}
int Insert_End(int a[], int* n, int val)
{
    a[*n] = val;
    (*n)++;

}
int Insert_pos(int* a, int n, int value, int pos, int last)
{
    for (int i=last; i >= pos; i--)
    {
        a[i] = a[i + 1];
    }
    a[pos]=value;
    last++;
    traversal(a, n);
}
int main(){
    int arr[6] = {1, 2, 4, 3, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int value = 10;
    int last = 0;
    //Insert_Begin(arr, n, value, last);
    // Insert_End(arr, &n, 56);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    int value1 = 20;
    int pos1 = 1;
    Insert_pos(arr, n, value1, pos1, 1);
}