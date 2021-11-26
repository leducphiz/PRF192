#include<stdio.h>
#include<math.h>
long gt(int n)
{
                if(n < 2){
        printf("\n%d khong phai so nguyen to", n);
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++)
	{
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("\n%d la so nguyen to", n);
    }else{
        printf("\n%d khong phai so nguyen to", n);
    }
                
                
} 
int main ()
{ int n1;
printf("nhap so nguyen n1:");scanf("%d",&n1);
long result=gt(n1);
 
}
   
