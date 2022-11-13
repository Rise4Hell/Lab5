#pragma once
#include "Header.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <atlbase.h> 

//Гуменюк Максим Андрійович КІ2-21-4
using namespace std;
static int g_counter=0;
string wetherglobal;

Teams::Teams()
{
	salary = 0;
}

void Teams::adad()
{ years.year(); }

void Teams::Bet1() {
     
        years.Bet();
     
}

void Teams::players_year::year() {
    for (int i = 0; i < 2; i++)
    {
        player_years[i] = rand() % 30;
    }

}

void Teams::players_year::Bet(){
    for (int i = 0; i < 2; i++)
    {
        cout << player_years[i];
    }
} 

SoccerTeam::SoccerTeam(int player_number) :day(31), day1(Payout)
{
	number = player_number;
}

//SoccerTeam::~SoccerTeam() {
//    g_counter++;
//    cout << "\n" << g_counter << " object of class destroyed:";
//
//};

 void SoccerTeam::CreateTeam(Teams all_teams[2]) {
    int b = 1;
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter team name " << b++ << ":" << endl;
        cin >> all_teams[i].team_name;
    }

    for (int i = 0; i < number; i++)
    {
        cout << "Enter players name in " << all_teams[i].team_name << ":" << endl;
        for (int j = 0; j < 2; j++)
        {

            cin >> all_teams[i].player_names[j];
        }
    }

 
}

 void SoccerTeam::BetCheck1() {
     BetCheck.Bet1();
 }

 Ticket SoccerTeam::CreateTicket(Teams all_teams[2]) {
     Ticket all_ticket;
     all_ticket.team1 = all_teams[0].team_name;
     all_ticket.team2 = all_teams[1].team_name;

     cout << "Enter place name:" << endl;
     cin >> all_ticket.place;

     cout << "Enter time:" << endl;
     cin >> all_ticket.time;

     cout << "Enter price:" << endl;
     cin >> all_ticket.price;
     return all_ticket;
 }

 int SoccerTeam::Payoutinfo() {
        return Payout;
 }

 void Fans::BuyTicket(Ticket all_ticket, Teams all_teams[2]) {
     ofstream TicketHistori;
     TicketHistori.open("TicketHistori.txt");
     cout << all_teams[0].team_name << " vs " << all_teams[1].team_name << " in " << all_ticket.place << " | PRICE: " << all_ticket.price << " TIME: " << all_ticket.time << endl;
     TicketHistori << all_teams[0].team_name << " vs " << all_teams[1].team_name << " in " << all_ticket.place << " | PRICE: " << all_ticket.price << " TIME: " << all_ticket.time << endl;
     TicketHistori.close();
     cout << "Buy ticket? | 1 - Yes | 2 - No |" << endl;
     cin >> YesNo;
     if (YesNo == 1) {
         cout << "Training score: " << trainingGoal1 << " : " << trainingGoal2 << endl;
         goal1 = rand() % 10;
         goal2 = rand() % 10;
         cout << "Match start: " << goal1 << " : " << goal2 << endl;

         if (goal1 > goal2) {
             cout << "Winner: " << all_ticket.team1 << endl;

             all_teams[0].salary = Payout + 400;
             all_teams[1].salary = Payout;


         }
         else if (goal1 < goal2) {
             cout << "Winner: " << all_ticket.team2 << endl;

             all_teams[1].salary = Payout + 400;
             all_teams[0].salary = Payout;

         }
         else {
             cout << "Draw!" << endl;

             all_teams[1].salary = Payout;
             all_teams[0].salary = Payout;
         }

     }
     else if (YesNo == 2) {
         cout << "Ticket no purchased";
     }
     else {
         cout << "Purchase error!";
     }
     cout << all_teams[0].salary << endl;
     cout << all_teams[1].salary << endl;

 }

 void Fans::Sort(int C[])
 {
     vector<int> numbers;
     for (int i = 0; i < 4; i++)
     {
         numbers.push_back(C[i]);
     }

     sort(numbers.begin(), numbers.end());

     for (auto x : numbers)
         cout << x << " ";
 }

 void Fans::TicketPrint(string printer) {

     ifstream TicketHistori;
     TicketHistori.open(printer);
     string Ticket_text;
     if (TicketHistori.is_open()) {
         while (getline(TicketHistori, Ticket_text))
         {
             cout << Ticket_text;
         }
         TicketHistori.close();
     }
 }
 // 13 пункт  3 лаб 
 Fans Fans::ticket_price(Fans all_ticket) {
      
         cout << all_ticket.price;
         return all_ticket;
     
} 
 // 11 пункт  3 лаб 
 void returning(SoccerTeam info)
 {
     cout << "Player namber: " << info.number;
 }
 // 12 пункт  3 лаб 
 void returning(SoccerTeam& info, int i)
 {
     cout << "Player namber: " << info.number;
 }