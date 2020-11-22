#include<stdio.h>
#include<stdlib.h>
void staticarrayinit(void);
void automaticarrayinit(void);
int main(void)
{
	printf("first call to each function:\n");
	staticarrayinit();
	automaticarrayinit();
	printf("second call to each function:\n");
	staticarrayinit();
	automaticarrayinit();
	printf("\n");
	system("pause");
	return 0;
}
void staticarrayinit(void)
{
	static int array1[3];
	int i;
	printf("\n value on entering staticarrayinit:\n");
	for (i = 0; i <= 2; i++)
	{
		printf("array1[%d]=%d ", i, array1[i]);
	}
	printf("\n value on entering staticarrayinit:\n");
	for (i = 0; i <= 2; i++)
	{
		printf("array1[%d]=%d ", i, array1[i]+=5);
	}
}
void automaticarrayinit(void)
{
	int array2[3] = {1,2,3};
	int i;
	printf("\n value on entering atomaticarrayinit:\n");
	for (i = 0; i <= 2; i++)
	{
		printf("array2[%d]=%d ", i, array2[i]);
	}
	printf("\n value on entering atomaticarrayinit:\n");
	for (i = 0; i <= 2; i++)
	{
		printf("array2[%d]=%d ", i, array2[i] += 5);
	}
}