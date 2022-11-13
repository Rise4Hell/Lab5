#include "Header.h"
#include "iostream"
#include <conio.h>
#include <atlbase.h> 

using namespace std;
//int g_counter = 0;
//Гуменюк Максим Андрійович КІ2-21-4
void main()
{
        
   

    string TeamName[2];
    SoccerTeam operations;
  
    Teams new_team[2];
    Ticket tickets;
   
    int i;
 
    
    int id;

    test Test;

    SoccerTeam* dadaya = new test;

    SoccerTeam* payment = new SoccerTeam();
   
    SoccerTeam* payment1 = new SoccerTeam();
    
    SoccerTeam* payment2 = new SoccerTeam();
   
    SoccerTeam* payment3 = new SoccerTeam();
    
    SoccerTeam* payment4 = new SoccerTeam();
    
    tournament fef;
  
    
    Fans operation1("snow",21,24, "snow", "snow");
    
    // 14 пункт 3 лаб 
    Fans data(operation1);
   /*Fans data(2, 7);
    Fans data;*/
   
    BSTR object1 = 0;

    int num1 = 8, num2 = 4, num3 = 7;
   
    int c;
    
    int C[] = { 5, 2, 6,1 };

    operations.CreateTeam(new_team);//cтворення команди

    tickets = operations.CreateTicket(new_team);//додавання інформації в білет

    operation1.BuyTicket(tickets, new_team);//Придбання тікета, гра

    cout << "Players payment per match: " << payment->Payoutinfo() << " $ " << endl;// зарплата гоавців

    operation1.TicketPrint("TicketHistori.txt");//Запис і зчитування з файлу

    operation1.Sort(C);

    try
    {
        throw payment->Payoutinfo();

    }
    catch (int num)
    {
        cerr << "deleted payout: " << num << endl;
    }

    try
    {
        throw payment->Service_Dinamic();

    }
    catch (int num)
    {
        cerr << "deleted number: " << num << endl;

    }

    try
    {
        throw Service(data);
    }
    catch (string) {

    }
   
    cin >> c;
    switch (c) {
   
    case 1:
        payment->Create();
        break;
    case 2:
        payment->Delete(object1);
        break;

    }

    payment->testing();
    payment = &Test;
    payment->testing();
    operation1.testing();

    cout << dadaya->returnNum() << endl;
    cout << dadaya->SoccerTeam::returnNum() << endl;
     
}
           
         

 

 