#include<bits/stdc++.h>
using namespace std;

int main(){
    // int a = 1;
    vector <int> v1;
    vector <int> v2;
    v1.push_back(1);
    
    for (int i=0;i<10;i++){
        for (int j=0;j<v1.size();j++){
            cout << v1[j] << " " ;
        }
        for (int j=0;j<v1.size();j++){
        int x = 0;
            int one = v1[j];
            while (v1[j]==one){
                x++;
                j++;
            }
            v2.push_back(x);
            v2.push_back(one);
            j--;
        }
        v1 = v2;
        v2.clear();
        cout << "\n";
    }


    return 0;
}