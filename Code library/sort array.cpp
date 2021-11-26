#include<stdio.h>
#include<conio.h>
#include<math.h>

void swap(int *p,int *q)
{
    int tmp;
    tmp = *p; 
    *p=*q;    
    *q=tmp;   
}

void inputArray(int a[],int n)
 { int i;
   for(i = 0; i<n ; i++)
    {
    	printf("a[%d] = ",i);
    	scanf("%d",&a[i]);
    }
  
 }
 
void outputArray(int a[],int n)
 { int i;
   for(i = 0; i<n ; i++)
    {
    	printf("%d\t",a[i]);
    }
 }
    
void insertSort(int a[], int n)
  { int i, j, x;
    for(i = 1; i<n; i++)
       { x = a[i];
         j = i;
         while(x<a[j-1])
            {
			   a[j] = a[j-1]; 
			   j--;
			}
         a[j] = x;
       }
  }
  
void bubbleSort(int a[], int n)
  { int i, t, k, doicho;
    k = 1;
    while(1)
       { doicho=0;
          for(i=0; i<n-k; i++)
              if(a[i+1]<a[i]) 
                { swap(&a[i], &a[i+1]);
                  doicho = 1;
                }
          if(!doicho) break;
          k++;  
       }
  }
int main(){
   int n;
   printf("Enter n : ");
   scanf("%d",&n);
   int a[n];
   inputArray(a,n);
   insertSort(a,n);
   outputArray(a,n);
   printf("\n");
   inputArray(a,n);
   bubbleSort(a,n);
   outputArray(a,n);
   return 0;
}
