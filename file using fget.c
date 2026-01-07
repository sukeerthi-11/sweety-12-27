#include<stdio.h>
int main()
{
	FILE *fptr=fopen("display.txt","r");
	if(fptr == NULL)
	{
		printf("file not found\n");
	}
	else{
		int ch=0;
		while((ch= fgetc(fptr)) != EOF)
		{
			printf("%c",ch);
		}
	}
	fclose(fptr);
	return 0;
}
