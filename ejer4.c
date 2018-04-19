//se inicia el progama con biblioteca stdio.h//
//se dan las intrucciones para ejecutar el progama//
//se declaran las variables tales como partidosjugados, golesmarcados, puntos, golesencontra//
//se muestra en pantalla para ingresar el numero de partidos jugados//
//se escanea el numero ingresado//
//se aplica el for para la repeticion//
//se muestra en pantalla para ingresar los goles marcados en el partido//
//se escanea los goles marcados que se ingreso//
//se muestra en pantalla para ingresar los goles en contra//
//se escanea los goles en contra ingresados//
//si los goles marcados son iguales a los en contra, se obtiene 1 punto//
//si los goles marcados son mayores a los en contra, se obtienen 3 puntos//
//se muestra en pantalla el total de puntos obtenidos//
//fin//


#include <stdio.h>

int partidosJugados, golesMarcados, puntos, golesenContra;
int main(){
	printf("Escriba el número de partidos jugados  \n");
	scanf("%d", &partidosJugados);
	for (int i = 1; i <= partidosJugados; ++i){
		printf("Goles marcados en el partido N° %d  \n", i);
		scanf("%d", &golesMarcados);
		printf("Goles en contra en el partido N° %d  \n", i);
		scanf("%d", &golesenContra);
		if (golesMarcados > golesenContra)
		{
			puntos= puntos+3;
		}
		if (golesMarcados == golesenContra)
		{
			puntos= puntos+1;
		}
	}
	printf("Tus puntos son= %d \n", puntos);
	return 0;
}
