#include <string.h>
#include <memory.h>
#include <stdlib.h>
#include <stdio.h>

int fun(int pole[],int n, int d ){

    int pocetak=0;
    int kraj=n/d;
    int i;
    int** nizovi=malloc(sizeof(int*) * (d+1));
    for(i=0;i<d;i++){
        nizovi[i] = malloc(n/d);
    }
    nizovi[i]=NULL;
    int j;
    int indx=0;
    for(int i=0;i<d;i++){
        for(j=pocetak;j<kraj-1;j++){
            nizovi[i][indx]= pole[j];
            indx++;
        }
        nizovi[i][indx]= 0;
        indx=0;
        pocetak=kraj;
        kraj+=(n/d);
    }
    for(int i=0; i<d; i++)
    {
        printf("Pointer: %d\n", nizovi[i]);
        for(int j=0;j<(n/d);j++ )
        {

            printf("%d ",nizovi[i][j]);
        }
        printf("\n");
    }



}

int main() {
    int arr[]={1,5,2,7,3,6,9,3,7,1,3,8};
  //  int *ptr = arr;

    fun(arr, sizeof(arr)/sizeof (arr[0]), 3);



    return 0;
}