#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer (){
    int n;
	printf("n�� �Է��Ͻÿ� : ");
    scanf("%d",&n);
    return (n);
}

int get_integer2 (){
    int r;
	printf("r�� �Է��Ͻÿ�: ");
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
    printf("combination�� ���� %d�Դϴ�",x);
    
}
