
#include <stdio.h>
#include <math.h>
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

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int CountPrime(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
        {
            count++;
        }
    }
    return count;
}

void DisplayPrime(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
        {
            printf("%d\t", arr[i]);
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
    inputArray(arr, n);

    int countPrime = CountPrime(arr, n);
    if (countPrime > 0)
    {
        DisplayPrime(arr, n);
    }

    printf("\nNumber of prime number in array is %d", countPrime);
}