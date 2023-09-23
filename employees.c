#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Include this for dynamic memory allocation

struct emp {
    char n[24];
    int s;
};

// Change the function to accept an array of structures and return a pointer to struct emp
struct emp *update(struct emp e[])
{
    struct emp *U = malloc(sizeof(struct emp) * 10); // Dynamically allocate memory for updated employees
    if (U == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    int j = 0;
    for (int i = 0; i < 10; i++)
    {
        if (e[i].s > 10000)
        {
            U[j] = e[i];
            j++;
        }
    }
    return U;
}

int main() // Change to int main() and return 0 at the end
{
    struct emp e[10], *u;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter employee name and salary %d: ", i + 1);
        scanf("%s %d", e[i].n, &e[i].s);
    }

    u = update(e);

    printf("The updated employees are:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%s\t%d\n", u[i].n, u[i].s);
    }

    // Don't forget to free the dynamically allocated memory
    free(u);

    return 0;
}
