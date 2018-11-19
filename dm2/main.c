#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void Print(char *M, int n, int i)
{

    if (n)
    {
        if (n & 1)
            printf("%f ",M[i]);
        Print(M, n >> 1, i + 1);
    }
}
void convert_into_nums( char c[20],char univer[28],int output_arr[28])
{
    int i=0,g=0;
    while(univer[i]!='\n')
    {
        g=0;
        while(c[g]!='\n')
        {
            if(c[g]==univer[i])
            {
                output_arr[i]=1;
                break;
            }
            else
            {
                output_arr[i]=0;
            }
            g++;
        }
        i++;
    }
} int r, i, size;
size = num;
r = 1 << size;

printf("\n\nA = { 0");
for (i = 0; i < r; i++)
{
Print(M, i, 0);
printf(" | ");
}
printf("\n}");
void unity_arr_creation( int b[28], int c[28], int output_ARR[28])
{
    for(int i=0; i<28; i++)
    {   if( b[i]==1 || c[i]==1)
        {       output_ARR[i]=1;

        }
        else
        {
            output_ARR[i]=0;
        }
    }
}
void symbol_arr_creation( int num_unity_arr[28],char universal2[28],char numless_arr[28])
{
    int count=0;
    universal2=fgets(universal2,28,stdin);
    count=0;
    for(int i=0; i<28; i++)
    {
        count=0;
        if(num_unity_arr[i]!=1)
        {
            count++;
        }   if(num_unity_arr[i]==1)
        {
            numless_arr[i]=universal2[i-count];
        }

    }
}


int main()
{

    int i = 0;
    int num_arr[28];
    int num_Arr[28];
    int num_ARR[28];
    char symb_arr[28];
    char a[20],b[20];
    char universal[28];
    printf("Put the universal array:\n");
    fgets(universal,28,stdin);
    printf("Put the a array:");
    fgets(a,20,stdin);
    printf("Put the b array:");
    fgets(b,20,stdin);

    printf("\n");

    convert_into_nums(a,universal,num_arr);
    convert_into_nums(b,universal,num_Arr);

    unity_arr_creation(num_arr,num_Arr,num_ARR);

    symbol_arr_creation(num_ARR,universal,symb_arr);

    printf("Converted array a:");
    for(i=0; universal[i]!='\n'; i++)
    {
        printf("%d",num_arr[i]);
        printf("|");
    }
    printf("\n");


    printf("Converted array b:");
    for(i=0; universal[i]!='\n'; i++)
    {
        printf("%d",num_Arr[i]);
        printf("|");
    }
    printf("\n");
    /*while(a[i] != '\n')
    {
        printf("%d", a[i]);
        printf("|");
        i++;
    }
    printf("\n");
    i = 0;
    while(b[i] != '\n')
    {
        printf("%d", b[i]);
        printf("|");
        i++;
    }
    printf("\n");*/

    printf("\n");

    printf("Unity of the arrays:");

    for(i=0; universal[i]!='\n'; i++)
    {
        printf("%d",num_ARR[i]);
        printf("|");
    }

    printf("\n");

    printf("The last array of symbols:");
    for(i=0;universal[i]!='\n';i++)
    {
        printf("%c",symb_arr[i]);
        printf("|");
    }
    printf("\n");
    int r, j, size;
    size = strlen(symb_arr);
    r = 1 << size;

    printf("\n\nA = { 0");
    for (j = 0; j < r; j++)
    {
        Print(symb_arr, j, 0);
        printf(" | ");
    }
    printf("\n}");
    return 0;
}