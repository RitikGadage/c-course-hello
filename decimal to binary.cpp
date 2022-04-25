#include <stdio.h>

#include <stdlib.h>



int main(){

    int number, remainder;

    int binary[35];

    puts("Enter the number: ");

    scanf("%d", &number);



    int i = 0;

    while( number != 0){

        remainder = number%2;//remainder

        binary[i]=remainder;

        number = number/2;

        i++;

    }

    for (int j = i - 1 ; j >= 0; j--){

        printf("%d  ", binary[j]);

    }

    return EXIT_SUCCESS;

}