#include <stdio.h>
//#include <stdlib.h>
#include <math.h>

float media(int *vetor){
  float m=0;
  for(int i=0;i<10;i++){
      m=m+vetor[i];
    }
    m=m/10;
  return m;
}

float desviomab(int *vetor,int m){
  float desvio=0,aux;
  for(int i=0;i<10;i++){
      aux=m-vetor[i];
      //printf("%d - %d = %.2f\n",m,vetor[i],aux);
      desvio+=fabs(aux);
      //printf("desvio: %.2f\n\n",desvio);
    }
  return desvio/10;
}

int main()
{
    int vetor[10]={0};
    float m,ds;
    
    //lendo vetor
    for(int i=0;i<10;i++){
      scanf("%d",&vetor[i]);
    }

    m=media(vetor);

    //ta certo printf("media: %.2f\n",m);

    ds=desviomab(vetor,m);
  
    //printf("desvio: %.2f\n",ds);
    printf("%.2f",ds);
    

    return 0;
}
