#include<stdio.h>
int main(void)
{
	char string[81];
	int i,num=0;
	gets(string);
	if(string[0]!='\0'&&string[0]!=' ') num++;
	for(i=1;string[i]!='\0';i++)
	{
		if(string[i]!=' '&&string[i-1]==' ')
			num++;
	}
	printf("There are %d words in this line. \n",num);
	return 0;
}
