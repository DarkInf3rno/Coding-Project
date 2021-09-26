//header file time.hpp to declare your class
class TimeRange {

    public: 
        int b; 
        TimeRange(); 
        int returnTime(int b); 
        
        TimeRange(int aBeginHour, int aBeginMinute, int aEndHour, int aEndMinute); 
        
     private: 
        int beginHour;
        int beginMinute;

        int endHour;
        int endMinute; 

};




/*[2.5 marks] Implement the TimeRange class. It should have four member variables:
beginHour and beginMinute, endHour and endMinute, all of which are int type.
Implement the constructor function(s), get and set functions, and output function to print
out the class information. Similarly, implement member function isValid to check if the
user input beginning time and end time are a multiple of 30 minutes and fall within the
valid time range as described in our assumptions.
3) Use const variables to define the three holidays: */