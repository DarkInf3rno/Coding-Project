//header file time.hpp to declare your class
//Use this command to debug
// g++ -c time.hpp 

/*Notes for tomorrow 

      - Recall that 60 min and 30 min increments can be described in terms of 100 point scale. 0.6*100 is 60 and similarly 0.6*50 is 30. Hence by using a factor of 0.6, we can convert between using a 60 point scale for human use and a 100 point scale for computer use

      - Complete the functions. Diagnose the issues with cin and cout not being recognized. Could be an issue with cout and cin being in the .hpp file

      - See date.cpp and how they use the THIS -> operator. Replicate that in this .h file to make sure that any computer will understand It

      - 

    - 



*/

using namespace std; 

class TimeRange {

    public: 

        int b; 

        //Functions 
          //Constructors
            TimeRange(int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute);

          //FUnction functions

            void getTimeRange(); //Gets the desired time range from the user

            //Functions to help getTimeRange. Also provide more precision
                int getBeginMin(int usrBeginMin); 
                int getBeginHour(int usrBeginHour); 

                int getEndMin(int usrEndMin); 
                int getEndHour(int usrEndHour);

            void setTimeRange(int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute); //Sets the desired time range

     private: 
        int beginHour;
        int beginMinute;

        int endHour;
        int endMinute; 

};

          void TimeRange::setTimeRange(int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute) {

              beginHour = inBeginHour; 
              beginMinute = inBeginMinute;

              endHour = inEndHour; 
              endMinute = inEndMinute; 
          }

          TimeRange::TimeRange(int inBeginHour, int inBeginMinute, int inEndHour, int inEndMinute) {

              beginHour = inBeginHour;
              beginMinute = inBeginMinute;
              endHour = inEndHour; 
              endMinute = inEndMinute; 

              cout << "lets be a potato";

          }

          void TimeRange::getTimeRange() {
            int a;
            std::cin << a;

            int b;
            std::cin << b;

            int c;
            std::cin << c;

            int d;
            std::cin << d;
              
          }

          int TimeRange::getBeginMin(int usrBeginMin) {
      
              int holder1 = usrBeginMin; 
              return holder1; 

          }
          
          int TimeRange::getBeginHour(int usrBeginHour) {

               int holder2 = usrBeginHour; 
               return holder2;
          }

          int TimeRange::getEndMin(int usrEndMin) {

             int holder3 = usrEndMin; 
             return holder3;
          }
                
          int TimeRange::getEndHour(int usrEndHour) {

            int holder4 = usrEndHour; 
            return holder4;

          }

          




/*[2.5 marks] Implement the TimeRange class. It should have four member variables:
beginHour and beginMinute, endHour and endMinute, all of which are int type. - Done 
Implement the constructor function(s), get and set functions, and output function to print
out the class information. Similarly, implement member function isValid to check if the
user input beginning time and end time are a multiple of 30 minutes and fall within the
valid time range as described in our assumptions.
3) Use const variables to define the three holidays: */

