#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a,int b) {
	int sum;
	sum=a+b;
	return(sum);
    
}

int square(int n){
	return(n*n);
}

int get_max(int x,int y){
	if (x>y)
	return(x);
	else return(y);
}
int main(int argc, char *argv[]) {

int re_sum,res_square,re_get_max;
   re_sum = sumTwo(4,5);
   res_square = square(5);
   re_get_max = get_max(3,10);
   printf("%d,%d,%d",re_sum,res_square,re_get_max);

	return 0;
}
