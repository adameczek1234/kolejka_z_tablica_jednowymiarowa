#include <stdio.h>
#include "array.h"

void dodaj_element_tablicy(int *kolejka, int element_tablicy, int *romiar_kolejki){
    if (*romiar_kolejki == SIZE){
        printf("Tablica jest pełna!!!\n");
        return;
    }
    kolejka[*romiar_kolejki] = element_tablicy;
    *romiar_kolejki += 1;
}

void usun_pierwszy_elemnt_tablicy(int *kolejka, int *rozmiar_kolejki){
    if (*rozmiar_kolejki == 0){
        printf("Brak elementow w tablicy!!!\n");
        return;
    }

    for (int i = 0; i < *rozmiar_kolejki - 1; ++i) {
        kolejka[i] = kolejka[i + 1];
    }
    kolejka[*rozmiar_kolejki - 1] = 0;
    *rozmiar_kolejki -= 1;
}

void pokaz_pierwszy_element_tablicy(int *kolejka, int elementy_tablicy){
    if (elementy_tablicy == 0){
        printf("Brak elementow w tablicy!!!\n");
        return;
    }
    printf("Pierwszy element tablicy to %d\n",kolejka[0]);
}

void usun_wszystkie_elementy_tablicy(int *kolejka, int *elementy_tablicy){
    if (*elementy_tablicy == 0){
        printf("Brak elementow w tablicy!!!\n");
        return;
    }
    for (int i = 0; i < SIZE ; ++i) {
        kolejka[i] = 0;
    }
    *elementy_tablicy = 0;
}