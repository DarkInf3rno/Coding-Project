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

  Date September[22];
  d.DateInitializer(September, 8, 30, 9);
  Date October[31];
  d.DateInitializer(October, 1, 31, 10);
  Date November[30];
  d.DateInitializer(November, 1, 30, 11);
  Date December[9];
  d.DateInitializer(December, 1, 9, 12);


 
  
  
 // cout << "The day is:  "<< September[21].getDay() << endl << "December time: " << December[8].getDay() << " of the "<< December[8].getMonth() << "th month" << endl;

  int month, day;
  
  d.input();
  d.output();
  cout << endl << "Pick a time for your appointment "<< endl;
  tr.input();
  tr.output();

  tr.setTimeRange(15, 30, 16, 0);
  tr.output();
    
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
