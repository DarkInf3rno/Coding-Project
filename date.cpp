//date.cpp to implement your class 

#include <iostream>
using namespace std;
#include "date.hpp"
#include <stdlib.h>
#include <cstdlib>


      Date::Date(int amonth, int aday) {
        this -> month = amonth;
        this -> day = aday;
       
      }

      Date::Date() {
        month = 0;
        day = 0; 

      }
      Date::Date(bool appointed[48]){
        appointed[48] = false;
      }

      void Date::input(){
        cout << "Enter month as a number: ";
        cin >> this -> month;
        this -> printDays();
        cout << "Enter day of the month: ";
        cin >> this -> day;
      }
      void Date::output(){
        isValid();
        isHoliday();
        isWeekend();
        
      }

      void Date::setDate(int amonth, int aday) {
          this -> month = amonth; 
          this -> day = aday; 
      }

      int Date::getDay() {
        return this -> day;
      }

      int Date::getMonth() {
        return this -> month; 
      }

      void Date::isValid(){
        if ((month < 9) || (month > 12) || (day < 1 ) || (day > 31 )) {
        cout << "You can not book an appointment on this date. Aborting program. " << endl;
        exit(1);
        
      }
      }
      void Date::isWeekend() {
    static int MNAY[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    // Magic number array for calculations for year
    const int year = 2021;
    // Year is constant since the schedule is only during 2021


    int x =  (year + year / 4 - year / 100 + year / 400 + MNAY[month - 1] + day) % 7;
    // The calculation done to find what day of the week it is. Returns 0 = sunday , 1 = mond....

        if (x == 0 || x == 6) {
          cout << "You have chosen a weekend, no appointments can be booked. Aborting" << endl;
          exit(1);
     } else {
        cout << "You have chosen a valid date for your appointment";
     }

   

}
      /*int Date::isWeekend(int month, int day) {
        static int MNAY[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
        // Magic number array for calculations for year
        const int year = 2021;
        // Year is constant since the schedule is only during 2021
      
         int x = (year+year / 4 - year / 100 + year / 400 + MNAY[month - 1] + day) % 7;
          // The calculation done to find what day of the week it is. Returns 0 = sunday , 1 = mond....

          if(x==0 || x == 6){
            cout<<"You have chosen a weekend, no appointments can be booked. Aborting"<< endl;
          return 1;
                }
            else {
              cout << "Valid day, pick a time slot: " ;
                   }
        }
*/
    
      

      bool equal(Date date1, Date date2){
        return (date1.month == date2.month && date1.day == date2.day);
      }
      // Friend function, used to compare two dates with each other to check if equal, used in isHoliday.

      void Date::DateInitializer(Date sampleMonth[], int startDay, int endDay, int monthNumber) {

      //sampleMonth[endDay-startDay]; 
      for(int i=0; i <= endDay-startDay; i++) {
      sampleMonth[i].setDate(monthNumber, startDay+i);

      cout << "month: " << sampleMonth[i].getMonth() << endl << "day: " << sampleMonth[i].getDay() << endl << endl; 

      }

  }

      void Date::isHoliday(){

      const Date Sept30 = Date(9, 30);
      const Date Oct11 = Date(10, 11);
      const Date Nov11 = Date(11, 11);

      //All our constant dates for the Holidays that we use to check
      
      //Checks using our equal friend function that was implemented earlier
        if (equal(Sept30, Date(month, day))) {
        cout << "This is a holiday, no appointments can be booked. Aborting.." << endl;
        exit(1);
        }
          else if (equal(Oct11, Date(month, day))) {
          cout << "This is a holiday, no appointments can be booked. Aborting.." << endl;
          exit(1); }
          else if (equal(Nov11, Date(month, day))) {
          cout << "This is a holiday, no appointments can be booked. Aborting.." << endl;
          exit(1); }
      
      }
      

      void Date::printDays(){
        
          switch(month){
          case 9: {
          Date September[22];
          DateInitializer(September, 8, 30, 9);
          break;
         }
          case 10: {
          Date October[31];
          DateInitializer(October, 1, 31, 10);
          break;
         }
         case 11: {
          Date November[30];
          DateInitializer(November, 1, 30, 11);
          break;
         }
         case 12: {
           Date December[9];
           DateInitializer(December, 1, 9, 12);
           break;
         }
         default: {
          
         }
      
      }
      }
      int Date::printFreeTimeSlots(int month, int day)
      {
          bool appointed[48] = {false};
          
          for (int i =0; i < 48; i++) {
             appointed[i] = false;
             if (appointed[i]==false){
               cout << 0 + 30 ; 
               break;
             }
             
          }

      }
        
         

      
          
      
      


           
