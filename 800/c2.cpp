#include<bits/std++.h>


const vector<int> candidate_primes = {
    2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59
};

void solve() {
    int n;
    if (!(std::cin >> n)) return;
        std::vector<long long> a(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    // We check our small prime candidates sequentially.
    for (int p : candidate_primes) {
        
        // Assume 'p' divides all a_i initially
        bool all_divisible_by_p = true;
        
        // Check if ANY element a[i] is NOT divisible by p.
        // If a[i] % p != 0, then gcd(a[i], p) = 1, and 'p' is the smallest answer.
        for (int i = 0; i < n; ++i) {
            if (a[i] % p != 0) {
                // Found a coprime element. This is the answer.
                std::cout << p << "\n";
                return;
            }
        }
    }

    // The constraints (a_i <= 10^18) guarantee that one of the candidate primes 
    // will be the answer. If the loop finishes, it means all a_i are divisible 
    // by the product of all primes up to 59, which is impossible for a_i <= 10^18. 
    // For a theoretically complete answer, we output -1 in the impossible case.
    std::cout << -1 << "\n";
}

int main() {
    // Fast I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    if (!(std::cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}