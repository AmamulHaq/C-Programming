#include<stdio.h>
#include<conio.h>
#include<string.h>
struct book{
	int price;
	char name[60];
	char auth[60];
};
int main(){
	int i;
	struct book b[2],c[2],d[2];
	for(i=0; i<2; i++){
		scanf("%s %s %d",b[i].name,b[i].auth,&b[i].price);
	}
	FILE *fp;
	fp=fopen("book.dat","w+b");
	fwrite(&b,sizeof(b),2,fp);
	rewind(fp);
	
    fread(&c,sizeof(c),2,fp);

    for(i=0;i<2;i++){
    	printf("\nName of book:: %s\n",c[i].name);
		printf("\nName of author::%s\n",c[i].auth);
		printf("\nprice::%d\n",c[i].price);
	}
	int n=0;
	for(i=0;i<2;i++){
		if(strcmp(c[i].auth,"land")==0){
		//	strcpy(d[n].auth,c[i].auth);
		d[n]=c[i];
			n=n+1;
		}
		
	}
		FILE *p;
		p=fopen("land.dat","w+b");
		fwrite(&d,sizeof(d),n,p);
		rewind(p);
		fread(&d,sizeof(d),n,p);
		for(i=0;i<n;i++){    	
		printf("\nName of book:: %s\n",d[i].name);
		printf("\nName of author::%s\n",d[i].auth);
		printf("\nprice::%d\n",d[i].price);}
	fclose(p);
fclose(fp);
return 0;	
}