
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

//max number
int maxNum(int arr[], int n)
{
    int max = arr[0];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
//max position

void maxPosition(int arr[], int n)
{
    int maxValue = maxNum(arr, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == maxValue)
        {
            printf("\nPosition %5d", i + 1);
        }
    }
}
//min number
int minNum(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

void minPosition(int arr[], int n)
{
    int minValue = minNum(arr, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == minValue)
        {
            printf("\nPosition %5d", i + 1);
        }
    }
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

    //max
    printf("\nMax number is %d", maxNum(arr, n));
    maxPosition(arr, n);
    //min
    printf("\nMin number is %d", minNum(arr, n));
    minPosition(arr, n);
}