#include<stdio.h>

int main(){
	int a=10,b=20,c;
	printf("바꾸기 전: a = %d, b= %d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("바꾼 후 : a = %d, b = %d",a,b);
}
