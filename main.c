#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <stdlib.h>

int fun(int pole[], int dlzka){

    int *nove;
    nove = (int*)malloc(dlzka*sizeof(int));
    if(nove!=NULL){
        memcpy(nove, pole, dlzka*sizeof(int));

    }

    for(int i=0;i<dlzka;i++){
        printf("%d ", nove[i]);
    }

    return nove;

}

int main() {
   int pole[]={1,5,2,3,7,4};
   int dlzka =  sizeof(pole)/sizeof(pole[0]);
   //printf("%d", dlzka);
   printf("\n%d ",fun(pole,dlzka));
    return 0;
}
