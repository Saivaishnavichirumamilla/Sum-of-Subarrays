/*

Approach:

->Count the number of subarrays an element can be present
-> And multiply that "count" with the element so that , we're calcualting the every element contribution to the total sum of subarrays
-> arr[] = [1, 2, 3], n = 3

All subarrays :  [1], [1, 2], [1, 2, 3], [2], [2, 3], [3]

here first element ‘arr[0]’ appears 3 times    
second element ‘arr[1]’ appears 4 times  
third element ‘arr[2]’ appears 3 times

Every element arr[i] appears in two types of subsets:

i)  In subarrays beginning with arr[i].
There are    (n-i) such subsets.
For example [2] appears   in [2] and [2, 3].

ii) In subarrays where this element is not  first element.
There are (n-i)*i such subsets.
For example [2] appears in [1, 2] and [1, 2, 3].

Total number of subarrays that each element will present

= (n-i) + (n-i)*i  

=(n-i)+(ni-i2)

=n+ni-i(i+1)

=n(i+1)-i(i+1)   =  (n-i)(i+1)

For arr[] = {1, 2, 3}, sum of subarrays is:

  arr[0] * ( 0 + 1 ) * ( 3 – 0 ) + 
  arr[1] * ( 1 + 1 ) * ( 3 – 1 ) +
  arr[2] * ( 2 + 1 ) * ( 3 – 2 ) 

 */


class Solution {
  public:
    long long subarraySum(vector<int>& arr) {
       int n = arr.size();
   long long result = 0,mod=1e9+7;
     
    // Pick starting point
    for (long long i = 0; i < n; i++) {
         result+= arr[i]*(n-i)*(i+1);
        }
    
    return result%mod;
        
        
    }
};
