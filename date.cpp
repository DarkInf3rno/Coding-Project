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

      void Date::input() {
        cout << "Enter month as a number: ";
        cin >> this -> month;

        if (month != 9 && month != 10 && month != 11 && month != 12) {

          cout << "Invalid month. Please try again" << endl<< " Program exiting" << endl ; 
          exit(1);
          

        } 

        else {
          ;
        }

        // Takes input for month then using printDays(); we can print all the days in that month
        this -> printDays();
        cout << "Enter day of the month: ";
        cin >> this -> day;
        
      }
      void Date::output(std::ostream& outs){
        isValid();
        isHoliday();
        isWeekend();
         cout << "You have chosen a valid date for your appointment, here are all the times. " << endl;
        //In output, it checks through all 3 functions to see if it is a legal date
        cout << "The date you have selected is " << month << "/" << day << "/2021" << endl;
        cout << "Here are open time slots for " << month << "/" << day << "/2021" << endl; 
        printFreeTimeSlots();
        cout << endl ;
        
        // After confirming they are valid, we print out all the available time slots in that day.
        
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

      void Date::setAppointment(bool *&appointed){
            appointed[48]=*&appointed;
      }

      void Date::isValid() {

        if ((month < 9) || (month > 12) || (day < 1 ) || (day > 31 ) || (month == 9 && day > 30) || (month == 9 && day < 8) || (month == 12 && day > 9) || (month == 11 && day > 30)) {

          cout << "You can not book an appointment on this date. Aborting program. " << endl;
          exit(1); 
        
      }
    // isValid checks if the they entered a valid day or month, so if they enter anything else it wouldn't work 
      }


      void Date::isWeekend() { 
          if (month==9 && (day == 11 || day == 12 || day == 18 || day == 19 || day ==     25 || day == 26 )){
            cout << "You have chosen a weekend, no appointments can be booked. Aborting" << endl;
            exit(1);
            }

          else if (month==10 && (day ==2 || day == 3 || day == 9 || day ==10 || day == 16|| day ==17 || day == 23 || day == 24 || day == 30 || day == 31 )){
             cout << "You have chosen a weekend, no appointments can be booked. Aborting" << endl;
            exit(1);
          }
          else if (month == 11 && (day == 6 || day == 7 || day == 13 || day == 14 || day == 20 || day == 21 || day == 27 || day ==28)){
             cout << "You have chosen a weekend, no appointments can be booked. Aborting" << endl;
            exit(1);
          }

          else if (month == 12 && (day == 4 || day ==5)){
              cout << "You have chosen a weekend, no appointments can be booked. Aborting" << endl;
            exit(1);
          }
          }


        /*
    static int MNAY[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    // Magic number array for calculations for year
    const int year = 2021;
    // Year is constant since the schedule is only during 2021


    int x =  (year + year / 4 - year / 100 + year / 400 + MNAY[month - 1] + day) % 7;
    // Based off the Gregorian calender,
    // The calculation done to find what day of the week it is. Returns 0 = sunday , 1 = mond....

        if (x == 0 || x == 6) {
          cout << "You have chosen a weekend, no appointments can be booked. Aborting" << endl;
          exit(1);
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
      // Uses a switch statement, taking in month and then printing out all the info in that month.
          switch(month){
          case 9: {
          Date September[22];
          DateInitializer(September, 8, 30, 9);
          break;
         }
          case 10: {
          Date October[30];
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
           cout << December[2].getDay() << endl; 
           break;
         }
         default: {
          
         }
      
      }
      }
     void Date::printFreeTimeSlots()
      {
        // Using a for loop, we can print out all the time intervals
        // We use it by checking which values in the array are false, and print if it is false
        int hour;
          bool appointed[48] = {false};
          
          for (int i = 0; i < 48; i++) {
            if(appointed[i]==false){
            hour = i/2;
              if(i % 2 ==0){
            
               cout << endl << hour << ":00-" << hour <<":30" <<endl;
                }
                // Since there is 48 time intervals in a day, we can divide hour by i to  find the all 48 different time intervals.
                // Then using i % 2 we can correctly assign time intervals per block in the day/
                    
              else

                cout << hour << ":30-" << hour +1 <<":00" << endl;
              // Use hour plus 1 here because since the else is going to be all the odd numbers, we need to add so it rounds down.
               }
             }
      }

      void Date::printAppointedTimeSlots(){
        // Using a for loop, we can print out all the time intervals
        // We use it by checking which values in the array are true, and print if it is true
        
        //bool appointed[48] = {false};

        int hour;
        for (int i = 0; i < 48; i++){
          if (appointed[i]==true){
            hour = i/2;
              if(i % 2 == 0){
                 cout << hour << ":00-" << hour <<":30" <<endl;
                   // Since there is 48 time intervals in a day, we can divide hour by i to  find the all 48 different time intervals.
                // Then using i % 2 we can correctly assign time intervals per block in the day/
                    
              }
              else if (!(i % 2 == 0)){
                cout << hour << ":30-" << hour +1 <<":00" << endl;
                 // Use hour plus 1 here because since the else is going to be all the odd numbers, we need to add so it rounds down.
              }


          }
        }

      }
            