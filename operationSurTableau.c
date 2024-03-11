#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// Fonction pour trier un tableau d'entiers par sélection
void triSelection(int tab[], int taille) {
    int i, j, min, temp;
    for (i = 0; i < taille - 1; i++) {
        min = i;
        for (j = i + 1; j < taille; j++) {
            if (tab[j] < tab[min]) {
                min = j;
            }
        }
        temp = tab[i];
        tab[i] = tab[min];
        tab[min] = temp;
    }
}



int main() {
    // Création et remplissage du tableau de 7 entiers aléatoires entre 0 et 9
    int numbers[7];
    for (int i = 0; i < 7; i++) {
        numbers[i] = rand() % 10;
        printf("%d ",numbers[i]);
    }

    printf("\n");

    // Tri du tableau avec la méthode du tri par sélection
    triSelection(numbers, 7);

    // Affichage du tableau trié
    printf("Tableau trié : ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", numbers[i]);
    }
    
    printf("\n");
    
    // Création et remplissage du tableau de 10 entiers aléatoires
    printf("Tableau de 10 nombres aleatoire : \n");
    int numbers2[10];
    for (int i = 0; i < 10; i++) {
        numbers2[i] = rand() % 100;
      
            printf("%d ", numbers2[i]);
        
    }
    
    printf("\n");
    
    int newSize = 0;
    for(int i = 0; i < 10; i++) {
        if(numbers2[i] % 2 != 0) {
            numbers2[newSize] = numbers2[i];
            newSize++;
        }
    }

    printf("Nombres impairs : ");
    for(int i = 0; i < newSize; i++) {
        printf("%d ", numbers2[i]);
    }
    
}