#include <stdio.h>
 
// Khai b�o s? d?ng thu vi?n float.h
#include <float.h>
 
 
int main() {
 
    // H�m sizeof(type)
    // tr? v? s? byte c?n thi?t d? luu tr? ki?u d? li?u n�y.
    printf("Storage size for float : %d \n", sizeof(float));
 
    // FLT_MIN l� h?ng s?, gi� tr? nh? nh?t c?a ki?u float.
    // H?ng s? n�y du?c d?nh nghia trong thu vi?n float.h
    printf("Minimum float positive value: %E\n", FLT_MIN);
 
    // FLT_MAX l� h?ng s?, gi� tr? l?n nh?t c?a ki?u d? li?u float.
    // H?ng s? n�y du?c d?nh nghia trong thu vi?n float.h
    printf("Maximum float positive value: %E\n", FLT_MAX);
 
    // FLT_DIG l� h?ng s?, s? v? tr� t?i da c?a ph?n th?p ph�n.
    // H?ng s? n�y du?c d?nh nghia trong thu vi?n float.h
    printf("Precision value: %d\n", FLT_DIG);
 
    return 0;
}
