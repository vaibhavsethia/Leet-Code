#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Flag = 0;
    cin>>N;

    map<int,int> Map;
    
    for(int i=0; i<N; i++){
        int Temp;cin>>Temp;
        Map[Temp]++;
    }

    for(auto itr=Map.begin(); itr!=Map.end(); itr++){
        if(Map.find(itr->first * -1) == Map.end() || Map.find(itr->first * -1)->second != itr->second){
            Flag = 1;
            break;
        }
    }

    if(Flag){
        cout<<"No"<<endl;
    } else{
        cout<<"Yes"<<endl;
    }
}
