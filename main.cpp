#include <iostream>
#include<stdio.h>


void add(int t[3],int t2[3]){
	  int result[4],rest[4];
	  int i;
    for(i<4;i=0;i--){
        if(t[i]==1&&t2[i]==1){
		
        rest[i]=0;
        rest[i+1]=1;
        }else
        rest[i]=0;
    }
    for(int i=0;i<4;i++){
        if(t[i]==1&&t2[i]==0&&rest[i+1]==0||t[i]==0&&t2[i]==1&&rest[i]==0)
        result[i]=1;
        else if(t[i]==0&&t2[i]==0)
        result[i]=1;
    }
    for(int i=0;i<4;i++){
        printf("%d ",result[i]);
	
}

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

int *integertobinary (int a){

    int i = 0,j=0,b[4],bin;
    while(a !=0){
        b[j]=a%2;
        bin=a*i;
        a=a/2;
        i=i*10;
        j++;}
	return 0;
   
}

int main(int argc, char** argv) {

    ban2int() ;
	return 0;
}
