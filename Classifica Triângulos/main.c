#include <stdio.h>

float eTriangulo(float , float , float );
float angulotriangulo(float , float , float );

int main(){
  float anga,angb,angc;

  scanf("%f %f %f",&anga,&angb,&angc);
  
  if(eTriangulo(anga,angb,angc)) 
    angulotriangulo(anga,angb,angc);

  return 0;
}

float eTriangulo(float a, float b, float c){
  int flag=0;
  
  if((a+b+c)!=180.0)
    printf ("Valores nao formam um triangulo\n");
  else 
    flag++;

  return flag;
} 

float angulotriangulo(float anga, float angb, float angc){
  if(anga==90.0||angb==90.0||angc==90.0)
    printf("Triangulo retangulo");
  else if(anga<90.0&&angb<90.0&&angc<90.0)
    printf("Triangulo agudo");
  else if((anga==angb&&anga!=angc)||(angb==angc&&angb!=anga)||(anga==angc&&angc!=angb))
    printf("Triangulo obtuso");
  return 0;
}
