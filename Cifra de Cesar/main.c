#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void criptografa(char *frase, int token, int tamanho);
void descriptografa(char *frase, int token, int tamanho);

int main(){
  int op, i=0, token = 0;
  char l, *frase=0, *copia=0;

  //recebendo dados
  printf("Digite a frase: ");
  do{
    l=getchar();
    frase=(char *)realloc(frase,(i+1)*sizeof(char));
    if(frase==NULL){
      printf("Erro ao alocar memoria\n");
      exit (1);
    }
    frase[i]=l;
    i++;
  }while(l!='\n');
  i--;
  frase[i]='\0';

  printf("Digite o numero de cesar: ");
  scanf("%d",&token);

  //copiando frase para modifica-la
  copia=(char*)malloc(i*sizeof(char*));
  strcpy(copia, frase);
  i=strlen(copia);

  printf("\n1 - Criptografa\n2 - Descriptografa\nOP: ");
  scanf("%d",&op);

  printf("Frase Recebida: %s\n",frase);

  switch(op){
    case 1: 
      criptografa(copia,token,i);
      printf("Frase Criptografada: %s",copia);
    break;
    case 2: 
      descriptografa(copia,token,i);
      printf("Frase Descriptografada: %s\n",copia);
    break;
  }

  free(frase);
  free(copia);

  return 0;
}

void criptografa(char *frase, int token, int tamanho){
  for(int i=0;i<tamanho;i++){
    if(frase[i]!=' '){
      if((frase[i]+token)>90 && (frase[i]+token)<97){
        frase[i]=frase[i]+token+6;
      }else if((frase[i]+token)>122){
        frase[i]=frase[i]+token-58;
      }else
       frase[i]=frase[i]+token;
    }
  }
}

void descriptografa(char *frase, int token, int tamanho){
  for(int i=0;i<tamanho;i++){
    if(frase[i]!=' '){
      if((frase[i]-token)<65){
        frase[i]=frase[i]-token+58;
      }else if((frase[i]-token)> 90 && (frase[i]-token)<97){
        frase[i]=frase[i]-token-6;
      }else{
        frase[i]=frase[i]-token;
      }
    }
  }
}
