#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <atlbase.h> 

//Гуменюк Максим Андрійович КІ2-21-4
using namespace std;

class tournament;
 
//int g_counter = 0;
class Teams
{
  public:
    string team_name;
    string player_names[2];
    int salary;
    int counter;
    Teams();
    // пункт 20
    void adad();
    // пункт 18
    void Bet1();
  private:
      class players_year {
      public: int player_years[2];
            void year();
            void Bet();
      };
      players_year years;


};

class Abstract 
{
public:
    virtual void a() = 0;

};

struct Ticket 
{
    string team1;
    string team2;
    string time;
    int price = 0;
    string place;

};

class SoccerTeam: public Abstract
{
private:
    friend tournament;
    const int day;
    int& day1;
   /* tournament tp;*/
    int month=2;
     


public:
    void Abstract::a() {
        cout << "a" << endl;
    }
    int Payout = 2000;
    int trainingGoal1 = rand() % 8;
    int trainingGoal2 = rand() % 8;
    int number;

    virtual ~ SoccerTeam(){
        cout << " distructuor on";
    }
    virtual void testing(void) {
        cout << " test check";
    }

    virtual void output() {
        cout << "output work";
    }

    void returnday() {

        cout << day;
    }

    SoccerTeam(int player_number = 2) ;
 
  /*  ~SoccerTeam();*/
    // 19 пункт  3 лаб 
    void CreateTeam(Teams all_teams[2]);
     
    Ticket CreateTicket(Teams all_teams[2]);
    
    int Payoutinfo();
    Teams BetCheck;
    void BetCheck1();

    int Service_Dinamic() {
        int arr[10], size = 10, i, elem, j, found = 0;
        for (i = 0; i < size; i++)
        {
            arr[i] = rand() % 10;

        }

        for (i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        cout << "\nEnter Element to Delete: ";
        cin >> elem;

        for (i = 0; i < size; i++)
        {
            if (arr[i] == elem)
            {
                for (j = i; j < (size - 1); j++)
                {
                    arr[j] = arr[j + 1];
                }

                found++;
                i--;
                size--;
            }
        }

        if (found == 0)
        {
            cout << "\nElement doesn't found in the Array!";
        }

        else
        {
            cout << "\nElement Deleted Successfully!";

        }

        cout << endl;

        for (i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        return arr[i];
    }

    int Service_Static() {
        int arr[] = { 1, 7, 8, 5, 242, 3 };


        int index;
        int size = sizeof(arr) / sizeof(arr[0]);

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        cout << "Enter index " << endl;
        cin >> index;
        memmove(&arr[index], &arr[index + 1], size - (index + 1));
        arr[--size] = 0;

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    void Create()
    {
        HRESULT createElement(
            BSTR object1,
            IXMLDOMElement * *ppElement
        );
        exit;
    }

    void Delete(BSTR obj1)
    {
        delete[] obj1;
    }

    int returnNum() {
        return 0;
    }
   
    virtual void retcheck() {
        cout << SoccerTeam::returnNum();

    }
};

class tournament
{
public:
    string wether = "snow";
    string name = "world cup";
    string place = "Barcelona";
    int time1 = 24;
    int day1 = 12;
private:
    SoccerTeam monthcount;
    
    int month1 = monthcount.month;
   
    int tickettimereturn() {
        return time1;
    }

};

class Fans :public SoccerTeam, tournament
{
public:
   
  
     
    friend void SoccerTeam::returnday();
    using SoccerTeam::Payout;
    string wether1;
    string name1;
    string place1;
    int time1;
    int day1; 
    int ticketNumber;
    int YesNo;
    int goal1;
    int goal2;
    int price = 200;
    string wetherglobal = wether;

    void BuyTicket(Ticket all_ticket, Teams all_teams[2]);

    void TicketPrint(string printer);

    void Sort(int C[]);

    static Fans ticket_price(Fans all_ticket);

    Fans(string wether, int day, int time, string name, string palce) {
        wether1 = wether;
        name1 = name;
        place1 = place;
        time1 = time;
        day1 = day;

    }

    Fans() {
        day1 = 12;
    }
    ~Fans() {

    };
    void testing(void) {
        cout << " testing work (fans)";
    }
    private:


};

class test: public SoccerTeam
{
   void testing(void) {
        cout << " testing work";
   }

   void dadaya() {

       cout << test::returnNum();
   }


};

 
 
void returning(SoccerTeam info);
void returning(SoccerTeam& info, int i);

inline string Service(Fans tu)
{
    string filename;
    cin >> filename;

    tu.TicketPrint(filename);
  
    return  filename;
}


 
