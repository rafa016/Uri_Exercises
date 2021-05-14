#include <stdio.h>
 
int main() {




int dia, diafim, hora, horafim, minuto, minutofim, segundo, segundofim;

scanf("Dia %d", &dia);
 scanf("%d : %d : %d\n", &hora, &minuto, &segundo);
 scanf("Dia %d", &diafim);
 scanf("%d : %d : %d", &horafim, &minutofim, &segundofim);

segundo = segundofim - segundo;
 minuto = minutofim - minuto;
 hora = horafim - hora;
 dia = diafim - dia;

if (segundo < 0){
 segundo = segundo +  60;
 minuto = minuto - 1;
 }

 if (minuto < 0){
 minuto = minuto + 60;
 hora = hora - 1;
 }

if (hora < 0){
 hora = hora + 24;
 dia = dia - 1;
 }

printf("%d dia(s)\n", dia);
 printf("%d hora(s)\n", hora);
 printf("%d minuto(s)\n", minuto);
 printf("%d segundo(s)\n", segundo);



	return 0;
}
