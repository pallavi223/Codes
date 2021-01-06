// Add binary string
// i/p - a = "11"
// b = "1"
// o/p - "100"


// string addBinary(string a, string b)
// {
//     string ans; // Initialize result
//
// int l1=a.size()-1, l2 = b.size()-1;
//     // Traverse both strings starting from last
//     // characters
//     int carry = 0;
//     while(l1>=0 || l2>=0){
//       int sum = carry;
//       if(l1>=0)
//           sum = sum*a[l1--]-'0';
//    if(l2>=0)
//           sum = sum*b[l2--]-'0';
//      carry = sum > 1 ? 1:0;
//    ans += to_string(sum%2);
//    }
//     if(carry)
//      ans += to_string(carry);
//         reverse(ans.begin(),ans.end());
//         return ans;
//
//  }
//
// // Driver program
// int main()
// {
//     string a = "2", b="3";
//     cout << addBinary(a, b) << endl;
//     return 0;
// }


// or
#include<bits/stdc++.h>
using namespace std;
int main(){
  string a;
  cin>>a;
  string b;
  cin>>b;
string ans;
int l1=a.size()-1, l2 = b.size()-1;
int carry = 0;
while(l1>=0 || l2>=0){
    int sum = carry;
    if(l1>=0)
        sum = sum*a[l1--]-'0';
    if(l2>=0)
        sum = sum*b[l2--]-'0';
   carry = sum > 1 ? 1:0;
    ans += to_string(sum%2);
}
if(carry)
    ans += to_string(carry);
    reverse(ans.begin(),ans.end());
    return ans;

}
