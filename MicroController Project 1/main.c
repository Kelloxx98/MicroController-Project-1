//
//  main.c
//  MicroController Project 1
//
//  Created by Kieran Lienau on 19.10.20.
//

#include <stdio.h>

int main() {
    
    double a, b, product;
        printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
     
        // Calculating product
        product = a * b;

        // Result up to 2 decimal point is displayed using %.2lf
    
        if ( product < 5 )
        {printf("Zu klein. Wie dein Pimmel. Höhö. \n");
        } else {
            printf("Product = %lf \n", product);
        }
    
    
    
    printf("Test1");
    printf("Test3");
    printf("Test3");
    
    printf("Test5");
        return 0;
}
