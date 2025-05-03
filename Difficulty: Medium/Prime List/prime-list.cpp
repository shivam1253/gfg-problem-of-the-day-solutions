//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends

// User function Template for C++

/*
class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};
*/

class Solution {
  public:

    vector<int> generatePrimes(int limit) {
        vector<bool> isPrime(limit + 1, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i * i <= limit; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= limit; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        vector<int> primes;
        for (int i = 2; i <= limit; i++) {
            if (isPrime[i]) primes.push_back(i);
        }
        return primes;
    }

    int np(int n, vector<int>& v) {
        auto it = lower_bound(v.begin(), v.end(), n);
        if (it == v.end()) return v.back();
        if (*it == n) return n;
        if (it == v.begin()) return *it;
        int hi = *it;
        int lo = *(it - 1);
        return (hi - n < n - lo) ? hi : lo;
    }

    Node *primeList(Node *head) {
        vector<int> primes = generatePrimes(1e5);
        Node* temp = head;
        while (temp) {
            temp->val = (temp->val == 1) ? 2 : np(temp->val, primes);
            temp = temp->next;
        }
        return head;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        head = ob.primeList(head);
        printList(head);
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends