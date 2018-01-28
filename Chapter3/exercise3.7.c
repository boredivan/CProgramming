#include<stdio.h>
int main(void)
{
	double r,h;
	const double PI=3.1415926;
	printf("r=");
	scanf("%lf",&r);
	printf("h=");
	scanf("%lf",&h);
	printf("圆周长：%7.2lf\n",2*PI*r);
	printf("圆面积：%7.2lf\n",PI*r*r);
	printf("球面积：%7.2lf\n",4*PI*r*r);
	printf("球体积：%7.2lf\n",4.0/3.0*PI*r*r*r);
	printf("柱体积：%7.2lf\n",PI*r*r*h);

}
