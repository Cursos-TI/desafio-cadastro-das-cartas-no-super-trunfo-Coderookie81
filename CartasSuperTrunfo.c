#include<stdio.h>
int main(){

  char Estado[20];
  int Código;
  char Cidade[20];
  int População;
  float km²;
  int PIB;
  int NPT;
  float Densidade;
  float Pib;

     printf("*****Cidade 1*****\n");

printf("Insira o Estado:");
scanf("%s", &Estado );

printf("Insira o Código da Carta:");
scanf("%d", &Código);

printf("Insira o nome da Cidade:");
scanf("%s", &Cidade);

printf("Insira a População Estimada:");
scanf("%d", &População);

printf("Insira o tamanho da Área em Km²:");
scanf("%f", &km²);

printf("Insira o PIB:");
scanf("%f", &PIB);

printf("Insira o Número de Pontos Turísticos:");
scanf("%d", &NPT);

Densidade= População/km²;
printf("Densidade Populacional:%f \n", Densidade);

Pib= PIB/População;
printf("PIB per Capita: %f\n", Pib);

      printf("*****Cidade 2*****\n");

printf("Insira o Estado:");
scanf("%s", &Estado );

printf("Insira o Código da Carta:");
scanf("%d", &Código);

printf("Insira o nome da Cidade:");
scanf("%s", &Cidade);

printf("Insira a População Estimada:");
scanf("%d", &População);

printf("Insira o tamanho da Área em Km²:");
scanf("%f", &km²);

printf("Insira o PIB:");
scanf("%f", &PIB);


printf("Insira o Número de Pontos Turísticos:");
scanf("%d", &NPT);

Densidade= População/km²;
printf("Densidade Populacional:%f \n", Densidade);

Pib= PIB/População;
printf("PIB per Capita: %f\n",Pib);


}
