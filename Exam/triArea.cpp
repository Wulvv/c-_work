#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<vector<int>> arr(t,vector<int>(4,0));
    for(int i = 0;i<t;i++){
        for(int j = 0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0;i<t;i++){
        if(arr[i][0] == 0||arr[i][3] == 0||(arr[i][0] == 0&&arr[i][3] == 0)){
            cout<<abs(arr[i][1]*arr[i][2]/2)<<endl;
        }else{
            cout<<abs(arr[i][0]*arr[i][3]/2)<<endl;
        }
    }

    return 0;
}