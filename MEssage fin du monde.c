#include <stdio.h>
void MessageFinDuMonde(int nbre){
    for ( int i = 0 ; i <= nbre ; i++){
        printf("NTM ESIEA\n");
    }
}

int main(){
    int nbre;
    printf("Saisir une valeur : ");
    scanf("%d",&nbre);
    MessageFinDuMonde(nbre);
}