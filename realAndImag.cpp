#include <iostream>

using namespace std;
class Complex {
  //TODO: data members : real, imag
  int real;
  int imag;
  public:
  //TODO: default constructor
  Complex(){
      real = 0;
      imag = 0;
  }
  
  //TODO: parameterized constructor
  
  Complex(int r, int i){
      real = r;
      imag = i;
  }
  //TODO: function to get real part
  
  int getReal(){
      return real;
  }
  //TODO: function to get imaginary part
  
  int getImag(){
      return imag;
  }
  //TODO: operator+, for addition of two complex objects
  
  Complex operator + (Complex &temp){
    Complex add;
    add.real = real + temp.real;
    add.imag = imag + temp.imag;
    
    return add;
  }
  // bool function
  
  bool operator ==(Complex &temp){
      return real == temp.real && imag == temp.imag;
  }
  
  void display() const {
    std::cout << real << "+" << imag << "i" << "\n";
  }
};
int main() {
  int r1,i1,r2,i2;
  std::cin >> r1 >> i1 >> r2 >> i2;
  Complex c1(r1, i1);
  Complex c2(r2, i2);
  Complex res;
  res = c1 + c2;
  res.display();
  std::cout << c1.getReal() << "," << c1.getImag() << "\n";
  std::cout << c2.getReal() << "," << c2.getImag() << "\n";
  std::cout << res.getReal() << "," << res.getImag() << "\n";
  int r3,i3,r4,i4;
  std::cin >> r3 >> i3 >> r4 >> i4;
  Complex c3(r3,i3);
  Complex c4(r4,i4);
  if(c3==c4)
    std::cout << "equal\n";
  else
    std::cout << "not equal\n";
  return 0;
}
