#include <stdio.h>
#include <stdlib.h>

int main()
{
int num, cen, uni, dec, res;
printf("ingrese numero de 3 cifras: ");
scanf("%d", &num);
cen= num/100;
res= num%100;
dec= res/10;
uni= res%10;
printf("unidad = %d decena = %d centena = %d",uni,dec,cen);
}
