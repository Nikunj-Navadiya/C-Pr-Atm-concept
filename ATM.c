#include<stdio.h>

void main(){
	int ch, pi,pin=1234, amt=0, depo, with;
	printf("Enter Your Secret PIN Number :- ");
	scanf("%d",&pi);
	
	if(pi==pin){
		do{
			printf("*****Welcome to ATM Service*****\n\n");
			printf("Press 1. Deposit\n");
			printf("Press 2. Withdraw\n");
			printf("Press 0. Exit\n\n");
			scanf("%d",&ch);
			switch(ch){
				case 1 : 
					printf("Enter Deposit :- ");
					scanf("%d",&depo);
					amt=amt+depo;
					printf("Total Balance :- %d\n\n",amt);
				break;
				case 2 :
					printf("Enter Withdraw :- ");
					scanf("%d",&with);
					if(with>amt){
						printf("Insufficent Balance \n\n");
					}else{
						amt=amt-with;
						printf("Total Balanace :- %d\n\n",amt);
						printf("Please Collect Cash \n\n");
					}
					break;
			}
			
		}while(ch!=0);
	}else{
		printf("Invalid PIN");
	}
	printf("Thank You Visit Again");
}
