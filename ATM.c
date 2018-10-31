

#include <stdio.h>

int main()
{                  /* The following code for ATM*/

/*1.first display the option of atm
  2.after that get the option number from user
  3.And we can write the switch statement of four cases
  4.After that in first switch cases we may write the sum cases in that
  5.In sub cases we can use again switch statement*/
  
    int option;
                                                                        //To disply the option
    printf(" 1.How to use the YASH ATM\n");                                                                    
     printf("2. BANKING\t");               printf("3. PIN GENERATE\t");
   printf("\n4. PIN CHANGE\t");            printf("5. TRANSFER\t");
  printf("\n**********************************************************");
     printf("\nEnter the option number: ");
     scanf("%d",&option);
     
     int option2,pin,pin2,remainder2,remainder;                                    //Variable declaration
     long long int count=0;
     long int available=10000,available1;
     
     //First switch statement
     
     switch(option)   
     {
         case 1:                                                //First switch case 1
         printf("\nConditions of the YASH ATM is as follows:\n");
         printf("\n1. First of all enter the option number\n");
         printf("2. secrete  pin number is must have 4 digits and\n   it is in the form of ascending order\n");
         printf("3. Account number is must have greater than 15 digits\n");
         printf("4. ATM number must have 16 digits\n");
         printf("5.In your account fixed deposit amount is: 10000\n");
         
         
         break;
         
         case 2:                                             //First switch case 2
                  //Banking
                  
         //To disply the banking options
         
          printf("1. WITHDRAWL\t");              printf("2. BALANCE ENQUIRY\t");
        printf("\n3. MINISTATEMENT\t");          printf("4. CREDIT\t");
 printf("\n*********************************************************************");
          printf("\nEnter the option number: ");
          scanf("%d",&option2);
          
           long int amount,Amount1,Amount2,Amount3;                      //declaration
          switch(option2)                  //second switch 
          {
              case 1:                                                            //Second switch case1
                                 //with drawl 
                                 
        /*1.Get the pin code from user
          2.After that get the amount from user in below 40000
          3.Next,if amount is less than 40000, then give the money to user
          4.Else, warn the user enter the amount below 40000*/                                 
                                 
              printf("Enter your pin  number: ");
              scanf("%d",&pin);
              pin2=pin;
              /*To check the pin number it is in asending order or not
              To seperate the pin number in one digit and comparison of that
              number into other number in given pin number */
              //By using while loop
            
              while(pin!=0)
              {
                remainder=pin%10;
                pin=pin/10;
                remainder2=pin%10;
               if(remainder>remainder2){
                   count++;
               }
              }
              if(count==4)                                       //First if
              {
                  printf("Enter the amount: ");
                  scanf("%ld",&amount);
                  Amount1=amount;
                  if(amount>40000)                                 //Second if
                  {
                    printf("\n\nSorry! plese enter the amount below 40000 ");
                    printf("\nthank you for using YASH ATM");
                  }else{                                        //Second if-else
                     available1=available;
                     available=available-amount;
                          
                       if(available>=0){                          //Third if 
                          printf("\nPlease collect your cash");
                          printf("\nAvailable balance is : %ld",available);
                          printf("\nThank you for using YASH ATM..\nVisit Again");
                       }else{                                     //Third if-else
                       
                           printf("Sorry!\nyou don't have sufficient money in your account\n");
                           printf("available Balance is: %ld",available1);
                           printf("\nVisit again");
                       }
                    }
                  
              }else{                                            //First if-else
                  printf("Please enter the correct pin number\n");
                  printf("Thank you for using YASH ATM\n");
                  printf("Visit again");
              }
              break;
               case 2:                                              //Second switch case2
                                  //Balance enquiry 
                                  
            /*1.Get the pin code from user
              2.After that,  if the user enter the valid pin code then show bank nalance from their account
              3.Else,warn the user enter the valid pin code*/ 
              
              printf("\nEnter your pin  number: ");
              scanf("%d",&pin);
              pin2=pin;
              /*To check the pin number it is in asending order or not
              To seperate the pin number in one digit and comparison of that
              number into other number in given pin number */
              //By using while loop
              //int reminder,amount;
              while(pin!=0)
              {
                remainder=pin%10;
                pin=pin/10;
                remainder2=pin%10;
                if(remainder>remainder2){
                    count++;
                }
              }
              if(count==4)
              {
                  printf("\nAvailable balance is: %d",available);
                   printf("\nThank you for using YASH ATM..\nVisit Again");
              }else{
                  printf("Please enter the valid pin number\n");
                  printf("Thank you for use YASH ATM\n");
                  printf("visit again\n");
                  
              }
              break;
                                //ministatement
            /*1.First get the pin number from user
              2.After that, if pin number is correct then show the 5 transection details
              3.Else,warn to user enter the valid pin code*/ 
              
              case 3:                                          //Second switch case3                 
             printf("\nEnter your pin  number: ");
              scanf("%d",&pin);
              pin2=pin;
              /*To check the pin number it is in ascending order or not
              To separate the pin number in one digit and comparison of that
              number into other number in given pin number */
              //By using while loop
              //int reminder,amount;
              while(pin!=0)
              {
                remainder=pin%10;
                pin=pin/10;
                remainder2=pin%10;
                if(remainder>remainder2){
                    count++;
                }
              }
              if(count==4)
              {
                  printf("\nFirst transection : Credit       :%ld  ",Amount1);
                  printf("\nSecond transection: Withdrawl    :%ld  ",Amount2);
                  printf("\nThird transection : Transfer     :%ld  ",Amount3);
                  printf("\n\nThanking you for using YASH ATM");
                  printf("\nvisit again\n");
              }else{
                  printf("\nPlease enter the valid pin number\n");
                  printf("\nThanking you for use YASH ATM\n");
                  printf("\nvisit again\n");
                  
              }
              break;
              
              case 4:                                       //Second switch case4
                           //credit 
            /*1.First get the pin number from user
              2.After that,get the account number from user
              3.Next get the amount from user
              4.Finally give him reciept */   
              
              printf("Enter your pin  number: ");
              scanf("%d",&pin);
              pin2=pin;
              /*To check the pin number it is in asending order or not
              To seperate the pin number in one digit and comparison of that
              number into other number in given pin number */
              //By using while loop
              
              while(pin!=0)
              {
                remainder=pin%10;
                pin=pin/10;
                remainder2=pin%10;
                if(remainder>remainder2){
                    count++;
                }
              }
               if(count==4)
              {
                 long long int account,k=0,credit,account1;                        //Declaration
                printf("\nEnter your account number : ");
                scanf("%lld",&account);
                account1=account;
                while(account!=0)
                {
                    remainder=account%10;
                    account=account/10;
                    k++;                                //K is used to know the looping time
                }
                if(k>=15)
                {
                    printf("\nEnter the amount to credit: ");
                    scanf("%d",&credit);
                    available=available+credit;
                    printf("\nYou have succesfully credit the %d money",credit);
                    printf("\nYour available balance is :%d",available);
                    printf("\nThank you for using YASH ATM");
                }else{
                    printf("Please enter the valid account number\n");
                    printf("Account number must have greater than 15 digits\n");
                }
                 
                  
              }else{
                  printf("\nPlease enter the valid pin number\n");
                  printf("Thank you for using YASH ATM\n");
                  printf("visit again");
              }
              break;
              
              default :
              {
                  printf("Enter the valid option number\n");
                  
              }
              
          }
          break;
          
           int premainder,premainder1,ppin;
           long long int pk=0,paccount,pcount=0,phone;
           
        case 3:                                            //first switch case 3 
                      //Pin generate
                      
        /*1.First get the phone number 
          2.After that get the account number from user
          3.Finally get the new pin number from user*/ 
          
          printf("Enter your phone number\nIt must be linked with account number: ");
          scanf("%lld",&phone);
          
          while(phone!=0)
                {
                    premainder=phone%10;
                    phone=phone/10;
                    pk++;             //pK is used to know the looping time
                }
        if(pk==10){
            
          printf("Enter your account number: ");
          scanf("%lld",&paccount);
          
          pk=0;
          while(paccount!=0)
                {
                    premainder=paccount%10;
                    paccount=paccount/10;
                    pk++;                                   //pK is used to know the looping time
                }
          if(pk>=15){
              printf("Enter your new pin number: ");
              scanf("%d",&ppin);
              
               /*To check the pin number it is in ascending order or not
              To separate the pin number in one digit and comparison of that
              number into other number in given pin number */
              //By using while loop
              
              while(ppin!=0)
              {
                premainder=ppin%10;
                ppin=ppin/10;
                premainder1=ppin%10;
                if(premainder>premainder1){
                    pcount++;
                   
                }
              }
              
              if(pcount==4)
              {
                  printf("Your pin is generated succesfully..\n");
                  printf("Thank you for using YASH ATM..\nVisit Again");
              }
              else
              {
                  printf("\n\nyour pin number is not generated,\nplease try to generate another pin number\n");
                  printf("Example 1234, \nmust be create the pin number in ascending order\n"); 
              }
              
          }else{
              printf("Account number must have 15 and more digits\n");
              printf("Please Enter the valid account number!..");
          }
          
        }else{
            printf("plese enter the account linked number");
        }
        break;
        
        case 4:                                  //First switch case 4
                            //Pin change 
        /*1.First get the old pin number from user
          2.After that,get the new pin number
          3.finally generate the new pin number*/  
          
        printf("Enter the your pin number: ");
        scanf("%d",&pin);
        
        /*To check the pin number it is in asending order or not
              To seperate the pin number in one digit and comparison of that
              number into other number in given pin number */
              //By using while loop
              
              while(pin!=0)
              {
                remainder=pin%10;
                pin=pin/10;
                remainder2=pin%10;
                if(remainder>remainder2){
                    count++;
                }
              }
              
              if(count==4){
                  
          printf("Enter the new pin number: ");
          scanf("%d",&pin);
        
        /*To check the pin number it is in asending order or not
              To seperate the pin number in one digit and comparison of that
              number into other number in given pin number */
              //By using while loop
              count=0;
              while(pin!=0)
              {
                remainder=pin%10;
                pin=pin/10;
                remainder2=pin%10;
                if(remainder>remainder2){
                    count++;
                }
              }
              if(count==4){
                  printf("\nYour pin is changed succesfully.\n");
                  printf("Thank you for using YASH ATM\nVisit Again");
                  
              }else{
                  printf("\nThis pin number is not change\n");
                  printf("NOTE:pin number is must be in the form of Ascending order\n");
                  printf("you can use the another pin numbner to change");
              }
              
                  
              }else{
                  printf("Please enter the valid pin number.");
              }
        
        
        break;
        
          long long int Atm,Atm1;
          long money;
          
        case 5:                                                   //First switch case 5
        
        // Atm to Atm money TRANSFER..
        
        /*1.Get the Atm pin number from user
          2.After that,get the credit Atm 16 digits number
          3.Next get the amount to tramsfer the money
          4.Finally give to user reciept*/
          
        printf("Enter the your pin number: ");
        scanf("%d",&pin);
        
        /*To check the pin number it is in asending order or not
              To seperate the pin number in one digit and comparison of that
              number into other number in given pin number */
              //By using while loop
              
              while(pin!=0)
              {
                remainder=pin%10;
                pin=pin/10;
                remainder2=pin%10;
                if(remainder>remainder2){
                    count++;
                }
              }
              
        if(count==4){
            printf("Enter your credit Atm number: ");
            scanf("%lld",&Atm);
           
          Atm1=Atm;
         
          count=0;
          while(Atm!=0)
                {
                    Atm=Atm/10;
                    count++;               //count is used to know the looping time
                }
                
                if(count==16){
                    printf("Enter the amount to trasfer: ");
                    scanf("%ld",&money);
                    
                    available1=available;
                     available=available-money;
                          
                       if(available>=0){                          //Third if 
                         printf("\nSuccesfully %ld money transfer to %lld",money,Atm1);
                         printf("\nAvailable Balance is: %ld",available);
                          printf("\nThank you for using YASH ATM\nVisit Again");
                
                       }else{                                     //Third if-else
                       
                           printf("Sorry!\nyou don't have sufficient money in your account\n");
                           printf("available Balance is: %ld",available1);
                           printf("\nVisit again");
                       }
                
                }else{
                    printf("\nEnter the valid Atm number\n");
                    printf("NOTE:Atm number must have 16 digits");
                }
                  
              }else{
                  printf("\nPlease enter the valid pin number\n");
                  printf("Pin number must have 4 digits and it is in Ascending order\n");
                  printf("Thanking you for use YASH ATM\n");
                  printf("visit again");
              }
          
        
        break;
        
       default:
       {
           printf("Enter the valid option number!.");
       } 
         
     }
     
 

    return 0;

}
