#include<stdio.h>

int search_id(int s_id)
{
	int flag=0;
	FILE *fptr;
	struct addBook add;
    fptr = fopen("LibraryDB.txt","r");
    while(fscanf(fptr,"%d%s%s%s%d%d%d%d", &add.id, &add.stname, &add.name, &add.author, &add.quantity, &add.price, &add.count, &add.rackno)!=-1)
    {
    	if(add.id==s_id)
    	{
    		flag=1;
    		break;
		}
	}
	if(flag)
	{
		printf("%d \t %s \t %s \t %s \t %d \t %d \t %d \t %d\n", add.id, add.stname, add.name, add.author, add.quantity, add.price, add.count, add.rackno);
		return 1;
	}
	else
	{
		return 0;
	}
	fclose(fptr);
}
