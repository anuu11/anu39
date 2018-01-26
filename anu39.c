#include <stdio.h>
int main() {
	int  i,a[200],max;
	printf("enter numbers");
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<10;i++)
{
	if(a[i]>max)
	max=a[i];

}
printf("%d",max);
}
