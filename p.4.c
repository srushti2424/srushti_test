#include<stdio.h>

void main(){
	int i,j;
	int a[4][4] = {
	   {5,6,8,7},
	   {1,6,9,7},
	   {5,3,8,4},
	   {2,1,7,9}
	};
	
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			if(i==0 || i==3 || j==0 || j==3){
				printf("%d",a[i][j]);
			}else{
				printf(" ");
		}
	}
	printf("\n");
	}
}
