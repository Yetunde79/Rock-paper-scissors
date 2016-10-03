//
//  main.cpp
//  rock_paper_scissors
//
//  Created by Yetunde Sola-Adebayo on 10/3/16.
//  Copyright © 2016 Yetunde Sola-Adebayo. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, const char * argv[]) {
    string answer;
    
    cout<<"Do you want to play, answer Y or N"<<endl;
    cin>>answer;
    int C;
    int U;
    
    while(answer=="Y")
    {
        string options;
        cout<<"Pick Rock, Paper or Scissors"<<endl;
        cin>>options;
        
        cout<<"Computers turn"<<endl;
        
        string computer_ans[] ={ "Rock" ,"Paper", "Scissors"};
        
        string computer=computer_ans[rand()%3];
        
        cout<< computer<<endl;
        
        if(options=="Rock" && computer=="Paper")
        {
            cout<<"Paper beats Rock"<<endl;
            C++;
            cout<<"Computer: "<< C << " You: "<< U <<endl;
        }
        
        if(options==computer) //rock&rock, scissors&scissors, paper&paper
        {
            cout<<"No one beats anyone"<<endl;
            cout<<"Computer: "<< C << " You: "<< U <<endl;
        }
        
        if(options=="Rock" && computer=="Scissors")
        {
            cout<<"Rock beats Scissors"<<endl;
            U++;
            cout<<"Computer: "<< C << " You: "<< U <<endl;
        }
        
        if(options=="Paper" && computer=="Rock")
        {
            cout<<"Paper beats Rock"<<endl;
            U++;
            cout<<"Computer: "<< C << " You: "<< U <<endl;
        }
        
        if(options=="Paper" && computer=="Scissors")
        {
            cout<<"Scissors beats Paper"<<endl;
            C++;
            cout<<"Computer: "<< C << " You: "<< U <<endl;
        }
        
        if(options=="Scissors" && computer=="Paper")
        {
            cout<<" Scissors beat Paper"<<endl;
            U++;
            cout<<"Computer: "<< C << " You: "<< U <<endl;
        }
        
        if(options=="Scissors" && computer=="Rock")
        {
            cout<<"Rock beats Scissors"<<endl;
            C++;
            cout<<"Computer: "<< C << " You: "<< U <<endl;
        }
        
        if(C>U)
        {
            cout<<"Computer won the game"<<endl;
        }
        else if(C<U)
            cout<<"You won the game"<<endl;
        
        char replay;
        cout<<"Do you want to play again, Y or N"<<endl;
        cin>>replay;
        
        if(replay=='Y')
            
            continue;
        
        else
        {
            cout<<"Thanks for playing :)"<<endl;
            break;
        }
    
    }
    
       if(answer=="N")
        cout<<"Bye :)"<<endl;

    
    return 0;
}
