#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <stdlib.h>

int* fun(int pole[],int pole1[], int dlzka, int dlzka1){
    int *nove;
    nove = (int*)malloc((dlzka+dlzka1)*sizeof(int));
    int j;
    for(int i=0;i<dlzka;i++){
        nove[j]=pole[i];
        j++;
    }
    for(int i=0;i<dlzka1;i++){
        nove[j]=pole1[i];
        j++;
    }
    printf("\nNove pole\n");
    for(int i=0;i<j;i++){
        printf("%d ", nove[i]);
    }


    return nove;

}

int main() {
    int pole[]={10,1,9,7,3,4,7,2,5,7,6};
    int pole1[]={10,1,9,7,3,2,6,3,4,6,2,3,4,6,3,5,3,1};

    int dlzka = sizeof(pole)/sizeof(pole[0]);
    int dlzka1 = sizeof(pole1)/sizeof(pole1[0]);


    fun(pole,pole1,dlzka,dlzka1);
    return 0;
}
