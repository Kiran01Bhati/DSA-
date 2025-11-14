#include<iostream>
using namespace std;
int main(){
string s;
cin >> s;


// precompute
int hashh[256] = {0};
for(int i = 0; i <s.size();  i++){
    hashh[s[i]]++;
}
int q;
cin >> q;
while(q--){
 char c;
    cin >> c;

    // fetch
    cout<< "hashhed character is " << hashh[c] << endl;
}
return 0;
}