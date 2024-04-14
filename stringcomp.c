#include <stdio.h>
#include <string.h>
int main()
{   int i,j;
    char str[3][24]={"Amamul","Haq","Ansarul"};
    char temp[24];
   for(i=0;i<3;i++)
   {
    for(j=i+1;j<3;j++)
    {
        if(strcmp(str[i],str[j])>0)
        {
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
        }
    }
   }
   for(i=0;i<3;i++)
   {
    printf("%s\n",str[i]);
   }

    return 0;
}