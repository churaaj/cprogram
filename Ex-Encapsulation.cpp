#include <iostream>

using namespace std;

class Box{
    
    private:
        int rollnumber;
        
    public:
        string name;
        Box(string n){
            name = n;
        }
        
        // to acess the private variable 
        // using setter method to set the variable
        
        void setter(int roll){
            rollnumber = roll;
        }
        
        int getter(){
            return rollnumber;
        }
};


int main() {
    string n;
    int roll;
    cin >> n;
    cin >> roll;
    
    // creating a constructor for the name input
    Box obj(n);
    
    //setting the variable of the private acess specifer
    obj.setter(roll);
    
    cout << obj.name;
    cout << "-"<<obj.getter();
    return 0;
}
