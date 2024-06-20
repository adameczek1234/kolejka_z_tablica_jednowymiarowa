#include <stdio.h>
#include <stdlib.h>
#include "array.h"

void menu() {
    printf("1 - Wpisz element do tablicy: \n");
    printf("2 - Usuń pierwszy element z tablicy: \n");
    printf("3 - Pokaż pierwszy element z tablicy: \n");
    printf("4 - Usuń wszystkie element z tablicy: \n");
    printf("5 - Zakończ program!!! \n");
}

int main(){
    int kolejka[SIZE];
    int aktualna_liczba_elementow = 0;
    while (1){
        menu();
        int numer_menu = 0;
        scanf("%d",&numer_menu);
        int element_tablicy = 0;

        switch (numer_menu) {
            case 1:
                scanf("%d",&element_tablicy);
                dodaj_element_tablicy(kolejka, element_tablicy, &aktualna_liczba_elementow);
                break;
            case 2:
                usun_pierwszy_elemnt_tablicy(kolejka, &aktualna_liczba_elementow);
                break;
            case 3:
                pokaz_pierwszy_element_tablicy(kolejka, aktualna_liczba_elementow);
                break;
            case 4:
                usun_wszystkie_elementy_tablicy(kolejka,&aktualna_liczba_elementow);
                break;
            case 5:
                exit(10);
                break;
            default:
                printf("Wybrałeś zły elemet!!!\n");
        }
    }
}