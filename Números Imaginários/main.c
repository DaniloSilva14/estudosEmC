#include <stdio.h>
#include <stdlib.h>

typedef struct{ 
  double re; 
  double im;
}tComplexo;

tComplexo soma(tComplexo c1, tComplexo c2) ;
tComplexo div1(tComplexo c1, tComplexo c2) ;
void mult(tComplexo c1, tComplexo c2, tComplexo *c3) ;
void printComplexo(tComplexo c);

int main(void) {
  //importante
  tComplexo n1, n2, aux;
  //opcao
  int op;

  do{
    //opcao
    scanf("%d",&op);

    //escolhas
    switch(op){
       case 0:
       //Sair (0)
        exit (0);
      break;
      
      case 1:
      //Soma (1)
        scanf("%lf %lf",&n1.re, &n1.im);
        scanf("%lf %lf",&n2.re, &n2.im);
        //func tipo tcomplex
        aux=soma(n1, n2);
      break;
      
      case 2:
      //Divisao(2)
        scanf("%lf %lf",&n1.re, &n1.im);
        scanf("%lf %lf",&n2.re, &n2.im);
        //func tipo tcomplex
        aux=div1(n1, n2);
      break;

      case 3:
      //Multiplicação (3)
        scanf("%lf %lf",&n1.re, &n1.im);
        scanf("%lf %lf",&n2.re, &n2.im);
        //func void
        mult(n1,n2,&aux);
      break;

      case 4:
      //Mostrar (4)
        //func void
        printComplexo(aux);
      break;
    }
  }
  while(op);

  return 0;
}

tComplexo soma(tComplexo c1, tComplexo c2) {
  tComplexo aux;

  aux.re=c1.re+c2.re;//soma parte real
  aux.im=c1.im+c2.im;//soma parte img

  return aux;
}

tComplexo div1(tComplexo c1, tComplexo c2){
  tComplexo aux;

  aux.re=(((c1.re*c2.re)+(c1.im*c2.im))/((c2.re*c2.re)+(c2.im*c2.im)));//div parte real
  aux.im=(((c1.im*c2.re)-(c1.re*c2.im))/((c2.re*c2.re)+(c2.im*c2.im)));//divparte real

  return aux;
}

void mult(tComplexo c1, tComplexo c2, tComplexo *c3) {

  c3->re=((c1.re*c2.re)-(c1.im*c2.im));//mult parte real
  c3->im=((c1.re*c2.im)+(c1.im*c2.re));//mult parte real

}

//func do prof para printar numC
void printComplexo(tComplexo c){
  printf("%.2f", c.re); 
  if (c.im >= 0){ 
    printf("+"); 
  }
  printf("%.2fi\n", c.im);
} 
