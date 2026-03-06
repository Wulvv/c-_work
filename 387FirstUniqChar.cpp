#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int getindex(string s,char c){
    for(int i = 0;i<s.size();i++){
        if(c==s[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int count[26]={0};//数组初始化
    string s;
    getline(cin,s);
    for(int i = 0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z'){//排除出现大写字母的可能
            count[s[i]-'a']++;
        }
    }

    for(int i = 0;i<26;i++){
        if(count[i]==1){
            cout<<getindex(s,i+'a');
            return 0;
        }
    }

    return 0;
}