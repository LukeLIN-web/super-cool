#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAXNUM 10000 
	struct node{
		struct stud_node *next ;
		char Firstname[16]  ;
		char Lastname[16] ;
		char Roomname[16];
	} ;
 	struct SAVE{                                       //save struct array for save corrsponding information
		char* Firstname  ;
		char* Lastname ;
		char* Roomname;
	} ;
int main() {
	int  i,j,num1=0,num2=0,num=0;                  // num1 is all number of people ,num is number of people be searched 
	struct SAVE ptr[MAXNUM];                      // for store right data
	scanf("%d",&num1) ;                           // the total number of professors
	struct node  *head ,*tail,*p; 
	head = tail = NULL    ;
	int size = sizeof(struct node) ;
	for(i=0;i<num1;i++){ 
		p = (struct node*)malloc(size);
		scanf("%s",p->Firstname);
		scanf("%s",p->Lastname);
		scanf("%s",p->Roomname) ;
		p->next =NULL  ;
	if(head==NULL)
		head = p  ;
	else    
		tail->next = p ;	
	tail = p ;
	tail->next = NULL ;
	}
	
    scanf("%d",&num2)  ;                 // num2 is query number 
	char string[1001][16] ;              //string save query input

	for(i=0;i<num2;i++){                 
		scanf("%s",string[i]);                     
	}
	
	for(i=0;i<num2;i++){                       
		p = head ;												//begin loop through
		while(p!=NULL){
			if(strcmp(string[i],p->Firstname)==0){
				ptr[num].Firstname = p->Firstname ;               //store corrsponding faculty in ptr[num]
				ptr[num].Lastname =  p->Lastname  ;
				ptr[num].Roomname  = p->Roomname  ;
				num++;
			}
			else if(strcmp(string[i],p->Lastname)==0){
				ptr[num].Firstname =p->Firstname ;
				ptr[num].Lastname = p->Lastname  ;
				ptr[num].Roomname =p->Roomname ;
				num++;
			}
			p = p->next  ;
		}
		printf("%d",num);								// first output  number of corrspoding faculty 
		for(j=0;j<num;j++){ 							//then output the information 
				printf("\n%s ",ptr[j].Lastname);
				printf("%s ",ptr[j].Firstname );
				printf("%s",ptr[j].Roomname);	
		}
		num =  0 ;                                 //finish this time loop through
		printf("\n");
	}
	if(num2==0) putchar('0') ;
	return 0;
}




