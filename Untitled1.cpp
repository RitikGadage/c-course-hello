#include <stdio.h>

#include <stdlib.h>



int main(){

    int number, remainder;
    int temp = 17;

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
    int value=2;
    int zcount=0;
    char zc=zcount+'0';
    printf("%d",temp);
    while(value<temp){
    	value=value*2;
    	zcount++;
    	
	}
	printf("%d",zcount);
	switch(zc){
		case '4':
			printf("0 ","0 ","0 ");
			for (int j = i - 1 ; j >= 0; j--){

        			printf("%d  ", binary[j]);
    }
			
		case '5':
				printf("0 ","0 ");
					for (int j = i - 1 ; j >= 0; j--){

        			printf("%d  ", binary[j]);
    		}
    		break;
    	default:
    		printf("dgdd");
	}

    
//    for (int j = i - 1 ; j >= 0; j--){
//
//        //printf("%d  ", binary[j]);
//
//    }
    return EXIT_SUCCESS;

}