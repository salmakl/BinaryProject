#include <iostream>
#include<stdio.h>
void add(int t[3],int t2[3]){
	  int result[4],int rest[4]=0;
    for(int i<4;i=0;i--){
        if(bin1[i]==1&&bin2[i]==1)
        rest[i]=0;
        rest[i+1]=1;
        else
        rest[i]=0;
    }
    for(int i=0;i<4;i++){
        if(bin1[i]==1&&bin2[i]==0&&rest[i+1]==0||bin1[i]==0&&bin2[i]==1&&rest[i]==0)
        result[i]=1;
        else if(bin1[i]==0&&bin2[i]==0)
        result[i]=1;
    }
    for(int i=0;i<4;i++){
        printf("%d ",result[i]);
	
}
int ban2int (){


return 0;

}
int integertobinary (){

    return 0;

}

int main(int argc, char** argv) {
	return 0;
}
