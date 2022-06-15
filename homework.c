#include<stdio.h>
#include<string.h>

int n;

struct student
{
    char ten[50];
    int tuoi;
    float toan;
    float anh;
    float it;
};

void studentInput(struct student *d)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("\nName of student: ");
		fflush(stdin);
		gets((d+i)->ten);
		printf("Age of %s: ",(d+i)->ten);
	    scanf(" %d",&(d+i)->tuoi);
		printf("Score Math of %s: ",(d+i)->ten);
		scanf(" %f",&(d+i)->toan);
		printf("Score English of %s: ",(d+i)->ten);
		scanf(" %f",&(d+i)->anh);
		printf("Score IT of %s: ",(d+i)->ten);
		scanf(" %f",&(d+i)->it);
	}
}

void studentOutput(struct student *d)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("\nName of student: ");
		puts((d+i)->ten);
		printf("Score Math of %s: %.2f \n",(d+i)->ten,(d+i)->toan);
		printf("Score English of %s:  %.2f \n",(d+i)->ten,(d+i)->anh);
		printf("Score IT of %s:  %.2f \n",(d+i)->ten,(d+i)->it);
	}
}

void toanMax(struct student *d)
{
	int i, l=0;
	float max=(d)->toan;
	for(i=1; i<n; i++)
	{
		if(max < ((d+i)->toan)) 
		{
			max = (d+i)->toan;
			l=i;
		}
	}
            printf("hoc sinh co diem toan cao nhat la: \n");
	printf(" Name: %s, Math: %f, English: %f, IT:”%f",(d+l)->ten,(d+l)->toan,(d+l)->anh,(d+l)->it);
}

void main()
{
	printf("Enter the number of students: ");
	scanf("%d",&n);
    struct student s[n];
    studentInput(&s[0]);
    printf("------------------------------\n");
    studentOutput(&s[0]);
    printf("------------------------------\n");
    toanMax(&s[0]);
}


