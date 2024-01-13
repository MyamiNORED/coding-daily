#include <stdio.h>

main()
{
    int x;
    int T[100];int i;int n;int somme =  0 ;int moyenne;

    printf("la dimenssion du tableau n:\n");
    scanf("%d",&n);



    for (i=0; i < n; i++)
    {
        printf("enter element :\n");
        scanf("%d",&T[i]);
        somme = somme + T[i];
    }

    moyenne = somme / n;

    for (i = 0; i < n; i++){
        if (moyenne < T[i]){
            printf("%d \n", T[i]);
        }
    }}
