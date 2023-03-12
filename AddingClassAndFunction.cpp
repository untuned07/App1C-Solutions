#include <iostream>
using namespace std;

class Solution{
    public:
        int addition(){
            cout <<"Enter First Number: ";
            cin >>num1;
            cout <<"Enter Second Number: ";
            cin >>num2;
            return num1 + num2;
        }
    private:
        int num1, num2;
        int sum;
};

int main(){
    Solution sol;
    cout <<sol.addition() <<endl;
    return 0;
}