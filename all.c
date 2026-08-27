#include <stdio.h>

void traverse(int*a, int n)
{
    for (int i = 0; i<= n; i++)
    {
        printf("%d", a[i]);
    }
}
void insertAt(int pos, int val, int* a, int n){
    for (int i=n; i>pos; i--)
    {
        a[i]= a[i-1];
    }
    a[pos] = val;
    printf("\n Addition: %d");
    traverse(a,n);
}
int main() {
	int a[7] = {
	    1,
	    2,
	    3,
	    4,
	    16
	};
	int pos = 3;
	int val = 9;
	int n = sizeof(a)/sizeof(a[0]);
	traverse(a, n);
	insertAt(pos, val, a, n);
}

