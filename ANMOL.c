#include<stdio.h>
int main()
{
	FILE *ptr=fopen("ANMOL.txt","w");
	int i=1;
	char ch=fgetc(ptr);
	while((ch=fgetc(ptr))!=EOF);
	{
		i=i*(i+1);
	 } 
	 fprintf(ptr,"%d",i);
	fclose(ptr);
	return 0;
}
