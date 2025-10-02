#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

class Introduction
{
public:
	void showIntro()
	{
  cout<<"\n\t      !!  !!  !! !!!!!! !!    !!!!!! !!!!!! !!!!!!!!  !!!!!! ";
	cout<<"\n\t      !!  !!  !! !!     !!    !!     !!  !! !! !! !!  !! ";
	cout<<"\n\t      !!  !!  !! !!!!!! !!    !!     !!  !! !! !! !!  !!!!!! ";
	cout<<"\n\t      !!  !!  !! !!     !!    !!     !!  !! !! !! !!  !! ";
	cout<<"\n\t      !!!!!!!!!! !!!!!! !!!!! !!!!!! !!!!!! !! !! !!  !!!!!! \n\n\n";
    cout <<"\n\t\t       		   OOP PROJECT\n\n\n";
                      cout <<"\n\t\t                      TOPIC";
    	           cout <<"\n\t\t              Digital Clock Program\n\n";
    	           cout <<"\n\t\t                  Created By";
	               cout <<"\n\t\t              ARSLAN ZAFAR    ";
    	           cout <<"Press any key to continue";
	}
};

class Hours
{
protected:
	int h;
public:
	void setHour()
	{
	    cout << "What is the current hour?\n";
	    cin >> h;
	}

	int getHour()
	{
		return h;
	}
};

class Minutes
{
protected:
	int m;

public:
	void setMin()
	{
	    cout << "\nWhat is the current minute?\n";
	    cin >> m;
	}

	int getMin()
	{
		return m;
	}
};

class Seconds
{
protected:
	int s;
public:
	void setSec()
	{
	    cout << "\nWhat is the current seconds?\n";
	    cin >> s;
	}

	int getSec()
	{
		return s;
	}
};

class Day
{
public:
	int choice;
	void setDay()
	{
		cout<<"\n\nEnter the current Day\n1 for Monday\n2 for Tuesday\n3 for Wednesday\n4 for Thursday\n5 for Friday\n6 for Saturady\n7 for Sunday\n";
    	cin>>choice;
	}

	void getDay()
	{
	switch(choice)
          {
          	    case 1:
                cout<<"\t\t\t\t\t\t\t\t DAY: MONDAY\n\n\n\n";
                break;

                case 2:
                cout<<"\t\t\t\t\t\t\t\tDAY: TUESDAY\n\n\n\n";
                break;

                case 3:
                cout<<"\t\t\t\t\t\t\t\tDAY: WEDNESDAY\n\n\n\n";
                break;

                case 4:
                cout<<"\t\t\t\t\t\t\t\tDAY: THURSDAY\n\n\n\n";
                break;

                case 5:
                cout<<"\t\t\t\t\t\t\t\tDAY: FRIDAY\n\n\n\n";
                break;

                case 6:
                cout<<"\t\t\t\t\t\t\t\tDAY: SATURDAY\n\n\n\n";
                break;

                case 7:
                cout<<"\t\t\t\t\t\t\t\tDAY: SUNDAY\n\n\n\n";
                break;
		  }
	}

};

class Clock : public Hours, public Minutes, public Seconds, public Day
{
public:
	void setValue()
	{
		setHour();
		setMin();
		setSec();
		setDay();
	}

	void displayClock()
	{
		cout <<"\t\t\t\t"<< getHour() << "   :   " << getMin() << "   :   " <<"\a"<< getSec() << "\n\n";
		getDay();
	}

	void runClock()
	{
		Sleep(700);
        s++;
        if (s > 59)
        {
            s = 0;
            m++;

            if (m > 59)
            {
                m = 0;
                h++;

                if (h > 23)
                {
                    h = 0;
                    choice++;

                    if(choice > 7)
                    {
                        choice = 1;
             	          }
                }
            }
        }
     }
};

int main()
{
	system("color 0C");

	Introduction I;
	I.showIntro();
	getch();

	system("cls");
	system("color FC");

    int a = 0;
    Clock c;


	cout<<"                             DIGITAL CLOCK PROGRAM\n\n\n";

	mistake:
	c.setValue();

    if (c.getHour() > 23 || c.getMin() > 60 || c.getSec() > 60 || c.choice > 7)
    {
          cout << "\nERROR!! Please Try Again! This time enter the values more carefully\n\n";
          goto mistake;
    }


    while (a == 0)
    {
      system("cls");
      system("color 0C");
      cout<<"\n\t         !!!!!!!   !! !!!!!!!! !! !!!!!!!! !!!!!! !!";
      cout<<"\n\t         !!    !!  !! !!       !!    !!    !!  !! !!";
	    cout<<"\n\t         !!    !!  !! !!  !!!! !!    !!    !!!!!! !!";
	    cout<<"\n\t         !!    !!  !! !!    !! !!    !!    !!  !! !!";
	    cout<<"\n\t         !!!!!!!   !! !!!!!!!! !!    !!    !!  !! !!!!!!!\n\n\n\n\n\n\n";

               c.displayClock();

      cout<<"\n\t            !!!!!!!! !!      !!!!!!! !!!!!!!! !!   !!";
      cout<<"\n\t            !!       !!      !!   !! !!       !!  !!";
	    cout<<"\n\t            !!       !!      !!   !! !!       !!!!!";
	    cout<<"\n\t            !!       !!      !!   !! !!       !!  !!";
	    cout<<"\n\t            !!!!!!!! !!!!!!! !!!!!!! !!!!!!!! !!   !!";

	    c.runClock();

    }
    return 0;
}

