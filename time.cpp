//time.cpp to implement your class
#include "time.hpp"
#include <iostream>
    
   
          void TimeRange::setTimeRange(int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute) {
              
             // int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute

              if (isValid(inBeginHour, inBeginMinute, inEndHour, inEndMinute)) {
                
              beginHour = inBeginHour; 
              beginMinute = inBeginMinute;

              endHour = inEndHour; 
              endMinute = inEndMinute;

              }  
          }
//Constructor Functions
          TimeRange::TimeRange(int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute) {

              beginHour = inBeginHour;
              beginMinute = inBeginMinute;
              endHour = inEndHour; 
              endMinute = inEndMinute; 

              cout << "testing phrase";

          }


          TimeRange::TimeRange() {

              beginHour = 0;
              beginMinute = 0;
              endHour = 0; 
              endMinute = 0; 

              cout << "testing phrase";
          }



          void TimeRange::getTimeRange() {
            
              getBeginMin();
              getBeginHour();
              getEndHour();
              getEndMin(); 
              
          }

          void TimeRange::input() {

              cout << "Enter the hour of your beginning time: " << endl; 
              cin >> beginHour;

              cout << "Enter the minutes past the hour of your starting time time interval. For example if you want your start time to be 13:30, you would have selected 13 as the hour of your beginning time and would proceed to type 30 in the upcoming field: ";
              cin >> beginMinute;

              cout << "Enter the hour of your ending time. Make sure the end time you have in mind is exactly 30 minutes from the start time: " << endl; 
              cin >> endHour;

              cout << "Enter the minutes field of your endtime: ";
              cin >> endMinute;

              if (((endHour*60)+endMinute)-((beginHour*60)+beginMinute) == 30)
            {

                  cout << "Great you chose a valid time" << endl << endl;

              } else {

                cout << "You selected an invalid time slot. Try again. The time slot should be 30 minutes apart." << endl;

                input();

              }

              

          }

          void TimeRange::output(){
            isValid( beginHour,  beginMinute,  endHour,  endMinute);

              cout << "Begin time: " << beginHour<< "hrs " << beginMinute << "mins" << endl << "End time: " << endHour <<"hrs "<< endMinute << "mins";

            }
            
          /*  if (x==true) {
              cout << "Succesfully booked appointment for this time! See you then. ";
              
            }
            else{
              cout << "Invalid time intervals, they must be within 30 minutes each other. Try again. " ;
            }

            */
          

          
          int TimeRange::getBeginMin() {
      
              return this -> beginMinute; 

          }
          
          int TimeRange::getBeginHour() {

              return this -> beginHour; 
           
          }

          int TimeRange::getEndMin() {

              return this -> endMinute; 

          }
                
          int TimeRange::getEndHour() {

              return this -> endHour; 

          }

          bool TimeRange::isValid(int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute) {

            //Each variable must be less than or equal to 60 and be greater than or equal to 0. Must be multiples of 30, ie 0.6*50. 
            //Conditions. Modulus of (inBeginTime/0.6)%50 must be 0. 

              if (((endHour*60)+endMinute)-((beginHour*60)+beginMinute) == 30)
            {

                  cout << "Great you chose a valid time" << endl << endl;

              } else {

                cout << "You selected an invalid time slot. Try again. The time slot should be 30 minutes apart. " << endl;

                input();

              }
          }

            /*  if ((inBeginMinute == 0) || (inBeginMinute==30) && (inEndMinute ==0) || (inEndMinute==30)) {
              
              return true; 
                
              } else {return false;}

          }
*/