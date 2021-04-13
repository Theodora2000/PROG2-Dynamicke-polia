#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <stdlib.h>

int* fun(int pole[], int dlzka){

    int *nove;
    nove = (int*)malloc(dlzka*sizeof(int));
    printf("%d\n", sizeof(nove)/sizeof(nove[0]));
    int j=0;
    for(int i=0;i<dlzka;i++){
        if(pole[i]>0)
        {
            nove[j]=pole[i];
            j++;
        }
    }
    nove[j]=-1;
    for(int i=0;i<=j;i++){
        printf("%d ", nove[i]);
    }



    return nove;

}

int main() {
    int pole[]={1,-5,2,-3,7,-4};
    int dlzka =  sizeof(pole)/sizeof(pole[0]);
    //printf("%d", dlzka);
    printf("\n%d ",fun(pole,dlzka));
    return 0;
}
