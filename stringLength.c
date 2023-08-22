#include <stdio.h>
#include <string.h>

int main()
{
    char lastName[] = {'H', 'A', 'Q'};
    char firstName[] = "AMAMUL";

    printf("%d\n %d\n", sizeof(firstName), strlen(firstName));

    for (int i = 0; i < strlen(firstName); ++i)
    {
        printf("%c", firstName[i]);
    }

    return 0;
}
