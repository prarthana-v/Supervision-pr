#include<stdio.h>
struct mark_sheet{
	
	int roll_no;
	char name[100];
	int physics;
	int maths;
	int chemistry;
		
};
main(){
	
	struct mark_sheet s[5];
	int i,total[5];
	float percent[5];
	
	for(i=1;i<=5;i++){
		printf("\nEnter details of student %d\n",i);
		
		printf("Roll no : ");
		scanf("%d",&s[i].roll_no);
		printf("Name : ");
		scanf("%s",&s[i].name);
		printf("Chemistry : ");
		scanf("%d",&s[i].chemistry);
		printf("Physics : ");
		scanf("%d",&s[i].physics);
		printf("Maths : ");
		scanf("%d",&s[i].maths);
		total[i]=s[i].physics+s[i].maths+s[i].chemistry;
		percent[i]=total[i]*100/300;
	}
	for(i=1;i<=5;i++){
		printf("\n%s(%d)\n",s[i].name,s[i].roll_no);
		printf("chemistry => %d\n",s[i].chemistry);
		printf("Physics => %d\n",s[i].physics);
		printf("Maths => %d\n",s[i].maths);
		printf("Total => %d\n",total[i]);
		printf("Percentage => %.2f\n",percent[i]);		
	}
}