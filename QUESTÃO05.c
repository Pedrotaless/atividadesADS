#include <stdio.h>
 
int main ()
{ 
    int A, B, C;
      
      printf("Digite valor A: ");
       scanf("%d", &A);

      printf("Digite valor B: ");
       scanf("%d", &B);

      printf("Digite valor C: ");
       scanf("%d", &C);

      printf("\nValor na ordem lida: A= %d, B= %d, C= %d\n",  A, B, C);
      
       printf("Valores em ordem crescente: ");
       
       if ( A>=B && B>=C) {
         printf(" A:%d B:%d C:%d\n", A, B, C);
         } else if (A<=C && C<=B) {
         printf(" A:%d C:%d B:%d\n", A, C, B);
         } else if(B<=A && A<=C) {
         printf(" B:%d A:%d C:%d\n", B, A, C);
         } else if(B<=C && C<=A) {
         printf(" B:%d C:%d A:%d\n", B, C, A);
         } else if (C<=A && A<=B) {
         printf(" C:%d A:%d B:%d\n", C, A, B);
         } else {
         printf(" C:%d B:%d A:%d\n", C, B, A);    
         }
        
          printf("Valor em ordem decrescente: ");

           if (A >= B && B >= C) {
             printf(" A:%d B:%d C:%d\n", A, B, C);
          } else if (A >= C && C >= B) {
             printf("A:%d C:%d B:%d\n", A, C, B);
          } else if (B >= A && A >= C) {
             printf("B:%d A:%d C:%d\n", B, A, C);
          } else if (B >= C && C >= A) {
             printf("B:%d C:%d A:%d\n", B, C, A);
          } else if (C >= A && A >= B) {
             printf("C:%d A:%d B:%d\n", C, A, B);
          } else {
             printf("C:%d B:%d A:%d\n", C, B, A);
         }
        
      
  return 0;
}