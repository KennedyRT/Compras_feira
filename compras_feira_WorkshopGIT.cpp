#include <stdio.h>

int main(){
	
	int ovo,banana,alface;
	
	printf("Compras na feira\n");
	printf("Quantos ovos,bananas e alfaces voce ira comprar?\n");
	scanf("%d%d%d", &ovo,&banana,&alface);
	printf("Resultado Final da compra: \nOvos=%d\nBananas=%d\nalface=%d\n",ovo, banana,alface);
	return 0;
}
