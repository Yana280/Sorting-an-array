#include <stdio.h>

void Bubble(int a[], int n)
{
    int passes, comparisons, i, j, temp;
    passes = n - 1;
    
    for (i = 0; i < passes; i++) {
        comparisons = n - 1 - i;
        for (j = 0; j < comparisons; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("First ele: %d \nLast Ele:%d", a[0], a[n-1]);
}

int main()
{
   int arr[5] = {120, 30, 40, 500, 100};
   Bubble(arr, 5);
   return 0;
}


