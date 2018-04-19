#include <stdio.h>
int main()
{
int nmaximo,n,o,z;

	while (nmaximo<1||nmaximo>9){
	printf("Ingrese el numero que desea: \n");
	scanf("%d",&nmaximo);}

	for(n=1;n<=nmaximo;n++){

		for(o=1;o<=n;o++){
		printf("%d",o);

			if(o==n){

				for(z=o-1;z>0;z--){
				printf("%d",z);
				}
			}
		}
		printf("\n");
	}
return 0;
}

