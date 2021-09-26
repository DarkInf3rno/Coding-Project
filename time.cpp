//time.cpp to implement your class
#include "time.hpp"
    
   TimeRange::TimeRange(int aBeginHour, int aBeginMinute, int aEndHour, int aEndMinute) {
            
      beginHour = aBeginHour;
      beginMinute = aBeginMinute;

      endHour = aEndHour;
      endMinute = aEndMinute; 

    };

    void TimeRange::returnTime(int a) {  
    
      int arr[4] = {this -> beginHour, this -> beginMinute, this -> endHour, this -> endMinute}; 
      
      

      }


