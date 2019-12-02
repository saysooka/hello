#include <stdio.h>
int bmm(int a,int b){
	if(a%b==0)
	return b;
	return bmm(b,a%b);
}

int main(){
	int a,b;
	scanf("%d%d", &a,&b);
	printf("%d" , bmm(a,b));
}
