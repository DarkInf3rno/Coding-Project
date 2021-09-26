//date.cpp to implement your class 


#include "date.hpp"

      void input();
      void output();

      void set(int new_month, int new_day);
      // These two ints form a possible date
      // Then it is reset according to arguments

      int get_month();
      // Returns the month

      int get_day();
      // Returns the day of the month 

      void set_time(bool appointed_time[48]); 
      // Pick an appointed time
      // Reset to the arguments

      Date::Date(int amonth, int aday, int ayear) {
        this -> month = amonth;
        this -> day = aday;
        this -> year = ayear; 
      }

           
/*
Date::input() {

  cout << "Enter the month: ";
  cin >> month;
  cout << "Enter the day of month: ";
  cin >> day;
  check_date();

    

}
Date::output(){
  

}
Date::set(int new_month, int new_day ){
  month = new_month;
  day = new_day;
  check_date();
}

Date::check_date(){
  if ((month < 9) || (month > 12) || (day < 1 ) || (day > 31 ))
  {
      cout << "You can not book an appointment on this day. Aborting program. \n";
      exit(1);
  }
  if (())
}

Date::get_month(){
  if (first_letter == 'S' && second_letter == 'e' && third_letter == 'p')
  return 9;
  if (first_letter == 'O' && second_letter == 'c' && third_letter == 't')
  return 10;
  if (first_letter == 'N' && second_letter == 'o' && third_letter == 'v' )
  return 11;
  if (first_letter == 'D' && second_letter == 'e' && third_letter =='c')
  return 12;

  else 
  return 1
  
}

Date::get_day(){
  return day;
} */