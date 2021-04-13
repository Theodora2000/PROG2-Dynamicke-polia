#include <string.h>
#include <memory.h>
#include <stdlib.h>
#include <stdio.h>

int fun(int pole[],int n, int m ){

    int i;
    int** nizovi=malloc(sizeof(int*) * (n));
    for(i=0;i<n;i++){
        nizovi[i] = malloc(m);
    }

    int j;
    for(int i=0;i<n;i++){
        for(j=0;j<m;j++){
            nizovi[i][j]= 0;

        }

    }
    for(int i=0; i<n; i++)
    {

        for(int j=0;j<m;j++ )
        {

            printf("%d ",nizovi[i][j]);
        }
        printf("\n");
    }



}

int main() {
    int *arr;


    fun(arr, 4,4);



    return 0;
}