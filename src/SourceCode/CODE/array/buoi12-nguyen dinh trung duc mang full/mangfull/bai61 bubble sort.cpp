/*bai 61 sap xep bubble sort*/

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		int ok=0;
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j+1];
				a[j+1]=a[j];
				a[j]=tmp;
				ok=1;
			}	
		}
		if(ok==1){
			for(int j=0;j<n;j++){
				printf("%d ",a[j]);
			}
		}
		if(ok==1) printf("\n");
	}
}
//
//#include<stdio.h>
//void in( int a[],int n)
//{
//	for (int i=0;i<n;i++)
//	{
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//}
//void bubble(int a[],int n)
//{
//	int ok;
//	for (int i=0;i<n-1;i++)
//	{
//		ok=0;
//		for (int j=0;j<n-i-1;j++)
//		{
//			if (a[j]>a[j+1]){
//				int tmp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=tmp;
//				ok=1;
//			}
//		}
//		if (ok==1)
//		{
//			in (a,n);
//		}
//	}
//}
//int main ()
//{
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	for (int i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	bubble(a,n);
//	return 0;
//}
