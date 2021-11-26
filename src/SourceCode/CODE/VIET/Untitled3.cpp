#include 
#include 
int laSoNguyenTo(int s){ //ham ktra so nguyen to
     int dem = 0, i, m = (int)sqrt(s);
     for (i=2; i<=m; i++){
          if (s % i == 0){
              return 0;
          }
     }
     return 1;
}
int main(){
     int n, k, tong, dem, s;
     do{
          printf("Nhap so tu nhien n : ");
          scanf("%d", &n);
     }while (n < 11);
     printf("Day %d so nt: ", n);
     tong = 0; dem = 0;
     for (k = 2; dem < n; k++){
          if (laSoNguyenTo(k) != 0){
              printf("%d ",k);
              dem++;
              tong = tong + k;
          }
     }
     printf("\nTong la %d", tong);  
}
