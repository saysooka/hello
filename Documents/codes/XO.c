#include <stdio.h>
#include <stdbool.h>

char a[10]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
int i;
int check(){
	if(a[1]=='O'&&a[2]=='O'&&a[3]=='O')
		return 1;
	else if(a[1]=='O'&&a[4]=='O'&&a[7]=='O')
		return 1;
	else if(a[1]=='O'&&a[5]=='O'&&a[9]=='O')
		return 1;
	else if(a[2]=='O'&&a[5]=='O'&&a[8]=='O')
		return 1;
	else if(a[3]=='O'&&a[6]=='O'&&a[9]=='O')
		return 1;
	else if(a[3]=='O'&&a[5]=='O'&&a[7]=='O')
		return 1;
	else if(a[4]=='O'&&a[5]=='O'&&a[6]=='O')
		return 1;
	else if(a[7]=='O'&&a[8]=='O'&&a[9]=='O')
		return 1;
	else if(a[1]=='X'&&a[2]=='X'&&a[3]=='X')
		return 2;
	else if(a[1]=='X'&&a[4]=='X'&&a[7]=='X')
		return 2;
	else if(a[1]=='X'&&a[5]=='X'&&a[9]=='X')
		return 2;
	else if(a[2]=='X'&&a[5]=='X'&&a[8]=='X')
		return 2;
	else if(a[3]=='X'&&a[6]=='X'&&a[9]=='X')
		return 2;
	else if(a[3]=='X'&&a[5]=='X'&&a[7]=='X')
		return 2;
	else if(a[4]=='X'&&a[5]=='X'&&a[6]=='X')
		return 2;
	else if(a[7]=='X'&&a[8]=='X'&&a[9]=='X')
		return 2;
	else if(a[1]!=' '&&a[2]!=' '&&a[3]!=' '&&a[4]!=' '&&a[5]!=' '&&a[6]!=' '&&a[6]!=' '&&a[7]!=' '&&a[8]!=' '&&a[9]!=' ')
		return 3;	
}

int main(){
	printf("  %c|  %c|  %c\n-------------\n  %c|  %c|  %c\n-------------\n  %c|  %c|  %c\n\n",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
	while(true){
		printf("player O\n\n");
		scanf("%d" , &i);
		a[i]='O';
		
		printf("  %c|  %c|  %c\n-------------\n  %c|  %c|  %c\n-------------\n  %c|  %c|  %c\n\n",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
		if(check()==1||check()==2||check()==3){
			break;
		}
		printf("player X\n\n");
		scanf("%d" , &i);
		a[i]='X';
		printf("  %c|  %c|  %c\n-------------\n  %c|  %c|  %c\n-------------\n  %c|  %c|  %c\n\n",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
		if(check()==1||check()==2||check()==3){
			break;
		}
	}
	switch (check()){
		case 1:
			printf("player O wins!");
			break;
		case 2:
			printf("player X wins!");
			break;
		case 3:
			printf("equal!");
			break;
		default:
			break;
	}
	return 0;
}
