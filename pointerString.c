#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Fonction pour calculer la taille d'une chaîne de caractères en utilisant les pointeurs
    int tailleChaine(const char *chaine) {
        const char *ptr = chaine;
        while (*ptr != '\0') {
            ptr++;
        }
        return ptr - chaine;
    }

// Fonction pour mettre en majuscules une chaîne de caractères en utilisant les pointeurs
void toUpperCase(char *chaine) {
        while (*chaine) {
            *chaine = toupper(*chaine);
            chaine++;
        }
    } 
   
int main() {  
    char str[] = "";
    printf("Saisir la chaine de characteres:\n");
    scanf("%s",&str);
    printf("Taille de la chaine : %d\n", tailleChaine(str));
    toUpperCase(str);
    printf("Chaine en majuscules : %s\n", str);
    return 0;

 }