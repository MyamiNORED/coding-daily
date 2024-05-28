#include <stdio.h>
#include <string.h>

struct Date {
    int jour;
    int mois;
    int annee;
};

struct Abscence {
    int numero;
    char nom[16];
    char prenom[16];
    char cin[8];
    char motif[50];
    struct Date date;
};

// Global array of Abscence
#define N 4
struct Abscence T[N];

void remplissage() {
    // Dummy data
    T[0].numero = 101;
    strcpy(T[0].nom, "John");
    strcpy(T[0].prenom, "Doe");
    strcpy(T[0].cin, "AB123456");
    strcpy(T[0].motif, "Illness");
    T[0].date.jour = 12;
    T[0].date.mois = 5;
    T[0].date.annee = 2023;

    T[1].numero = 102;
    strcpy(T[1].nom, "Jane");
    strcpy(T[1].prenom, "Smith");
    strcpy(T[1].cin, "CD789012");
    strcpy(T[1].motif, "Vacation");
    T[1].date.jour = 3;
    T[1].date.mois = 6;
    T[1].date.annee = 2023;

    T[2].numero = 103;
    strcpy(T[2].nom, "Emily");
    strcpy(T[2].prenom, "Jones");
    strcpy(T[2].cin, "EF345678");
    strcpy(T[2].motif, "Work");
    T[2].date.jour = 15;
    T[2].date.mois = 7;
    T[2].date.annee = 2023;

    T[3].numero = 104;
    strcpy(T[3].nom, "Michael");
    strcpy(T[3].prenom, "Brown");
    strcpy(T[3].cin, "GH901234");
    strcpy(T[3].motif, "Personal");
    T[3].date.jour = 25;
    T[3].date.mois = 8;
    T[3].date.annee = 2023;
}

void sort_cin() {
    struct Abscence temp;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (strcmp(T[j].cin, T[i].cin) < 0) {
                temp = T[i];
                T[i] = T[j];
                T[j] = temp;
            }
        }
    }
}

void print_abscences() {
    for (int i = 0; i < N; i++) {
        printf("%d %s %s %s %s %02d/%02d/%04d\n",
               T[i].numero,
               T[i].nom,
               T[i].prenom,
               T[i].cin,
               T[i].motif,
               T[i].date.jour,
               T[i].date.mois,
               T[i].date.annee);
    }
}

int main() {
    remplissage();    // Populate the data with dummy values
    sort_cin();       // Sort the data by CIN
    print_abscences();// Print the sorted data

    return 0;
}

