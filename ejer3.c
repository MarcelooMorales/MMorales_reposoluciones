//se inicia el progama bliblioteca stdio.h//
//se dan las intrucciones para ejecutar el progama//
//se declaran las variables int tales como, peso, mg=25//
//se declaran las variables float tales como, dosis, gota, droga//
//se muestra en pantalla lo que es el progama y para ingresar el peso de la persona en numero entero//
//se escanea el peso enviado//
//se declara la dodis= a peso*0.2//


#include <stdio.h>
int main()
{
    int peso,mg=25;
    float dosis,gota,droga;
    printf("Este progama calcula las dodis de medicamentos \n");
    printf("Ingrese el peso de la persona en un numero entero \n");
    scanf("%d",&peso);
    dosis= (peso*0.2);
    printf("la cantidad de miligramos que le corresponden es: %f", dosis);
    printf("\n");
    droga=(100*dosis)/500;
    gota=(droga*mg)/3;
    printf("la cantidad de gotas que tiene que tomar 3 veces al dia son de: %f", gota);
    printf("\n");

    return 0;
}
