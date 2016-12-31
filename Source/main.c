#include <stdio.h>

int main() 
{

int suma, sumaux, resta, restaux, multiplica, multiplicaux, menu;
float division, divisionaux;

printf("Calcluladora By Munalex\n\n");
printf("Selecciona una Opcion\n\n");
printf("suma 1\n\n");
printf("resta 2\n\n");
printf("multiplicacion 3\n\n");
printf("Division 4\n\n");

scanf("%i",&menu);
 if (menu == 1){
 	
 	system("cls");
 	printf("escribe el primer numero que quieres sumar\n");
 	scanf("%i",&suma);
 	printf("escribe el segundo numero que quieres sumar\n");
 	scanf("%i",&sumaux);
 	suma = suma + sumaux;
 	printf("el resultado de la suma es %i\n",suma);
 	
 }
 
 else {
 	system("exit");
 }
 
 if (menu == 2) {
 	system("cls");
 	printf("selecciona el numero que vas a restar\n\n");
 	scanf("%i",&resta);
 	printf("selecciona el segundo numero que vas a restar\n\n");
	scanf("%i",&restaux);
	
	resta = resta - restaux;
	
	printf("el resultado de la resta es %i\n",resta);
	
}	
	else {
		system("exit");
		
	}
 	
  if (menu == 3) {
  	system("cls");
 	printf("selecciona el numero que vas a multiplicar\n\n");
 	scanf("%i",&multiplica);
 	printf("selecciona el segundo numero que vas a restar\n\n");
	scanf("%i",&multiplicaux);
	
	multiplica = multiplica * multiplicaux;
	
	printf("el resultado de la multiplicacion es %i\n",multiplica);
}	
	else {
		system("exit");
	}
	
	 if (menu == 4) {
  	system("cls");
 	printf("selecciona el numero que vas a dividir\n\n");
 	scanf("%i",&division);
 	printf("selecciona el segundo numero que vas a dividir\n\n");
	scanf("%i",&divisionaux);
	
	division = division / divisionaux;
	printf("el resultado de la division es %f\n",division);
	
}	
	else {
		system("exit");
	}
	
system("pause");
return 0; 


}
