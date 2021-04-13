#include <string.h>
#include <memory.h>
#include <stdlib.h>
#include <stdio.h>

int fun(int pole[], int* i){

    int cislo=0;

    while(1>0){


        scanf("%d", &cislo);
        if (cislo==0){
            break;
        }
        pole[*i]=cislo;

        (*i)++;
        pole = (int*)realloc(pole, (*i+1)*sizeof(int));
    }

    for(int j=0;j<*i;j++){
        printf("%d ", pole[j]);
    }


    return pole;


}

int main() {
    int *arr;
    int i=0;
    arr = (int*)malloc(sizeof(int));


    printf("\n%d ", arr=fun(arr,&i));




    return 0;
}