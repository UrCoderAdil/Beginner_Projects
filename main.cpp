#include <iostream>
#include <ctime>
void DrawBoard(char *choices);
void ComputerChoice(char *choices,char comp);
void UserChoice(char *choices,char user);
bool ChooseWinner(char *choices,char user,char comp);
int main(){
    char user='O';
    char comp='X';
    char choices[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
bool game=true;
DrawBoard(choices);
while(game){
    std::cout<<"__________________Welcome to TicTacToe game!!____________________"<<std::endl;
    std::cout<<"\t\t\t\t\t\t\t\t\t ('Regards UCA Team')"<<std::endl;
    UserChoice(choices,user);
    DrawBoard(choices);
    if(ChooseWinner(choices,user,comp)){
        game=false;
        break;
    }
    ComputerChoice(choices,comp);
    DrawBoard(choices);
    if(ChooseWinner(choices,user,comp)){
        game=false;
        break;
    }











}

return 0;
}
void DrawBoard(char *choices){
   std::cout<<"     |     |     \n";
   std::cout<<"  "<<choices[0]<<"  |"<<"  "<<choices[1]<<"  |  "<<choices[2]<<"  \n";
   std::cout<<"_____|_____|_____\n";
   std::cout<<"     |     |     \n";
   std::cout<<"  "<<choices[3]<<"  |"<<"  "<<choices[4]<<"  |  "<<choices[5]<<"  \n";
   std::cout<<"_____|_____|_____\n";
   std::cout<<"     |     |     \n";
   std::cout<<"  "<<choices[6]<<"  |"<<"  "<<choices[7]<<"  |  "<<choices[8]<<"  \n";

   std::cout<<"     |     |     \n\n\n";
}



void ComputerChoice(char *choices,char comp){
 srand(time(0));
 while(true){
  int no=rand()%9;
     if(choices[no]==' '){
            choices[no]=comp;
            break;

 }


}
}





void UserChoice(char *choices,char user){
    int number;
    do{
        std::cout<<"\nEnter the spot from (1-9) in above marker\n:";
        std::cin>>number;
        number--;
        if(choices[number]==' '){
            choices[number]=user;
            break;
        }
    }while(!number>0 || !number<8);








}
bool ChooseWinner(char *choices,char user,char comp){
    if(choices[0]!=' ' &&  choices[0]==choices[1] && choices[1]==choices[2]){
        choices[0]==user?std::cout<<"\n You Win!!": std::cout<<"\n You lose!";
    }
    else if(choices[3]!=' ' && choices[3]==choices[4] && choices[4]==choices[5]){
        choices[3]==user?std::cout<<"\n You Win!!": std::cout<<"\n You lose!";
    }
    else  if(choices[6]!=' ' &&choices[6]==choices[7] && choices[7]==choices[8]){
        choices[6]==user?std::cout<<"\n You Win!!": std::cout<<"\n You lose!";
    }
    else  if(choices[0]!=' ' && choices[0]==choices[4] && choices[4]==choices[8]){
        choices[0]==user?std::cout<<"\n You Win!!": std::cout<<"\n You lose!";
    }
    else if(choices[2]!=' ' && choices[2]==choices[4] && choices[4]==choices[6]){
        choices[2]==user?std::cout<<"\n You Win!!": std::cout<<"\n You lose!";
    }
    else if(choices[0]!=' ' && choices[0]==choices[3] && choices[3]==choices[6]){
        choices[0]==user?std::cout<<"\n You Win!!": std::cout<<"\n You lose!";
    }
    else if(choices[1]!=' ' && choices[1]==choices[4] && choices[4]==choices[7]){
        choices[1]==user?std::cout<<"\n You Win!!": std::cout<<"\n You lose!";
    }
    else if(choices[2]!=' ' && choices[2]==choices[5] && choices[5]==choices[8]){
        choices[2]==user?std::cout<<"\n You Win!!": std::cout<<"\n You lose!";
    }
    else{
        return false;
    }






 return true;



























}
