#include<stdio.h>
int main(void)
{
	int i;
	double p,r,s;
	i=0;
	s=300000;
	p=6000;
	r=1.01;
	while(s>0){
		s=s*r;
		s=s-p;
		i++;
		printf("%d\t%f\n",i,s);
	}
	printf("%d\n",i);
	return 0;
}
