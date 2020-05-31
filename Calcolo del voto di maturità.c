#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void main (void)
{
	//dichiaro le variabili per lo switch
	int a;
	int b;
	
	//dichiaro le variabili
	int votoOrale;
	int votoScritto;
	int credito;
	
	int istituto;
	
	int somma = 0;
	
	//inserisco in input i voti
	printf("Inserire i voti...\n\r");
	
	printf("inserire il voto orale: \n\r");
	scanf("%i", &votoOrale);
	
	printf("inserire il voto scritto\n\r");
	scanf("%i", &votoScritto);
	
	printf("inserire i crediti\n\r");
	scanf("%i", &credito);
	
	//sommo i voti
	somma = votoOrale + votoScritto + credito;
	
	//nel caso non si venga promossi
	if (somma < 60)
	{
		printf("non promosso!...voto %i\n\r", somma);
		return 0;
	}
	//promossi con 100 e lode
	else if(somma > 100)
	{
		printf("promosso con cento e lode!\n\r");
	}
	//nel caso si venga promossi con 60 o più
	else if(somma >= 60)
	{
		printf("promosso con %i!\n\r",somma);
	}
	
	//inserimento dell'istituto
	 
	printf("istituto d'appartenenza...\n\r");
	
	printf("1 = Istituto Tecnico Commerciale\n\r");
	printf("2 = Liceo Scientifico\n\r");
	printf("3 = Istituto Tecnico Industriale\n\r");
	printf("4 = Istituto Professionale Turistico\n\r");
	 
	printf("da quale povieni?\n\r");
	scanf("%i", &istituto);
	
	switch (istituto)
	{
		case 1:
			
			if(somma > 100)
				printf("Complimenti sei un Ragioniere e sei uscito con cento e lode\n\r");
			else
				printf("Complimenti sei un Ragioniere e sei uscito con %i\n\r", somma);
			
		break;
		
		case 2:
			
			if (somma > 100)
				printf("Complimenti sei laureato in maturita' scientifica e sei uscito con cento e lode\n\r");
			else
				printf("Complimenti sei laureato in maturita' scientifica e sei uscito con %i\n\r", somma);
			
		break;
		
		case 3:
			if (somma > 100)
				printf("Complimenti sei un Perito Industriale e sei uscito con cento e lode\n\r");
			else
				printf("Complimenti sei un Perito Industriale e sei uscito con %i\n\r", somma);
		break;
		
		case 4:
			if (somma > 100)	
				printf("Complimenti sei un Operatore industriale e sei uscito con cento e lode\n\r");
			else 
				printf("Complimenti sei un Operatore industriale e sei uscito con %i\n\r", somma);
		break;
	}
	
	return 0;
}
