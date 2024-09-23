             /*The final Project of the Semester 1st.(2023), Batch:K-23SW.*/
//             subject: "PROGRAMMING FONDAMENTALS"
/*            Teacher:  Ma'am Fatima Jafar.
Group members: 1. Abdul Ahad(K-23SW038), 2. Toheed Ahmad(K-23SW009), 3. Devraj(K-23SW005).
/*         THIS PROGRAM IS ABOUT HOW THE BANK ATM WORKS:
    WE MADE THIS PROGRAM BY TOTALLY USING IF STATEMENTS, ELSE STATEMENTS AND ELSE IF STATEMENTS.
*/
#include <iostream>
using namespace std;
int main()
{
  int Balance = 10000;
  int account_type, option;
  int amount;
  int pin;
  
  
  cout <<"~~~~~~~~~~~~~~~~~~~~~~~~***  Welcome to the ATM of Bank Al Habib Limited   ***~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
  cout<<"    Insert your ATM Card:"<<endl<<endl;
  cout<<"    Enter '04' digit PIN:";
  cin>>pin;
  cout<<"\n    Which account do you want to open? Select from the given below:"<<endl<<endl;
  cout << "     1.  Current Account" << endl;
  cout << "     2.  Saving Account" << endl<<endl;
  //Prompting user to select account type
  cout << "    Select your account type (1 or 2): ";
  cin >> account_type;
  
  //If user enters option 1 or 2 
  if(account_type == 1 || account_type == 2)
  {
    //Display account operations options to user
     cout << "  \n     1. Withdraw Amount" << endl;
     cout << "     2. Balance Inquiry" << endl;
     cout << "     3. Deposit"<<endl<<endl;
     //prompt user to select operation
     cout << "    Select an option from the above options(1 or 2 or 3):- ";
     cin >> option;
     if(option == 1) //User want to withdraw
     {
       //prompt user to enter amount he/she want to withdraw
       cout << "\n    Please enter amount to withdraw : ";
       cin >> amount;
       if(amount <= 0) // if amount entered is zero or negative display error
       {
         cout << "    Amount can not be zero or negative" << endl;
       }
       else if(amount > Balance) // if amount to withdraw is greater than account balance, display error
       {
         cout << "   You do not have much funds to withdraw this amount." << endl;
       }
       
       else // withdraw funds and display user success message
       {
         Balance = Balance - amount;
         cout << "\n   Balance withdrawl successfully. Your new balance is: " << Balance << endl;
       }
       
     }
     else if(option == 2) // if user select option 2, display account balance
     {
        cout << "\n    Your Balance is: " << Balance << endl;
     }
     else if(option==3)//if user select option 3,display deposit money
     {
       //prompt user to enter amount he/she want to deposit
       cout << "\n    Please enter amount to deposit : ";
       cin >> amount;
       if(amount >= 0 )   // deposit funds and display user success message.
       {
         int deposit = Balance+amount;
         cout << "\n    Balance deposited successfully.   'Your new balance is : " << deposit << endl;
        }
    }
}
   else //wrong account type entered, display error message
  {
  	
    cout << "\   Invalid Account type selected." << endl;
}
  cout<<"\n    Don't forget to take your ATM Card,"<<endl;
  cout<<"    Also take your Accout Detail Receipt"<<endl;
  
  
  
  cout<<"    Abdul Ahad,K-23SW038"<<endl;

  cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***  Thank You for Using Our ATM  ***~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl; 
  /* program is designed by k-23sw038 */
  return 0;  }
  
  



