//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution {
public:
    long long pairAndSum(int n, long long arr[]) {
        // Optimal Approach: Counting the pairs where the i-th bit is set in elements of arr
        
        // Constant for the number of bits in the data type of n
        constexpr int BITS{ 8 * sizeof( n )};
        // Initialize the sum to zero
        long long sum{};
        
        // Iterate over each bit position from 0 to BITS - 1
        for ( int i{}; i < BITS; ++i ) {
            // Count the number of elements in arr where the i-th bit is set
            const long long c{ count_if( arr, arr + n,
                [ i ]( int e ){ return e & 1<<i; })};
            
            // Calculate the contribution of the current bit position to the sum
            // Multiply by (1 << i) to set the corresponding bit in the result
            // Then multiply by c * (c - 1) / 2 to count pairs and avoid double counting
            sum += ( 1<<i ) * c * ( c-1 ) >> 1;
        }
        
        // Return the final sum
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        long long Arr[N];
        for (int i = 0; i < N; i++) {
            cin >> Arr[i];
        }
        Solution ob;
        cout << ob.pairAndSum(N, Arr) << endl;
    }
    return 0;
}
// } Driver Code Ends