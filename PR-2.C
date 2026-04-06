#include <stdio.h>

int main()
{
    int marks;
    char grade;
    printf("Enter your marks out of 100: ");
    scanf("%d", &marks);
    grade = (marks >= 85) ? 'A' :
            (marks >= 70) ? 'B' :
            (marks >= 60) ? 'C' :
            (marks >= 50) ? 'D' :'failed'; 
    printf("Your grade is: %c\n", grade);
    switch(grade){
    	case 'A':("excellent work!");
    	break;
    	case 'B':("well done!");
    	break;
    	case 'C':("good job");
    	break;
    	case 'D':("you passed!!!");
    	break;
    	case 'F':("sorry, you failed!!!!");
    	if(grade='A'){
    		printf("congulationd:%c",grade);{
			}else(grade='F'){ 
			printf("bettr luck next time %c\n");
			}
		}
    		
    	
	}
}