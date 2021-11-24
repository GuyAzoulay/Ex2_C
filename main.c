#include <stdio.h>
#include "my_mat.h"
#define N 10



int main()
{
	int Mat[10][10];
	int i, j;
	char c = 'R';
  	while (c != 'D')
  	{
	scanf("%s", &c);
	if(c == 'A'){
		fill_Mat(Mat);
	}
	if(c == 'B'){
	scanf("%d",&i);
	scanf("%d",&j);
	containPath(Mat, i , j);
	}
	if(c == 'C'){
	scanf("%d",&i);
	scanf("%d",&j);
	weight(Mat, i ,j);
	}
}
}    
