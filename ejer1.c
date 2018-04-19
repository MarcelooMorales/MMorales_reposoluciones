#include <stdio.h>
int numeroaLlegar;
int main(){
    printf("Escriba el N° hasta donde calcular los primos \n");
    scanf("%d", &numeroaLlegar);
    for (int j=2;j<=numeroaLlegar;j++){
    int a=0;
    for(int i=1;i<=numeroaLlegar;i++)
    {
        if(j%i==0)
            a++;
    }
 if (a==2){
 printf("%d\n", j);
 }
 }
 return 0;
}

