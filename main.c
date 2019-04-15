#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }
int main()
{
	int a, c,i;
	char b;
	char arr[]={'+','-','*','/'};
        int (*fptr[])(int,int)={plus,minus,multiply,divided};
        printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
        for(i=0;i<4;i++)
       {
        if(b==arr[i])
       {
        
        printf("%d%c%d=%d\n",a,b,c,fptr[i](a,c));
       }
      

} 
	//IF ELSE IF
       
/*	if (b == '+')
		printf("%d %c %d = %d\n", a, b, c, plus(a, c));
	else if (b == '-')
		printf("%d %c %d = %d\n", a, b, c, minus(a, c));
	else if (b == '*')
		printf("%d %c %d = %d\n", a, b, c, multiply(a, c));
	*/
}
