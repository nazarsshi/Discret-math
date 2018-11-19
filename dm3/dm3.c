#include<stdio.h>
#include<stdlib.h>
int main ()
{
int a[5];
printf("Put the elements of a array\n");
    for(int i=0; i<5; i++)
{
        printf("Put element[%d]: ",i);
        scanf("%d",&a[i]);
}
printf("\n");
printf("A array:");
    for(int i=0; i<5; i++)
{
        printf("%d",a[i]);
        printf("|");
}
printf("\n\n");
int b[5];
printf("Put the elements of b array\n");
    for(int i=0; i<5; i++)
{
        printf("Put element[%d]: ",i);
        scanf("%d",&b[i]);
}
printf("\n");
printf("B array:");
    for(int i=0; i<5; i++)
{
        printf("%d",b[i]);
        printf("|");
}
printf("\n");

int c[5][5];
    for(int i=0; i<5; i++)
{
        for(int j=0; j<5; j++)
{
            if(2+a[i]>3*b[j])
            {
            c[i][j]=1;
            }
            else
            {
            c[i][j]=0;
            }
}
}

printf("\n");
    for(int i=0; i<5; i++)
   {
        for(int j=0; j<5; j++)
     {
            printf("%d",c[i][j]);
            printf("|");
     }      
        printf("\n");
           
  }
    for(int i=0; i<5-1; i++)
   {
       if(c[i][i]==1 && c[1+i][1+i]==1)
       {
        if(i==5-2)
        {
            printf("Reflecsive matrix");
        }
       }
       if(c[i][i]==0 && c[1+i][1+i]==0)
       {
        if(i==5-2)
        {
            printf("Unreflecsive matrix");
        }
       }
       if((c[i][i]==1 && c[1+i][1+i]==0) ||(c[i][i]==0 && c[1+i][1+i]==1))
       {
        if(i==5-2)
        {
           printf("Antireflecsive matrix");
        }        
       }
    }
printf("\n");    
   for(int i=0; i<5-1; i++)
   { 
      for(int j=0; j<5-1; j++)
      {
        if( c[i][j]==c[j][i]==1 || c[i][j]==c[j][i]==0)
        {
            if(i==5-2 && j==5-2)
            {
                printf("Symetric matrix");
                i+=10;
                j+=10; 
            }
        }
        if((c[i][j]==1 && c[j][i]==0) || (c[i][j]==0 && c[j][i]==1))
        {
            if(i==5-2 && j==5-2)
            {
                printf("Antisymetric matrix");
                i+=10;
                j+=10;
            }
        }
        else
        {
            printf("Unsymetric matrix");
            i+=10;
            j+=10;
        }  
      }
   }
printf("\n");
    for(int i=0; i<5-1; i++)
    {
        for(int j=0; j<5-1; j++)
        {
            for(int k=0; k<5-1; k++)
            {
                if(c[i][j]==c[j][k]==1)
                {
                    if(c[k][i]==1)
                    {
                        if(c[i][j]==c[j][k]==0)
                        {
                            if(c[k][i]==0)
                            {
                                printf("Transitive matrix");
                                i+=10;
                                j+=10;
                                k+=10;
                            }  
                        }
                    }
                }
                if(c[i][j]==c[j][k]==1)
                {
                    if(c[k][i]==0)
                    {
                        if(c[i][j]==c[j][k]==0)
                        {
                            if(c[k][i]==1)
                            {
                                printf("Antitransitive matrix");
                                i+=10;
                                j+=10;
                                k+=10;
                            }
                        }
                    }
                }
                else
                {
                    printf("Untransitive matrix");
                    i+=10;
                    j+=10;
                    k+=10;
                }
            }
        }
    }     
printf("\n"); 

return 0;
}
