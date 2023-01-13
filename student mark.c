/*Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure 
	named Marks having elements roll no, name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.*/
	
#include<stdio.h>
struct mark
{
	int rollno;
	char name;
	int chem_marks;
	int maths_marks;
	int phy_mrks;
};
main()
{
	struct mark i;
	i.rollno;
	i.name;
	i.chem_marks;
	i.maths_marks;
	i.phy_mrks;
	float per;
	int sum;
	int r;
	for(r=1;r<=5;r++)
	{
	
	printf("enter rollnumber:");
	scanf("%d",&i.rollno);
	printf("enter name:");
	scanf("%s",&i.name);
	printf("enter chem_marks:");
	scanf("%d",&i.chem_marks);
	printf("enter maths_marks:");
	scanf("%d",&i.maths_marks);
	printf("enter phy_mrks:");
	scanf("%d",&i.phy_mrks);
	
	sum=i.chem_marks+i.maths_marks+i.phy_mrks;
	per=sum*100/300;
	printf("sum=%d\n",sum);
	printf("per=%f\n\n",per);
}
}
  
  
