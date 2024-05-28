#include <stdio.h>
#include <string.h>

// Define the structure
struct word {
    char fiche[10000];
};

// Declare global variables
struct word T[100];
int N;

// Function to insert text into the array
void inser() {
    printf("Entrer le nombre de textes à insérer: ");
    scanf("%d", &N);
    getchar(); // To consume the newline character left by scanf
    for (int i = 0; i < N; i++) {
        printf("Entrer le texte %d: ", i + 1);
        fgets(T[i].fiche, sizeof(T[i].fiche), stdin);
        // Remove the newline character at the end of the string
        T[i].fiche[strcspn(T[i].fiche, "\n")] = 0;
    }
}

// Function to save the texts to a file
void sauver() {
    const char *filename = "/home/redragon/codingtrain/tdi/passage/test_save_insert/absence.txt"
    FILE *absence = fopen(filename, "w");
    if (!absence) {
        perror("Erreur d'ouverture de fichier");
    } else {
        for (int i = 0; i < N; i++) {
            fprintf(absence, "%s\n", T[i].fiche);
        }
        fclose(absence);
        printf("Textes sauvegardés avec succès\n");
    }
}

int main() {
    while (1) {
        printf("Programme word\n");
        printf("1: Inserer\n2: Sauvegarder\n3: Quitter\n");
        int choix;
        scanf("%d", &choix);
        getchar(); // To consume the newline character left by scanf
        if (choix == 1) {
            inser();
        } else if (choix == 2) {
            sauver();
        } else if (choix == 3) {
            break;
        } else {
            printf("Choix invalide\n");
        }
    }
    return 0;
}

