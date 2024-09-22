#include <stdio.h>

int main()
{   int numero, i, resultado;

     printf("Digite um numero para ver sua tabuada: ");
      scanf("%d", &numero);
     
     for  (i= 1; i<11; i++)
     {
    
     resultado = numero + i;
     
       
       printf("%d + %d = %d\n", numero, i, resultado);
      
     }
     
     

    return 0;
}