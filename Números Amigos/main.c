#include <stdio.h>
#define MAX 1000

int somadiv(int num){
  int soma=0;
  for(int i=1;i<num;i++){
    if(num%i==0)soma+=i;
  }
  return soma;
}

int main()
{
  int a,b,vetor[MAX],j=0;
  printf("Digite o intervalo: ");
  scanf("%d %d",&a,&b);
  
  for(int i=a;i<=b;i++){
    if(somadiv(somadiv(i))==i&&somadiv(i)!=i){
      if(somadiv(i)>=a&&somadiv(i)<=b){
        vetor[j]=i;
        j++;
      }
    }
  }

  for(int i=0;i<j-1;i++){
    printf("%d %d",vetor[i],vetor[i+1]);
    printf("\n");
    i++;
  }
  return 0;
}
