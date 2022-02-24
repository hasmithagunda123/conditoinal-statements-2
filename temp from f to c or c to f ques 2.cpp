#include<stdio.h>
#include<math.h>
int main()
{
	float c,f,temperature;
	int x;
	printf("1.enter the temperature in f\n");
	printf("2.enter the temperature in c\n");
	printf("enter choice\n");
	scanf("%d",&x);
	switch (x)
	{
	case 1:
		printf("enter the temperature");
		scanf("%f",&f);
		c=(f-32)/1.8;
		printf("%f",c);
		break;	
	case 2:
		printf("enter the temperature");
		scanf("%f",&c);
		f=(c*1.8)+32;
		printf("%f",f);
		break;
		default:
			printf("wrong choice");
    }
	return (0);
}

