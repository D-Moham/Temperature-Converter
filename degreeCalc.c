#include <stdio.h>

int main(){
    
    char c;
    float a, b;
    printf("Is your degree (F) or (C) (it is case sensitive)\n");
    scanf("%c",&c);

    switch(c){
        case 'F':
            printf("Enter your degree: \n");
            scanf("%f", &a);
            float celcius = ((a - 32) * 5) / 9;
            printf("Your degree in celcius is: %f \n", celcius);
            break; 
        case 'C':
            printf("Enter your degree: \n");
            scanf("%f", &b);
            float fahren = (b * (9/5)) + 32;
            printf("Your degree in fahren is: %f \n", fahren);
            break; 
    }
    return 0;
}