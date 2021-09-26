//header file date.hpp to declare your class
class Date {
    public: 

        Date(int month, int day, int year); 

    private:
        
        
        int month;
        int day;
        bool appointed[48];
        void check_date();

    
};  
  /*      char first_letter; // of month
        char second_letter // of month
        char third_letter // of month */

        //Can replace the char values with string types instead. I initialized the <string> library. On second thought we can just use the number of the month. So september is 10, october is 11 and so on and so forth. 
//};


