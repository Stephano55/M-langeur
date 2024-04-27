#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void allouer(int **tableau,int taille){
    *tableau = (int *)malloc(taille * sizeof(int));
}
void remplir(int *tableau, int taille){
    printf("entrez les elements du tableau : \n");
    for(int i=0; i < taille; i++){
        scanf("%d", &tableau[i]);
    }
}
void afficher(int *tableau, int taille){
    for(int i=0; i < taille; i++){
        printf("%d ", tableau[i]);
    }
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void melanger(int *tableau, int taille){
    if (taille > 1) {
        srand(time(NULL)); // Initialisation de la graine de génération aléatoire
        for (int i = taille - 1; i > 0; i--) {
            int j = rand() % (i + 1); // Sélection aléatoire d'un index
            swap(&tableau[i], &tableau[j]); // Échange des éléments aux positions i et j
        }
    }
}
int main()
{
    int *tableau;
    int taille;
    printf("Entrez la taille du tableau: ");
    scanf("%d", &taille);
    allouer(&tableau, taille);
    remplir(tableau, taille);
    printf("tableau avant la melange :\n");
    afficher(tableau, taille);
    melanger(tableau, taille);
    printf("\nApres melange : \n");
    afficher(tableau, taille);
    free(tableau);
    return 0;
}
