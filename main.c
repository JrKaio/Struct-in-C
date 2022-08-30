#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 struct infoVeiculo{
char marca[15];
int ano;
float preco;
};
 typedef struct infoVeiculo carro;
int main()
{

int i, n = 2;
float p = 0;
carro frota [5];

for(i= 0; i <= n; i++){
        printf("Digite Marca");
   scanf("%[^\n]", &frota[i].marca);
   printf("Digite Ano");
   scanf("%d", &frota[i].ano);
   printf("Digite preco");
   scanf("%f%*c", &frota[i].preco);

}
scanf("%f", &p);
for(i= 0; i <= n; i++){
if (frota[i].preco <= p){
    printf("%s", &frota[i].marca);
   printf("%d", &frota[i].ano);
   printf("%f", &frota[i].preco);

}}

return 0;
}

