#include <stdio.h>

int main() { 
    float n=100000.00,wd;
    int pw=4478,in1,in1a,pw1,pw2;
    int confirm;
    
   
    printf("\n*   WELCOME TO STAR BANK ATM   *\n\n");
    retry:
    label:              //goto is used in pin change process
    printf("\nPlease enter your PIN:\n");
    scanf("%d",&in1a);
   
    if(in1a==pw)
 {       
    printf("1) Press 1 for BALANCE ENQUIRY \n2) Press 2 for CASH WITHDRAWL \n3) Press 3 for PIN CHANGE\n4)Cancel\n");
    scanf("%d",&in1);
    
        if(in1>=1&&in1<=4){
         if(in1==1){ //check balance
          printf("Total Available Balance: %0.2f",n); 
          
        }
         if(in1==2){ //cassh withdrawl process
             printf("Enter Amount for WITHDRAWL: ");
             scanf("%f",&wd);
             wd<=n?printf("Please collect your CASH\nRemaining Balance:%0.2f rs",n-wd):printf("*NOT ENOUGH BALANCE");
             
         }
         if(in1==3){ //pin changing process
             printf("enter new PIN: ");
             scanf("%d",&pw1);
             printf("Re-enter new PIN: ");
             scanf("%d",&pw2);
             if(pw1==pw2){
                 printf("press 1 to confirm pin:");
             scanf("%d",&confirm);
                if(confirm==1){
                 printf("PIN changed Successfully\n");
                 pw=pw1;
                 goto label;
             }
                else {
                 printf("not valid");
             } }
             else{
             printf("*PIN not matched");}
             pw=pw2;
         }
         if(in1==4){
           goto label2;  
         }
    }
        else{
        printf("*PLEASE ENTER VALID NUMBER*");
    }
}
else { //else of if(in1a==pw).prints if password gets wrong
    printf("*Entered pin is not correct\n please try again\n \n");
    goto retry;
} label2:
printf("\nThank You!\nVisit Again:)");
    return 0;
}

