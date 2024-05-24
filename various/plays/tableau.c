#include <stdio.h>
main(){
int T[100][100],L,C;
int j,i; 
  printf("saisir L,C");
  scanf("%d%d",&L,&C);
for (i=0;i<L;i++){
  for (j=0 ; j<C ; j++)
  {
   scanf("%d" , &T[i][j]);
  }
}

for (i=0;i<L;i++){
    for (j=0 ; j<C ; j++)
     {
     printf("|%d|" , T[i][j]);
}
}

 


}

