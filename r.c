#include <stdio.h>

int main(void) {
	int a[100],n,i,k,sum=0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<k;i++)
		{
			sum+=a[i];
		}
	
		
		printf("%d",sum);
	return 0;
}
