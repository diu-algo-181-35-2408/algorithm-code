/****
ID:181-35-2408
****/

#include<stdio.h>
#define size 7
int matrix[size][size]={
    {0,1,1,1,0,0,0},
    {0,0,0,0,1,0,0},
    {0,0,0,1,0,1,0},
    {0,1,0,0,0,0,1},
    {0,0,0,0,0,0,0},
    {0,0,0,0,0,0,1},
    {0,0,0,0,1,0,0},
};

int main()
{
    int i=0,j=0;
    printf("Vertex &  Edge : \n\n");
    for(i=0; i<size; i++)
    {
        printf("%d --",i);
        for(j=0; j<size; j++)
        {
            if(matrix[i][j]==1)
                printf(">%d ",j);
        }
         printf("\n\n");
    }
    return (0);
}
