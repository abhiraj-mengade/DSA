class Solution {
public:
    string addBinary(string str1, string str2) {
   int i = str1.size() - 1;
   int j = str2.size() - 1;
int ds=0;
    string sum="";
   while(i>=0 || j>=0 || ds==1)
   {
      ds = ds + ((i >= 0) ? str1[i] - '0' : 0);
      ds = ds + ((j >= 0) ? str2[j] - '0' : 0);
      sum = char(ds % 2 + '0') + sum;
      ds = ds/2;
      i--;
      j--;
   }return sum;
        
    }
};