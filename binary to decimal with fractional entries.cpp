#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
	int i,j,n,a;
	float sum=0;
	char binary[20];
	printf("Enter the Binary Number :");
	gets(binary);
	n=strlen(binary);
	for(i=0;i<n;i++)
	{
		if(binary[i]=='.')
		a=i;
	}
	for(j=0,i=1;j<n;j++)
	{
		
		if((binary[j]!='1')&&(binary[j]!='0')&&(binary[j])!='.')
		{
			printf("\n\nPlease enter a Binary number !");
			exit(1);
		}
		if(j<a)
		sum+=(binary[a-1-j]-48.0)*(pow(2.0,j));
		else if(j==a)
		continue;
		else
		{
		sum+=(binary[j]-48.0)*(pow(0.5,i));
		i++;
		}
	}
	printf("\n\nDecimal equivalent of the given Binary Number : %f\n\n\n",sum);
}
