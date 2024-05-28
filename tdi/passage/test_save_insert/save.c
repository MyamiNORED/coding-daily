#include<stdio.h>
struct word {char fiche[1000];};

struct word T[100];
int N;

void inser(N){
	printf("Entrer Text");
	for (int i = 0 ; i < N ; i++) {
	scanf("%s",&T[i].fiche);
	}
};

void sauver(N) {
	
	
char *filename = "/home/redragon/codingtrain/tdi/passage/test_save_insert/absence.txt";
    
    // Open the file in write mode
    FILE *absence = fopen(filename, "w");
    
    // Check if the file was successfully opened
    if (!absence) {
        // Print an error message if the file could not be opened
        perror("Erreur d'ouverture de fichier");
    } else {
        // Iterate over each absence and write its details to the file
        for (int i = 0; i < N; i++) {
            fprintf(absence, "%s\n",
                    T[i].fiche);
        }
        
        // Close the file
        fclose(absence);
        
        // Print a success message
        printf("Absences sauvegardees avec succes\n");
    }
};



main(){
struct word T[20];
int N = 2;
for(;;){
printf("program word");
printf("1 inser 2 sauvegarder 3 quitter");

int choix;
scanf("%d",&choix);
if(choix == 1) {inser(N);}
else if(choix ==2) {sauver(N);}
else if (choix == 3) {break ;}

}

}
