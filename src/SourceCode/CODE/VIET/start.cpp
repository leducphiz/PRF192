#include <stdio.h>
 
// Khai báo s? d?ng thu vi?n float.h
#include <float.h>
 
 
int main() {
 
    // Hàm sizeof(type)
    // tr? v? s? byte c?n thi?t d? luu tr? ki?u d? li?u này.
    printf("Storage size for float : %d \n", sizeof(float));
 
    // FLT_MIN là h?ng s?, giá tr? nh? nh?t c?a ki?u float.
    // H?ng s? này du?c d?nh nghia trong thu vi?n float.h
    printf("Minimum float positive value: %E\n", FLT_MIN);
 
    // FLT_MAX là h?ng s?, giá tr? l?n nh?t c?a ki?u d? li?u float.
    // H?ng s? này du?c d?nh nghia trong thu vi?n float.h
    printf("Maximum float positive value: %E\n", FLT_MAX);
 
    // FLT_DIG là h?ng s?, s? v? trí t?i da c?a ph?n th?p phân.
    // H?ng s? này du?c d?nh nghia trong thu vi?n float.h
    printf("Precision value: %d\n", FLT_DIG);
 
    return 0;
}
