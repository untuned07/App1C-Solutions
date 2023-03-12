#include <iostream>
using namespace std;

class Solution{
    public:
        void read(int arr[3][3]){
            cout<<"Values of 3x3 matrix: " <<endl;
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    cin >>arr[i][j];
                }
            }
        }
        void solve(){
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    solutionMatrix[i][j] = mat1[i][j] + mat2[i][j];
                }
            }
        }
        void display(int arr[3][3]){
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    cout <<arr[i][j] <<" ";
                }
                cout <<endl;
            }
        }
        int mat1[3][3];
        int mat2[3][3];
        int solutionMatrix[3][3];
};

int main(){
    Solution sol;
    sol.read(sol.mat1);
    sol.read(sol.mat2);
    sol.solve();
    sol.display(sol.solutionMatrix);
    return 0;
}