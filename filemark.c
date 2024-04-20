#include <stdio.h>

int main()
{
    int marks[5], read[5];
    FILE *fp;
    fp = fopen("marks.txt", "w+");

    printf("Enter 5 marks:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        fprintf(fp, "%d\n", marks[i]);
    }
    // fwrite(&marks,sizeof(marks),1,fp);
    rewind(fp);
    // fread(&read,sizeof(read),1,fp);
    printf("marks are:\t");
    for (int i = 0; i < 5; i++)
    {
        fscanf(fp, "%d\n", &read[i]);
        printf("%d\t", read[i]);
    }
}