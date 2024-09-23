#include <iostream>
#include <ctime>
int UserChoose() {
    int UserChoice;
  std::cout<<"\nChoose an option from following:\n";
  std::cout<<"For Rock Enter '0'\n"
   "_______\n"
"---'   ____)\n"
      "(_____)\n"
      "(_____)\n"
     "(____)\n"
"---._(___)\n";
    std::cout<<"For Paper Enter '1'\n"
  "  _______\n"
"---'    ____)____\n"
"             ______)\n"
"           _______)\n"
"          _______)\n"
"---.__________)\n";
  std::cout<<"For Scissors Enter '2'\n"
     "_______\n"
  "---'   ____)____\n"
  "           ______)\n"
   "     __________)\n"
  "    (____)\n"
"---.__(___)\n";
    std::cout<<"\nEnter Your Choice here: ";
    std::cin>>UserChoice;
     return  UserChoice;
};

std::string choices[]={"Rock","Paper","Scissors"};
int main(){
      int UserChoice,ComputerChoice;
      std::string Play;
      bool PlayGame=true;//Getting random ComputerChoice
      std::cout<<"\n______Welcome to Rock,Paper,Scissors Game______\n";
    do {
        srand(time(NULL));
        ComputerChoice=rand()%3;
        UserChoice=UserChoose();
        while(UserChoice<0 || UserChoice>2) {
            std::cout<<"\nWRONG CHOICE\n TRY AGAIN!\n";
            UserChoice=UserChoose();
        };
        if(UserChoice==ComputerChoice) {
            std::cout<< "\n______It was a Draw!!______ \n";
        }
        else if(choices[UserChoice]=="Rock" && choices[ComputerChoice]=="Paper") {
            std::cout<<"\nComputer Won!!\nBetter Luck Next Time!!\n";
        }
        else if(choices[UserChoice]=="Paper" && choices[ComputerChoice]=="Scissors") {
            std::cout<<"\nComputer Won!!\nBetter Luck Next Time!!\n";
        }
        else if(choices[UserChoice]=="Scissors" && choices[ComputerChoice]=="Rock") {
            std::cout<<"\nComputer Won!!\nBetter Luck Next Time!!\n";
        }
        else if(choices[UserChoice]=="Paper" && choices[ComputerChoice]=="Rock") {
            std::cout<<"\nYou Won!!\nYou did Excellent!!\n";
        }
        else if(choices[UserChoice]=="Rock" && choices[ComputerChoice]=="Scissors") {
            std::cout<<"\nYou Won!!\nYou did Excellent!!\n";
        }
        else if(choices[UserChoice]=="Scissors" && choices[ComputerChoice]=="Paper") {
            std::cout<<"\nYou Won!!\nYou did Excellent!!\n";
        }
        std::cout<<"\nDo you want to play again?\nPress 'y' for Yes\n Press 'n' for No\n::--::";
        std::cin>>Play;
        if(Play=="y") {
            PlayGame=true;
        }
        else if(Play=="n") {
            std::cout<<"Thanks for playing Our Game!!\n Regards\n Team 'UCA'";
            PlayGame=false;
        }
    } while(PlayGame==true);
};
/// TEAM UCA
