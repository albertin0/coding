#include <stdio.h>

typedef struct Student
{
	int roll;
	char fname[20];
	char lname[20];
	char sem[10];
	//char join_date[20];
	//char last_edu[20];
}Student;

int main()
{

	int roll;
	FILE *fp,*ft;
	char another,choice;
	Student stu;
	char fname[20];
	char lname[20];
	long int recsize;

	fp=fopen("stu.DAT","rb+");
	if(fp==NULL)
	{
		fp=fopen( "stu.DAT","wb+");
		if(fp==NULL)
		{
			printf("Can't Open File");
			return 0;
		}
	}
	recsize=sizeof(stu);
	while(1)
	{
		printf("\n1.Add Records\n2.Delete Records\n3.Modify Records\n4.List Records\n5.Exit\n");
		printf("Enter your choice :\n");
		fflush(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case'1':
				fseek(fp,0,SEEK_END);
				another='Y';
				while(another=='Y'|| another=='y')
				{
					printf("\nEnter the roll, first name,last name, sem : \n");
					scanf("%d %s %s %s",&stu.roll,stu.fname, stu.lname, stu.sem);
					//printf("\nEnter joining date,last education:\n");
					//scanf("%s %s",stu.join_date,stu.last_edu);
					fwrite(&stu,recsize,1,fp);
					printf("\n Add another Record (Y/N): ");
					fflush(stdin);
					another=getchar();
				}

				break;
			case '2':
				another='Y';
				while(another=='Y'|| another=='y')
				{
					printf("\n Enter the roll of the stuloyee to be deleted : \n");
					scanf("%d",&roll);
					ft=fopen("Temp.DAT","wb");
					rewind(fp);
					while(fread(&stu,recsize,1,fp)==1)
					{
						if(strcmp(stu.roll,roll)!=0)
						fwrite(&stu,recsize,1,ft);
					}
					fclose(fp);
					fclose(ft);
					remove("stu.DAT");
					rename("Temp.DAT","stu.DAT");
					fp=fopen("stu.DAT","rb+");
					printf("\n Delete another Record(Y/N): ");
					fflush(stdin);
					another=getchar();
				}

				break;
			 case '3':
				another='Y';
				while(another=='Y'|| another=='y')
				{
					printf("\n Enter roll of stuloyee to modify : \n");
					scanf("%s",&roll);
					rewind(fp);
					while(fread(&stu,recsize,1,fp)==1)
					{
						if(strcmp(stu.roll,roll)==0)
						{
							printf("\nEnter the roll, first name,last name, sem : \n");
							scanf("%d %s %s %d",&stu.roll,stu.fname, stu.lname, stu.sem);
							//printf("\nEnter joining date,last education :\n");
							//scanf("%s %s %f",stu.join_date,stu.last_edu);
							fseek(fp,-recsize,SEEK_CUR);
							fwrite(&stu,recsize,1,fp);
							break;
						 }
					 }
					 printf("Want to Modify another record(Y/N): ");
					 fflush(stdin);
					 another=getchar();
				 }

				 break;

			  case '4':
			  		printf("\n\n");
			       rewind(fp);
			       char roll1[10] ="Rollno" , fname1[10] = "FirstName" , lname1[10] = "LastName" , sem1[10] = "Semester";
			       printf("%10s %10s %10s %10s \n",roll1,fname1,lname1,sem1);
			       while(fread(&stu,recsize,1,fp)==1)
			       printf("%10d %10s %10s %10s \n",stu.roll,stu.fname,stu.lname,stu.sem);
			       break;

			 case '5':
				fclose(fp);
				return 0;

		}
	}
return 0;
 }