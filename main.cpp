//main.cpp, put your driver code here, 
//you can manipulate your class objects here
#include <iostream> //cin and cout
#include "time.hpp"
#include "date.hpp"
#include <cstdlib>
#include <stdlib.h>

using namespace std;
//Array containing all possible dates in the month of september
//Element 0 represents september 8, element 1, september 9...september 30 is element 21. Recall there is no element 22 because thats an error. 

//Need error checking so that we can only type acceptable integers into the cin. 
/* void DateInitializer(Date SampleMonth[],int startDay, int endDay, int monthNumber) {

      Date sampleMonth[endDay-startDay]; 

      for(int i=0; i <= endDay-startDay; i++) {

      sampleMonth[i].setDate(monthNumber, startDay+i);

      //cout << "month: " << sampleMonth[i].getMonth() << endl << "day: " << sampleMonth[i].getDay() << endl << endl; 

      } 
 }
      
*/



int main() {

  TimeRange tr;
  Date d;
/*
  Date September[22];
  d.DateInitializer(September, 8, 30, 9);
  Date October[31];
  d.DateInitializer(October, 1, 31, 10);
  Date November[30];
  d.DateInitializer(November, 1, 30, 11);
  Date December[9];
  d.DateInitializer(December, 1, 9, 12);
*/


 
  
  
 // cout << "The day is:  "<< September[21].getDay() << endl << "December time: " << December[8].getDay() << " of the "<< December[8].getMonth() << "th month" << endl;

  //int month, day;
  
  cout <<"Available months for booking are September, October, November, December" << endl;
  d.input();
  d.output(cout);
  cout << endl << "Pick a time for your appointment "<< endl;
  tr.input();
  tr.output();

  int reinitMonth;
  int reinitDay;

  cout << endl << "Lets use the set function to change our date." << endl << endl;

  cout << "Pick a new month. Available months for booking are September, October, November and December. Make sure to input month as a number." << endl << endl;  
  cin >> reinitMonth; 

  cout << "Pick a new day in said month: ";
  cin >> reinitDay; 

  d.setDate(reinitMonth, reinitDay);
  d.output(cout);

  
    int reStartHour;
    int reStartMin;
    int reEndHour;
    int reEndMin;

   cout << endl << "Now let's book an appoinment. Please note error checking is not enabled for this section. Have fun with the numbers and enjoy typing in whatever numbers you would like." << endl << endl;

    cout << "From the displayed open time slots, what is the hour of the starting time: "; 
    cin >> reStartHour;

    cout << endl << "From the displayed open time slots, what is the hour of the starting time: ";
    cin >> reStartMin;

    cout << endl << "From the displayed open time slots, what is the hour of the ending time: ";
    cin >> reEndHour;

    cout << endl << "From the displayed open time slots, what is the minutes of the ending time: ";
    cin >> reEndMin;
 
  tr.setTimeRange(reStartHour, reStartMin, reEndHour, reEndMin); 
  tr.output();
 //d.printAppointedTimeSlots();
  
   return 0;
}
//Holidays

//Use const variables to define the three holidays: National Day for Truth and
//Reconciliation (Sept 30), Thanksgiving Day (Oct 11), and Remembrance Day (Nov 11).
    //We want the function to take in the start day, end day of the month to create an array. 
    
  
 /* int x = d.isWeekend(month, day);
       if(x==0 || x == 6){
        cout<<"You have chosen a weekend, no appointments can be booked. Aborting"<< endl;
       }
        else {
          cout << "Valid day, pick a time slot: " ;
        }
      exit(1);
*/
