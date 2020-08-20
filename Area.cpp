#include <iostream>

using namespace std;

class Box{
    public:
        int length, breath;
        
    Box(int l, int b){
        length = l;
        breath = b;
    }
    
    void area(){
        int result = length * breath;
        cout << result;
    }
};


int main() {
    int l,b;
    cin >> l;
    cin >> b;
    Box obj1(l,b);
    obj1.area();
}
