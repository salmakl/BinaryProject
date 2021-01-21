#include <iostream>
#include<stdio.h>

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
	return 0;
}
