#include<iostream>
using namespace std;
long fact(long n) {
   if(n == 0 || n == 1 )
      return 1;
   return n*fact(n-1);
}
int countPermutation(string str) {
   int freq[26] = {0};
   for(int i = 0; i<str.size(); i++) {
      freq[str[i] - 'a']++; //get the frequency of each characters individually
   }
   int res = fact(str.size()); //n! for string of length n
   for(int i = 0; i<26; i++) {
      if(freq[i] > 1)
         res /= fact(freq[i]); //divide n! by (number of occurrences of each characters)!
   }
   return res;
}
int permutations(){
   string n;
   cout << "Enter a number to count number of permutations can be possible: ";
   cin >> n;
   cout << "\nThe number of permutations: " << countPermutation(n);
}