#include <iostream>

using namespace std;

enum Quarter {
  Q1,
  Q2,
  Q3,
  Q4
};
class MyDate {
  //TODO: declare data members : date, month, year
  int dd;
  int mm;
  int yy;
  public:
  //TODO: default constructor
  
  MyDate(){
      dd = 0;
      mm = 0;
      yy = 0;
  }
  //TODO: parameterized constructor
  
  MyDate(int d, int m, int y){
      dd = d;
      mm = m;
      yy = y;
  }
  //TODO: member function to check leap year not
  
  bool isInLeapYear(){
      if(((yy % 4 == 0) && (yy % 100 != 0)) || (yy % 400 == 0)){
          return true;
      }
      else{
          return false;
      }
  }
  //TODO: member function to count no.of days elapsed from 1st January
  int countDays(){
      int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
      
      int i;
      int total = 0;
      
      for(i = 0; i < mm -1; i ++){
        total = total + arr[i];    
      }
      
      total = total + dd;
      
      /*if(((yy % 4 == 0) && (yy % 100 != 0)) || (yy % 400 == 0)){
          total ++;
      }*/
      return total;
  }
  //TODO: member function to Quarter to which date belongs to
  
  Quarter quarter(){
      int q = mm / 3;
      int r = mm % 3;
      
      if(r != 0){
          q = q + 1;
      }
      
      if(q == 1){
          return Q1;
      }
      if(q == 2){
          return Q2;
      }
      if (q == 3){
          return Q3;
      }
      if (q == 4){
          return Q4;
      }
  }
  void display() const {
     std::cout << dd << "/" << mm << "/" << yy << "\n";
  }
};
int main() {
  int dd, mm, yy;
  std::cin >> dd >> mm >> yy;

  MyDate d1(dd,mm,yy);
  d1.display();
  if(d1.isInLeapYear())
    std::cout << "yes\n";
  else
    std::cout << "no\n";
  std::cout << d1.countDays() << "\n";
  switch(d1.quarter()) {
    case Q1 : std::cout << "Q1\n";
              break;
    case Q2 : std::cout << "Q2\n";
              break;
    case Q3 : std::cout << "Q3\n";
              break;
    case Q4 : std::cout << "Q4\n";
              break;
  }
  return 0;
}
