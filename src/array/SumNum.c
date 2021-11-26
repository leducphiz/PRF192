
#include <stdio.h>
#define MAX 100

//input
void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" INPUT arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

//dislay arr
void dislayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\t %d", arr[i]);
    }
}

//sum odd
int sumOdd(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}

//sum even
int sumEven(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            continue;
        }
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[MAX];

    int n;

    //check input
    do
    {
        printf("input n: ");
        scanf("%d", &n);
    } while (n <= 0 || n > MAX);

    //input
    inputArray(arr, n);

    //output
    dislayArray(arr, n);
    //sum odd number
    printf("\nSum of all odd number in array is %d", sumOdd(arr, n));
    //sum even number
    printf("\nSum of all even number in array is %d", sumEven(arr, n));
}