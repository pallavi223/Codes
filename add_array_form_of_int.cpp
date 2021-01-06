// Add to array form of integer - AMazon, Faceook
// add two string
// i/p - a = "123" , b="456" o/p - "579"
vector<int> addToArrayForm(vector<int> &A, int k){
  vector<int> v;
  string s = to_string(k); // convert int to string to split the integer
  int l1 = A.size(), l2 = s.size(), carry = 0;
  while(l1>=0 || l2>=0){
    int sum = carry;
    if(l1>=0){
    sum = sum+A[l1--];
  }
  if(l2>=0){
    sum = sum+s[l2--]-'0';
  }
  v.push_back(sum%10); // carry ko add
  carry = sum/10;

  if(carry>0){
    v.push_back(carry);
  }
  reverse(v.begin(),v.end());
  return vector;
}
}
or
// best solution
class Solution {
public:
    vector<int> addToArrayForm(vector<int> &A, int K)
    {
        int i, size = A.size();

        for (i = size - 1; i >= 0 && K != 0; i--)
        {
            K = K + A[i];
            A[i] = K % 10;
            K = K / 10;
        }
        while (K != 0)
        {
            A.insert(A.begin(), K % 10);
            K = K / 10;
        }
        return A;
    }
};

or
int index_1 = num1.length() - 1;
     int index_2 = num2.length() - 1;
     int carry = 0;
     string ans;

     while(index_1 > -1 || index_2 > -1) {
         int digit_1 = (index_1 >= 0) ? num1[index_1--] - '0' : 0;
         int digit_2 = (index_2 >= 0) ? num2[index_2--] - '0' : 0;
         int sum = digit_1 + digit_2 + carry;

         //> put digit into string
         ans.insert(ans.begin(), (sum % 10) + '0');

         carry = (sum > 9) ? sum / 10 : 0;
     }

     return (carry != 0) ? "1" + ans : ans;
 }
