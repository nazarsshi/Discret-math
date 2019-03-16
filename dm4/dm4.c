#include<stdio.h>
typedef struct
{
    int first_vertex;
    int second_vertex;
    int weight;
}edge;
int whether_in_array(int arr[],int size,int element)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==element)
        {
            return 1;
        }
    }
    return 0;
}
edge min_weight( edge a[], int lenght)
{
    edge min;
    min = a[0];
    for(int i=0; i<lenght; i++)
    {
        if(a[i].weight<min.weight)
        {
            min=a[i];
        }
    }
    
    return min;
}
int isinArray(int arr[],int size, int vertex )
{
    for(int i=0; i<size; i++)
{
        if(arr[i] == vertex)
        {
            return 1;
        }
}
return 0;
}

int main(void)
{
    edge edges[18];
    for(int i=0;i<18;i++)
    {
        printf("Put the first vertex of %d edge:\n",i);
        scanf("%d", &edges[i].first_vertex);
        printf("Put the second vertex of %d edge:\n",i);
        scanf("%d", &edges[i].second_vertex);
        printf("Put the weight of %d edge:\n",i);
        scanf("%d", &edges[i].weight);

    }
    printf("The array of edges with weight:");
    printf("\n");
    for(int i=0;i<18;i++)
    {
        printf("Edge %d-%d has weight %d\n",edges[i].first_vertex,edges[i].second_vertex,edges[i].weight);

    }
    printf("\n\n");

    int vertexes[36];
    for(int i=0; i<18; i++)
    {
        vertexes[i*2]=edges[i].first_vertex;
        vertexes[i*2+1]=edges[i].second_vertex;
    }
    printf("The array of all the vertexes:\n");
    for(int i=0; i<36; i++)
    {
        printf("%d",vertexes[i]);
        printf("|");
    }
    printf("\n");
    int ult_vertexes[11];
    int count=0;
    for(int i=0; i<36; i++)
    {
        if(!whether_in_array(ult_vertexes,count,vertexes[i]))
        {
            ult_vertexes[count]=vertexes[i];
            count++;
        }
    }
    
    printf("The array of vertexes without repeats:\n");
    for(int i=0; i<11; i++)
    {
        printf("%d",ult_vertexes[i]);
        printf("|");
    }
    printf("\n");
    int active_vertexes_arr[11];
    active_vertexes_arr[0]=ult_vertexes[0];
    int vcount=1;
    int active_ecount=0;
    printf("The Pryma`s algorythm graph:\n");
    do
    {
        edge edges_selection[11];
        int ecount=0;
        for(int i=0; i<18;i++)
        {
            if((isinArray(active_vertexes_arr,vcount,edges[i].first_vertex) + isinArray(active_vertexes_arr,vcount,edges[i].second_vertex)) % 2)
            {
                
                edges_selection[ecount]=edges[i];
                ecount++;
            }
        }
         edge min=min_weight(edges_selection,ecount);
         active_ecount++;
         if(isinArray(active_vertexes_arr,vcount,min.first_vertex))
         {
            active_vertexes_arr[vcount]=min.second_vertex;
         }
         else
         {
            active_vertexes_arr[vcount]=min.first_vertex;
         }
         printf("%d-%d |",min.first_vertex,min.second_vertex);
         vcount++;
     
    }while(vcount!=11);
    printf("\n");    
}
