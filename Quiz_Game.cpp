#include <iostream>
int main(){
    std::cout<<"\n___________________________________________Welcome to QuizGame________________________________________\n"<<std::endl;
    char answer;
    int score;
    std::string questions[]={"1) What does CPU stand for? ",
                     "2) Which of the following is an example of an operating system?",
                           "3) What is the main function of RAM in a computer?",
                          "4) Which of the following is a type of software?",};
    std::string Options[][4]={{"A) Central Processing Unit",
"B) Central Programming Unit",
"C) Computer Personal Unit",
        "D) Central Performance Unit"},{"A) Microsoft Word",
            "B) Windows 10",
        "C) Adobe Photoshop",
            "D) Google Chrome"},{"A) Store long-term data",
    "B) Process calculations",
    "C) Store temporary data",
                "D) Connect to the internet"},{"A) Monitor",
            "B) Keyboard",
            "C) Microsoft Excel",
            "D) Printer"}
    };
    char answers;
    char Keyanswer[]={'A','B','C','C'};
    int size=sizeof(questions)/sizeof(questions[0]);
    for(int i=0;i<size;i++) {
        std::cout<<"******************************************\n";
        std::cout<<questions[i]<<std::endl;
        std::cout<<"******************************************\n";
        for(int j=0;j<sizeof(Options[0])/sizeof(Options[0][0]);j++) {
            std::cout<<Options[i][j]<<std::endl;
        }
        std::cin>>answer;
        answer=toupper(answer);
        if(answer== Keyanswer[i]) {
            std::cout<<"Your Answer is Correct"<<std::endl;
            score+=1;
        }
        else {
            std::cout<<"Your Answer is Incorrect"<<std::endl;
        }
    }
    std::cout<<"**********************************"<<std::endl;
    std::cout<<"RESULTS :"<<"YOUR SCORE IS = "<<score<<std::endl;
    std::cout<<"TOTAL SCORE WAS "<<sizeof(Keyanswer)/sizeof(char)<<std::endl;
    std::cout<<"Your Percentage Score is = "<<(double(score)/sizeof(Keyanswer)/sizeof(char))*100<<"%"<<std::endl;
    std::cout<<"*************************************"<<std::endl;
    std::cout<<"Thanks For playing my QuizGame"<<std::endl;
    std::cout<<"Regards Team 'UCA'"<<std::endl;
}