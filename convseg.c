#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
   setlocale(LC_ALL,"Portuguese");

   double horas,min,seg,s;

   printf("Digite as horas:   ");
   scanf("%lf",&horas);
   
   printf("Digite os minutos:   ");
   scanf("%lf",&min);

   printf("Digite os segundos:   ");
   scanf("%lf",&seg);

   s = (horas * 3600) + (min * 60) + seg;

   printf("A Conversão em segundos é :%0.0lf",s);

   printf("\n\n");

   system("pause");
}
