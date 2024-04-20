#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("text.txt",("w+"));
    if(fp!=NULL){printf("opened sucessfully\n");
    }
    char s[24],st[24];
    gets(s);
    fputs(s,fp);
    rewind(fp);
    fgets(st,24,fp);
    puts(st);
    return 0;
}
