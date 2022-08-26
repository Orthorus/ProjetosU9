#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main(){
   setlocale(LC_ALL,"Portuguese");
 
   double raio,a;

   printf("Digite o raio da circunferencia:  ");
   scanf("%lf",&raio);

   a = (3.14159) * pow(raio,2);
   
   printf("A area é :%0.5lf",a);   
   
   printf("\n\n");
   
   system("pause");
}
