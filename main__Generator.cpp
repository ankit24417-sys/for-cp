#include <bits/stdc++.h>
using namespace std;

// --- HARDCORE RANDOM ENGINE ---
// Uses high-precision random number generation
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

// Helper function to get a random number between [l, r] (inclusive)
long long get_rand(long long l, long long r) {
    return uniform_int_distribution<long long>(l, r)(rng);
}

// --- GENERATOR FUNCTIONS ---

// 1. Generate an Array
void gen_array(int n, long long min_val, long long max_val) {
    for (int i = 0; i < n; ++i) {
        cout << get_rand(min_val, max_val) << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

// 2. Generate a String (lowercase English)
void gen_string(int len) {
    string s = "";
    for (int i = 0; i < len; ++i) {
        s += (char)('a' + get_rand(0, 25));
    }
    cout << s << endl;
}

// 3. Generate a Permutation (1 to N shuffled)
void gen_permutation(int n) {
    vector<int> p(n);
    iota(p.begin(), p.end(), 1); // Fill 1, 2, ..., n
    shuffle(p.begin(), p.end(), rng);
    for (int i = 0; i < n; ++i) {
        cout << p[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

// --- MAIN EXECUTION ---
int main() {
     int t = get_rand(1, 5); 
    cout << t << endl;
    while (t--) {
        // Example: Problem asks for N (1 to 100) and an Array
         // int l=get_rand(1,1000001);
         // cout<<l<<endl;
        int l=3;
        // Output Array of size N, values between -100 and 100
        gen_array(l,1,20);
        // Example: If problem asks for String, uncomment below:
        // int len = get_rand(1, 50);
        // cout << len << endl;
        // gen_string(len);

        // ---------------------------------------------
    }
    return 0;
}