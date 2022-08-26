#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main(){
   setlocale(LC_ALL,"Portuguese");
   //int-%d, float-%f, double-%lf, char- %c
   double tempo,kmr,velocidade;
   
   printf("digite o tempo :");
   scanf("%lf",&tempo);
   printf("digite o km :");
   scanf("%lf",&kmr);
   
   velocidade = kmr/tempo;

   printf("sua velocidade media foi %lf km/h",velocidade);

   printf("\n\n");
   system("pause");
}
