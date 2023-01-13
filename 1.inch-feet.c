//1. add two distances in inch-feet using structure. The values of the distances is to be taken from the user.

#include<stdio.h>
struct data
{
	int a;
	int b;
	int c;
	int d;
	
};
main()
{
	struct data i;
	i.a;
	i.b;
	int sum;
	printf("enter value:");
	scanf("%d",&i.a);
	printf("enter value:");
	scanf("%d",&i.b);
	sum=i.a+i.b;
	printf("%d",sum);
	printf("\n");

	struct data f;
	f.c;
	f.d;
	int add;
	printf("enter value:");
	scanf("%d",&f.c);
	printf("enter value:");
	scanf("%d",&f.d);
	add=f.c+f.d;
	printf("%d",add);
	
	
}
