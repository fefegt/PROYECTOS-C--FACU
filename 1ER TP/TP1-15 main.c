#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int cantidadpc;
	float valorunidadpc, total, totalcontodoslosdescuentospcbien, totalcontodoslosdescuentospcmal, preciodescuento, precioenvio;
	
	cantidadpc=30;
	valorunidadpc=11500;
	
	total=valorunidadpc*cantidadpc;
	totalcontodoslosdescuentospcbien=(total*37)/100;
	totalcontodoslosdescuentospcmal=(total*25)/100;
	preciodescuento=(total*20)/100;
	precioenvio=(total*5)/100;
	
	printf("El total de la compra es:%1.f \n", total);
	printf("El total con todos los descuentos y las pc bien es:%1.f \n",totalcontodoslosdescuentospcbien );
    printf("El total con todos los descuentos y las pc mal es:%1.f \n",totalcontodoslosdescuentospcmal );
	printf("El precio con el descuento solamente es:%1.f \n", preciodescuento);
	printf("El precio del envio es:%1.f \n", precioenvio);
	
	return 0;
}
