#include <stdio.h>

int main()
{   int numero, i, soma, sub, divi, multi;

     printf("Digite um numero para ver sua tabuada: ");
      scanf("%d", &numero);
     
     for  (i= 1; i<11; i++)
     {
    
     soma = numero + i;
     
     printf("%d + %d = %d\n\n", numero, i, soma);
      
     }
     
     for  (i= 1; i<11; i++)
     {
    
     sub = numero - i;
     
     printf("%d - %d = %d\n\n", numero, i, sub);
     
     }
     
     for  (i= 1; i<11; i++)
     {
    
     divi = numero / i;
     
     printf("%d / %d = %d\n\n", numero, i, divi);
      
     }
     
     for  (i= 1; i<11; i++)
     {
    
     multi = numero * i;
     
     printf("%d * %d = %d\n\n", numero, i, multi);
      
     }

    return 0;
}