//
//  main.c
//  MicroController Project 1
//
//  Created by Kieran Lienau on 19.10.20.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

 // hab da mal das irrelevante gelöscht du mongo!
	
    printf("Na du Fickschnitzel\n");
    puts("Selber!");

	char Kartenwert[13] = {'2','3','4','5','6','7','8','9','Z','B','D','K','A'};
	char Kartenfarbe[4] = {'C','H','P','K'};
	char Deck[52][3] = { NULL };
	int zaehler=0;
	int i;
	int j;
	int l;
	FILE *Deckausgabe;
		Deckausgabe = fopen("C:/Users/Lukas/Desktop/Test/TestDatei.CSV","w");
		fprintf(Deckausgabe,",");
	for (l=0;l < 13;l++){
		fprintf(Deckausgabe,"%c ,",Kartenwert[l]);
	}
	fprintf(Deckausgabe,"\n");
	for (i=0;i < strlen(Kartenfarbe);i++){
		fprintf(Deckausgabe,"%c ,",Kartenfarbe[i]);
		for (j=0; j < strlen(Kartenwert);j++){
		char karte[3] = {Kartenfarbe[i],Kartenwert[j]};
		fprintf(Deckausgabe,"%s ,",karte);
		//strcat(Deck[zaehler],karte);
		//zaehler++;
		}
		fprintf(Deckausgabe,"\n");
	}
    
    printf("Hallo");



	/*int k;
	for (k=0;k<52;k++){

		fprintf(Deckausgabe,"Karte %i = %s,",k+1 ,Deck + k);

	}*/
        return 0;
}
    /*
	Der Alte Kram:
	
	double a, b, product;
        printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

        // Calculating product
        product = a * b;

        // Result up to 2 decimal point is displayed using %.2lf

        if ( product < 5 )
        {
        	printf("Zu klein. Wie dein Pimmel. Höhö. \n");
        }
        else {
            printf("Product = %lf \n", product);
        }
    

 
    printf("Na du Fickschnitzel");
    puts("Selber!");
    return 0;*/
