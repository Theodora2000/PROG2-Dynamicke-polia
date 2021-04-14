#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <stdlib.h>

int* fun(int pole[], int dlzka){
    for(int i=1;i<5;i++){
        printf("%d ", pole[i]);
    }



    return pole;

}

int main() {
    int pole[]={4,1,9,7,3};

    int dlzka = sizeof(pole)/sizeof(pole[0]);

    fun(pole,dlzka);
    return 0;
}
