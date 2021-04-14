#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <stdlib.h>

int* fun(int pole[], int dlzka, int n){
    int *nove;
    nove = (int*)malloc((dlzka-1)*sizeof(int));
    int j=0;
    for(int i=1;i<dlzka;i++){
        nove[j]=pole[i];
        j++;
    }
    nove = realloc(nove,(dlzka-1+n)*sizeof(int));
    for(int i=0;i<n;i++){
        nove[j]=i+j;
    }

    printf("Stare pole\n");
    for(int i=1;i<dlzka;i++){
        printf("%d ",pole[i]);

    }
    printf("\nNove pole\n");
    for(int i=0;i<j;i++){
        printf("%d ", nove[i]);
    }

    nove = realloc(nove,(dlzka-1+n)*sizeof(int));
    for(int i=0;i<n;i++){
        nove[j]=i+j;
        j++;
    }


    printf("\nNove pole\n");
    for(int i=0;i<j;i++){
        printf("%d ", nove[i]);
    }


    return pole;

}

int main() {
    int pole[]={10,1,9,7,3,4,7,2,5,7,6};

    int dlzka = sizeof(pole)/sizeof(pole[0]);
    int n=100;
    fun(pole,dlzka, n);
    return 0;
}
