#include <stdio.h>
#include<math.h>
#include<stdbool.h>
void input(int a[],int n)
{ 	int i;
   	for(i = 0; i<n ; i++)
    {
    	printf("a[%d] = ",i);
    	scanf("%d",&a[i]);
    }
  
}
void output(int a[],int n)
{
	int i;
	for(i = 0; i<n ; i++)
    {
    	printf("%d\t",a[i]);
    }
}
//int Check(int a[], int n) {
//    int i;
//    for (i = 0; i < n; i++)
//    {
//    	if (sdx(a[i])==1)
//    	{
//            printf("%d\t", a[i]);
//        }
//    }
//}
//void swap(int *p,int *q)
//{
//    int tmp;
//    tmp = *p; 
//    *p=*q;    
//    *q=tmp;   
//}   
//void insertSort(int a[], int n)
//  { int i, j, x;
//    for(i = 1; i<n; i++)
//       { x = a[i];
//         j = i;
//         while(x<a[j-1])
//            {
//			   a[j] = a[j-1]; 
//			   j--;
//			}
//         a[j] = x;
//       }
//  } 
//void sort(int a[], int n)
//{ 
//	int i, j, k, max,temp;
//    for(i=0; i<n-1; i++)
//    {
//	   	max = a[i]; k = i;
//        for(j = i+1; j<n; j++)
//        if(a[j] > max) {max= a[j]; k = j;}
//        if(k != i)
//         	{
//         		temp = a[j];
//				a[j] = a[j+1];
//				a[j+1] = temp;
//		 	}
//    }
//}
//void bubbleSort(int a[], int n)
//  { int i, t, k, doicho;
//    k = 1;
//    while(1)
//       { doicho=0;
//          for(i=0; i<n-k; i++)
//              if(a[i+1]<a[i]) 
//                { swap(&a[i], &a[i+1]);
//                  doicho = 1;
//                }
//          if(!doicho) break;
//          k++;  
//       }
//}
int main()
{
	int a[100];
	int n;
	printf("n="); scanf("%d",&n);
	input(a,n);
	printf("Mang A la:");
	output(a,n);
//	printf ("\nAfter Sort:");
//	bubbleSort(a,n);
//	output(a,n);
}
