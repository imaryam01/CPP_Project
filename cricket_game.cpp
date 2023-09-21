/******************************************************************************

Project Requirements
1. There should be two teams: TeamA and TeamB
a. Each team will have 3 players 
b. The player names will not be entered by the user. You can assign names to the players yourself 

2. There should be two innings 
a. Each inning will be of 6 balls (one over)
i. In each inning, one batsman from the batting team will bat for 6 balls and one bowler from the bowling team will bowl 6 deliveries 
ii. One batsman from the batting team and one bowler from the bowling team will be selected randomly for each inning 

b. TeamA will always bat first which means TeamB will always bowl first 

3. In each delivery, runs can be scored from 0 to 6 
4. There will be no criteria to get wickets. In simple words, once a batsman starts his inning, he will bat for all the 6 balls
   without getting out/dismissed/retired hurt etc 

5. After completion of two innings i.e. after each team has done batting, scored runs will be compared to decide 
the winner or to decide if there is a tie 

Note: The match will conclude only after each batting team has faced 6 deliveries. In the second 
inning, at any point of time during the match, if the score of TeamB is greater than the runs scored 
by TeamA (in the first inning) then the match should not end. The match should continue until 
TeamB has faced all the 6 deliveries.
*******************************************************************************/
#include <iostream>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include<unistd.h>
using namespace std;

class TeamA
{
    public:
    string name;
    int Batsman_TeamA;
    int Bowler_TeamB;
    string PlayerA1="Aditya";
    string PlayerA2="Ibrahim";
    string PlayerA3="Rashid";
    string PlayerB1="Rahul";
    string PlayerB2="Asif";
    string PlayerB3="Khalid";
    
    
};
void TeamA :: Start_1stInning(int)
    {
        if (Batsman_TeamA==1)
    {
        cout<<"\n Batsman from TeamA  "<< PlayerA1<<" is Batting......"<<"\n";
    }
   else if (Batsman_TeamA==2)
    {
        cout<<"\n Batsman from TeamA  "<< PlayerA2<<" is Batting......"<<"\n";
    }
    else 
    {
        cout<<"\n Batsman from TeamA  "<< PlayerA3<<" is Batting......"<<"\n";
    }
    usleep(50000);
    if (Bowler_TeamB==1)
    {
        cout<<"\n Bowler from TeamB  "<< PlayerB1<<" is Bowling......"<<"\n";
    }
   else if (Bowler_TeamB==2)
    {
        cout<<"\n Bowler from TeamB  "<< PlayerB2<<" is Bowling......"<<"\n";
    }
    else 
    {
        cout<<"\n Bowler from TeamB  "<< PlayerB3<<" is Bowling......"<<"\n";
    }
    }
/*
class TeamB
{
    public:
    string name;
    
};
*/
int main()
{
  /* TeamA PlayerA1,PlayerA2,PlayerA3;
    PlayerA1.name="Aditya";
    PlayerA2.name="Ibrahim";
    PlayerA3.name="Rashid";
    
    TeamB PlayerB1,PlayerB2,PlayerB3;
    PlayerB1.name="Rahul";
    PlayerB2.name="Asif";
    PlayerB3.name="Khalid";
    */
    // 1st Inning , Choosing random Batsman from team A & Bolwer from team B
     int Batsman_TeamA, Bowler_TeamB  ;
    
    srand (time(0));
    for(int i=0;i<3;i++)
    {
        Batsman_TeamA= (rand()%3)+1;
        Bowler_TeamB= (rand()%3)+1;
    }
    
    cout<<"\n 1st Inning , from TeamA : Batsman is Player "<<Batsman_TeamA<<" \n              from TeamB : Bowler is Player "<<Bowler_TeamB<<"\n";
    cout<<"\n -------------------------------------------------------- ";
      usleep(600000);
    Batsman_TeamA.Start_1stInning();
    usleep(300000);
    //Giving output for Run and adding them
    int Runs_by_TeamA,Total_Runs_by_TeamA=0;
    srand (time(0));
    
    for(int i=1;i<7;i++)
    {
    
    Runs_by_TeamA= (rand()%7);    //getting random runs
    
    cout<<"\n Runs  = "<<Runs_by_TeamA;
    
    Total_Runs_by_TeamA= Runs_by_TeamA+Total_Runs_by_TeamA;  //adding runs 
    
    }
    cout<<"\n Total Runs Scored by TeamA= "<<Total_Runs_by_TeamA;
    
     // 2nd Inning , Choosing random Batsman from team B & Bolwer from team A
     cout<<"\n -------------------------------------------------------- ";
    
    int Batsman_TeamB, Bowler_TeamA  ;
    
    
    for(int i=0;i<3;i++)
    {
        Batsman_TeamB= (rand()%3)+1;
        Bowler_TeamA= (rand()%3)+1;
    }
     
    cout<<"\n \n 2nd Inning , from TeamB : Batsman is Player "<<Batsman_TeamB<<" \n              from TeamA : Bowler is Player "<<Bowler_TeamA<<"\n";
    cout<<"\n -------------------------------------------------------- ";
     usleep(600000);
     /*
    if (Batsman_TeamB==1)
    {
        cout<<"\n Batsman from TeamB  "<< PlayerB1.name<<" is Batting......"<<"\n";
    }
   else if (Batsman_TeamB==2)
    {
        cout<<"\n Batsman from TeamB  "<< PlayerB2.name<<" is Batting......"<<"\n";
    }
    else 
    {
        cout<<"\n Batsman from TeamB  "<< PlayerB3.name<<" is Batting......"<<"\n";
    }
    
    if (Bowler_TeamA==1)
    {
        cout<<"\n Bowler from TeamA  "<< PlayerA1.name<<" is Bowling......"<<"\n";
    }
   else if (Bowler_TeamA==2)
    {
        cout<<"\n Bowler from TeamA  "<< PlayerA2.name<<" is Bowling......"<<"\n";
    }
    else 
    {
        cout<<"\n Bowler from TeamA  "<< PlayerA3.name<<" is Bowling......"<<"\n";
    }*/
     usleep(300000);
    //Giving output for Run and adding them
    
    int Runs_by_TeamB,Total_Runs_TeamB=0;
    
    srand (time(0));
    
    for(int i=0;i<6;i++)
    {
    
    Runs_by_TeamB= (rand()%6);    //getting random runs
    
    cout<<"\n Runs  = "<<Runs_by_TeamB;
    
    Total_Runs_TeamB= Runs_by_TeamB+Total_Runs_TeamB;  //adding runs 
    
    }
    
    cout<<"\n Total Runs Scored by TeamB= "<<Total_Runs_TeamB;
    
    //Deciding the winner
     cout<<"\n -------------------------------------------------------- ";
     usleep(600000);
    if (Total_Runs_by_TeamA>Total_Runs_TeamB)
    {
        cout <<"\n        ***** TeamA is the Winner! *****";
    }
    else if (Total_Runs_by_TeamA<Total_Runs_TeamB)
    {
        cout <<"\n        ***** TeamB is the Winner! *****";
    }
    else if  (Total_Runs_by_TeamA=Total_Runs_TeamB)
    {
        cout <<"\n        ***** Its a Tie *****";
    }
    
    cout<<"\n -------------------------------------------------------- ";
    return 0;
}







