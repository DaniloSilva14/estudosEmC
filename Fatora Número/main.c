#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tamanho_crivo 10000

int eprimo(int num){
  int i,r=0;
  int div = 0;
  
  for (i = 1; i <= num; i++) {
    if (num % i == 0) { 
     div++;
    }
  }
    
  if (div == 2)
    r=1;
  return r;    
}

int main()
{
    int num, i, j, aux, x, cont=0, fatores[1000], vezes[1000];

    // Monta o vetor para determinar se um número é primo ou não
    char crivo[tamanho_crivo];
    memset(crivo, 1, tamanho_crivo);
    crivo[0] = 0;
    crivo[1] = 0;
    for(i=2; i < tamanho_crivo; i++){
        if(crivo[i] == 1)
            for(j=2*i; j < tamanho_crivo; j = j+i)
                crivo[j] = 0;  // Números que não são primos, pois são divisíveis por i 
    }

    scanf("%i", &num);
    
    x=eprimo(num);
    if(x==1){
        printf("%d 1",num);
        return 0;
    }
    
    // Parte que executa a fatoração
    memset(vezes, 0, 1000*sizeof(int));
    aux = num;
    for(i=2; i<num; i++){
        if(crivo[i]){
            if(aux%i == 0){
                fatores[cont] = i;
                cont++;
            }
            while(aux%i == 0){
                vezes[cont-1]++;
                aux = aux/i;
            }
        }
    }

    // Imprime os resultados
    for(i=0; i< cont; i++){
        printf("%d", fatores[i]);
        printf(" %d",vezes[i]);
        if(i!=cont-1)
            printf(" ");
        printf("\n");
    }
    return 0;
}
