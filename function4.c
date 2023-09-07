#include <stdio.h>
#include <math.h>

int sum(int n[], int size); // Added 'size' parameter
int main()
{
    int n[5], s = 0;
    printf("Enter how many numbers to add: \n");
    for (int i = 0; i < sizeof(n) / sizeof(n[0]); i++)
        scanf("%d", &n[i]);
    s = sum(n, sizeof(n) / sizeof(n[0])); // Pass the size of the array
    printf("\nThe sum of numbers is %d", s);
    return 0;
}

int sum(int n[], int size) // Added 'size' parameter
{
    int s = 0;
    for (int i = 0; i < size; i++) // Removed inner 'int i'
        s += n[i];
    return s;
}
