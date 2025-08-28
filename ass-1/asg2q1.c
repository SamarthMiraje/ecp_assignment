#include<stdio.h>

int main()
{
		int n1,n2,res;
		
		typedef enum
		{
      			ADD = 1,
			SUB,
			MUL,
			DIV,
			EXIT
		}OPERATION;
		OPERATION Choice;
		
		do 
		{
		printf("\n............Calculator Menu.........\n");
		printf("1.Addition \n");
		printf("2.Substraction \n");
		printf("3.Multiplication \n");
		printf("4.Division \n");
		printf("5.Exit \n");
		printf("Enter your choice:");
		scanf("%d",(int *)&Choice);

		switch (Choice)
		{
		case ADD:	
			printf("Enter two numbers:");
			scanf("%d%d",&n1,&n2);
			res = n1 + n2;
			printf("Result = %d",res);
			break;
		
		case SUB: 
			printf("Enter two no:");
			scanf("%d%d",&n1,&n2);
			res = n1 - n2;
			printf("Result = %d",res);
			break;
		
		case MUL:
			printf("Enter two no:");
			scanf("%d%d",&n1,&n2);
			res = n1 * n2;
			printf("Result = %d",res);
			break;

		case DIV:
			printf("Enter two no:");
			scanf("%d%d",&n1,&n2);
			if (n2 != 0)
          		  {
               			 res = n1 / n2;
               			 printf("Result = %d\n", res);
          		  }
           		 else
           		 {
               			 printf("Error: Division by zero not allowed!\n");
           		 }
			break;
	
		case EXIT:
			printf("Existing program.....");
			break;
			
		default:	
			printf("Default value:");
		 }
		} while (Choice != EXIT); 
    return 0;
}
		
		
