#include <stdio.h>


int soma(int );
int fatorial(int );
int fibonacci(int );
int resultado(int, int (*)(int));

int main(void) {
  int n;
  char op;

  scanf("%d",&n);
  scanf(" %c",&op);

  switch(op){
    case '+':
    printf("%d",resultado(n, soma));
    break;

    case '!':
    printf("%d",resultado(n, fatorial));
    break;

    case 'f':
    printf("%d",resultado(n, fibonacci));
    break;
  }
  return 0;
}

int soma(int n){
  if (n > 0) 
    return (n + soma(n - 1));
  else 
    return n;
}

int fatorial(int n){
  if(n==1)
      return n;

  return n*fatorial(n-1);
}

int fibonacci(int n){
  if(n==1 || n==2)
    return 1;
  else
    return fibonacci(n-1) + fibonacci(n-2); 
}

int resultado(int n, int (*pt)(int)){
  return (*pt)(n);
}
