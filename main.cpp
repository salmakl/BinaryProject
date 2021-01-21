#include <iostream>
#include<stdio.h>
int add(int a,int b){

	return 0;
}
int ban2int (){

    int  num, binary_val, decimal_val = 0, base = 1, rem;

    printf("Enter a binary number(1s and 0s) \n");
    scanf("%d", &num); /* maximum five digits */
    binary_val = num;
    while (num > 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    printf("The Binary number is = %d \n", binary_val);
    printf("Its decimal equivalent is = %d \n", decimal_val);

return 0;

}
int integertobinary (){

    return 0;

}

int main(int argc, char** argv) {

    ban2int() ;
	return 0;
}
