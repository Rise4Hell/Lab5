#include "Header.h"
#include "iostream"
#include <conio.h>
#include <atlbase.h> 

using namespace std;
//int g_counter = 0;
//������� ������ ��������� ʲ2-21-4
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
    
    // 14 ����� 3 ��� 
    Fans data(operation1);
   /*Fans data(2, 7);
    Fans data;*/
   
    BSTR object1 = 0;

    int num1 = 8, num2 = 4, num3 = 7;
   
    int c;
    
    int C[] = { 5, 2, 6,1 };

    operations.CreateTeam(new_team);//c�������� �������

    tickets = operations.CreateTicket(new_team);//��������� ���������� � ����

    operation1.BuyTicket(tickets, new_team);//��������� �����, ���

    cout << "Players payment per match: " << payment->Payoutinfo() << " $ " << endl;// �������� �������

    operation1.TicketPrint("TicketHistori.txt");//����� � ���������� � �����

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
           
         

 

 