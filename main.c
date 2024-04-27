#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int *tableau;
    int taille;
    printf("Entrez la taille du tableau: ");
    scanf("%d", &taille);
    tableau = (int *)malloc(taille * sizeof(int));
    printf("entrez les elements du tableau : \n");
    for(int i=0; i < taille; i++){
        scanf("%d", &tableau[i]);
    }
    printf("tableau avant la melange :\n");
    for(int i=0; i < taille; i++){
        printf("%d ", tableau[i]);
    }
    if (taille > 1) {
        srand(time(NULL)); // Initialisation de la graine de g�n�ration al�atoire
        for (int i = taille - 1; i > 0; i--) {
            int j = rand() % (i + 1); // S�lection al�atoire d'un index
            swap(&tableau[i], &tableau[j]); // �change des �l�ments aux positions i et j
        }
    }
    printf("\nApres melange : \n");
    for(int i=0; i < taille; i++){
        printf("%d ", tableau[i]);
    }
    return 0;
}
