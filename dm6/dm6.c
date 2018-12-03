#include<stdio.h>
#include<stdlib.h>
void qsort_column(int *a, int first, int last) {
    int i = first, j = last, m = a[(first + last) / 2], swap;
    do {
        while (a[i] < m) i++;
        while (a[j] > m) j--;
        if(i <= j) {
            if (i < j) {
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
            }
            i++;
            j--;
        }
    } while (i <= j);
    if (i < last)
        qsort_column(a, i, last);
    if (first < j)
        qsort_column(a, first,j);
}
int fact(int n)
{
    int fact = 1;
    if (n < 2) {
        return 1;
    }
    for (int i=1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int combination(int n, int m) {
    return fact(n) / (fact(n - m) * fact(m));
}

int main()
{
    int array[12]={234561, 231456, 165432, 156423, 543216, 541236, 231465, 314562, 432561, 654321, 654312, 435612};
    qsort_column(array,0,11);
    printf("Leks array:\n");
    for(int i=0; i<12; i++)
    {
        printf("%d",array[i]);
        printf("|");
    }
    printf("\n");
    for(int i=0; i<=8;i++)
    {
        printf("%d*x^%d*y^%d\n",combination(8,i),i,8-i);
    }
    printf("\n");
}
