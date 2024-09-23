#include <iostream>
bool on=true;
char choice;
int Balance= 250000,pin=9875,deposit,withdrawal;
void DepositMoney(int deposit){
 Balance += deposit;
 std::cout<<"\nYour Money is Deposited Successfully\n"<<std::endl;
 std::cout<<"Your Current Balance is $"<<Balance<<"\n"<<std::endl;
};
   void WithDrawalMoney(int withdrawal){
   Balance -= withdrawal;
   std::cout<<"Here is Your "<<"$"<<withdrawal<<"\n"<<std::endl;
   std::cout<<"Your Remaining Balance: $"<<Balance<<"\n"<<std::endl;
  };
  void MoneyBalance(){
    std::cout << "\nYour Money Balance is " << "$"<<Balance<<"\n"<<std::endl;
  };
int main(){
   std::cout << "|/|______Welcome to UCA Bank______|/|\n";
   std::cout<<"Enter Your pin :";
   std::cin>>pin;
   if(pin==9875){
   do{std::cout<<"What you want to do?\n";
      std::cout<<"'1' For Deposit Money\n '2' For Money Withdrawal\n";
      std::cout<<"'3' For Checking Current Balance\n '4' For Exiting the Bank\n";
       std::cout<<"Enter your choice from above here :";
      std::cin>>choice;
       switch(choice) {
        case '1': std::cout<<"Deposit the amount :";
        std::cin>>deposit;
        DepositMoney(deposit);
        break;
        case '2': std::cout<<"\nEnter the amount you want to withdraw:";
        std::cin>>withdrawal;
        WithDrawalMoney(withdrawal);
        break;
        case '3': MoneyBalance();
        break;
        case '4':
         std::cout<<"\n___Thank You for visiting our Bank____\n";
         std::cout<<"\nRegards Bank 'UCA'\n";
         on=false;
        break;
        default:std::cout<<"\n___Invalid Choice___\n"<<std::endl;
        std::cout<<"\n     Try Again!!    \n";
       }

   } while(on);
   };
  return 0;}