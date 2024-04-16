#include<stdio.h>
struct emp{
	char name[24];
	int salary;
}s[3],temp;
int main(){
	FILE *fp;
	int i,j,k;
	fp=fopen("empl.txt","w+");
	for(i=0;i<2;i++)
	{
	printf("Enter name and salary %d: ",i+1);
	scanf("%s%d",s[i].name,&s[i].salary);
	}
	fwrite(&s,sizeof(s),2,fp);
	rewind(fp);
	fread(&s,sizeof(s),2,fp);
	i=0;
	while(i<2)
	{
		for(j=0;j<2;j++)
		{
			for(k=j+1;k<2;k++)
			{
				if(s[j].salary>s[k].salary)
				{
					temp=s[j];
					s[j]=s[k];
					s[k]=temp;
				}
			}
		}
		printf("%s\t%d\n",s[i].name,s[i].salary);
		i++;
	}
	fclose(fp);
	return 0;
}