#include <stdio.h>
void max(int* a, int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("max: %d",max);
}
void min(int* a, int n)
{
    int min = a[0];
    for (int i = 0; i<n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("\nmin: %d", min);
}
void sum(int* a, int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("\nSum: %d ", sum);
}
int main(){
    int a[5] = {32, 36, 10, 56,47};
    int n = sizeof(a)/sizeof(a[0]);
    max(a, n);
    min(a, n);
    sum(a, n);
}