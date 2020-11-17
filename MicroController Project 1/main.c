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
    
    int i = 0;
    int j = 0;
    
    const int r = 128;
    const int l = 128;
    
    char input[r][l] = {NULL};


    FILE * filetoread = fopen("/Users/kieranlienau/Desktop/Eingabe_Ausgabe/Eingabe.txt", "r");
    
    
    if(filetoread == NULL) {
        printf("Opening failed");
        return 1;
    }
    
   
    
    while(fgets(input[i], l, filetoread))
    {
        input[i][strlen(input[i])] = '\0';
        i++;
    }
    j = i;
    
    for (i = 0; i < j; ++i) {
        printf(" %s", input[i]);
    }
    
    fclose(filetoread);
    
    
    
    int x;
    
    FILE *Deckausgabe;
        Deckausgabe = fopen("/Users/kieranlienau/Desktop/Eingabe_Ausgabe/Ausgabe.txt","w");
        
    
    for (x = 0; x < r; x++) {
        fprintf(Deckausgabe, "%s" , input[x]);
    }
         
         
    return 0;
}

    
         /*
         
     char Kartenwert[13] = {'2','3','4','5','6','7','8','9','Z','B','D','K','A'};
    char Kartenfarbe[4] = {'C','H','P','K'};
    char Deck[52][3] = { NULL };
     
    
    
    
    
    FILE *Deckausgabe;
        Deckausgabe = fopen("/Users/kieranlienau/Desktop/Eingabe_Ausgabe/Ausgabe.txt","w");
        fprintf(Deckausgabe,",");
    for (z=0;z < 13;z++){
        fprintf(Deckausgabe,"%c ,",Kartenwert[l]);
    }
    fprintf(Deckausgabe,"\n");
    for (z=0;z < strlen(Kartenfarbe);i++){
        fprintf(Deckausgabe,"%c ,",Kartenfarbe[z]);
        for (x=0; x < strlen(Kartenwert);x++){
        char karte[3] = {Kartenfarbe[z],Kartenwert[x]};
        fprintf(Deckausgabe,"%s ,",karte);
        
        }
        fprintf(Deckausgabe,"\n");
    }
    
    printf("Hallo");
          */
 

 

   
        
