#include <stdio.h>
#include <string.h>

int main()
{
    char lN[] = {'H', 'A', 'Q'};
    char fN[] = "AMAMUL";

    printf("%d\t %d\n", sizeof(fN), strlen(lN));

    for (int i = 0; i < strlen(fN); ++i)
    {
        printf("%c", fN[i]);
    }

    return 0;
}
