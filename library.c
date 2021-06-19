#include<stdio.h>
#include<conio.h>
#include<string.h>
void add();
void display();
void booka();
void countq();
int count=0,i=0;
struct lab
{
	int an,cost;
	char title[20],author[30];
}b[100];
void main()
{
	int ch;
	clrscr();
	while(1)
	{
		printf("1.Add book Info:\n");
		printf("2.Display Book information:\n");
		printf("3.Book author:\n");
		printf("4.count book\n");
		printf("5.exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				add();
				getch();
				break;
			case 2:
				display();
				getch();
				break;
			case 3:
				booka();
				getch();
				break;
			case 4:
				countq();
				getch();
				break;
			case 5:
				exit(0);
		}
	}
}
void add()
{
	printf("Enter Book details:");
	printf("Ascession Number:\n");
	scanf("%d",&b[i].an);
	fflush(stdin);
	printf("Enter Title of book:\n");
	scanf("%s",&b[i].title);
	fflush(stdin);
	printf("Author Name:");
	scanf("%s",&b[i].author);
	fflush(stdin);
	printf("Enter Cost of book:\n");
	scanf("%d",&b[i].cost);
	count++;
}
//***************************
void display()
{
	int i;
	printf("\n detail of %d books in library\n",count);
	for(i=0;i<count;i++)
	{
		printf("Ascession No   Author    title  cost \n");
		printf("   %d            %s       %s     %d  \n",b[i].an,b[i].author,b[i].title,b[i].cost);
	}
}
//*********
void booka()
{
	int i,cnt=0;
	char name[20];
	printf("Enter name of author:\n");
	scanf("%s",&name);
	for(i=0;i<count;i++)
	{
		if(strcmp(name,b[i].author)==0)
		{
				cnt++;
				printf("Ascession No   Author    title  cost \n");
				printf("   %d            %s       %s     %d  \n",b[i].an,b[i].author,b[i].title,b[i].cost);

		}
	}
	if(cnt==0)
	{
		printf("\n no such books\n");
	}
}
//*******
void countq()
{
	printf("total no of books in library %d:",count);
}
