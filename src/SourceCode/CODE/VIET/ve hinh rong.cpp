#include<stdio.h>
int main()
{
    int n,m,i,k,j;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("Nhap m: ");
    scanf("%d",&m);
    for(;n<=0 || m <= 0;)
    {
        if(n <= 0){
            printf("Phai nhap n > 0 \nNhap lai n: ");
            scanf("%d",&n);
        }
        if(m <= 0){
            printf("Phai nhap m > 0 \nNhap lai m: ");
            scanf("%d",&m);
        }
    }    

    for(int i = 1; i <= n; i++)    {
        for(int k = 1 ; k <= m; k++){
            if( k == m || i ==n || i ==1 || k ==1 ){
                printf(" * ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }

}
 
    
