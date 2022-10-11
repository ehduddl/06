#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer (){
    int n;
	printf("n을 입력하시오 : ");
    scanf("%d",&n);
    return (n);
}

int get_integer2 (){
    int r;
	printf("r을 입력하시오: ");
    scanf("%d",&r);
    return (r);
}

int factorial (int n){
    int res = 1,i;
    for (i=1;i<=n;i++)
    res =res*i;
    return (res);
}

int combination ()
{
	int n,r;
	n=get_integer();
	r=get_integer2();
	int a,b,c;
	a=factorial (n);
	b=factorial (r);
	c=factorial (n-r);
    return (a/(b*c));
}


int main(int argc, char *argv[]) {
	
	int x;
    x = combination ();
    printf("combination의 답은 %d입니다",x);
    
}
