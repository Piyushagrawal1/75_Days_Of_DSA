class Solution {
public:

    int countPrimes(int n) {
        if (n <= 2) return 0; // 0 and 1 are not prime, and there are no primes less than 2

        vector<bool> prime(n, true); // all are prime marked already
        prime[0] = prime[1] = false; // 0 and 1 are not primes

        int ans = 0;

        for (int i = 2; i < n; i++) {
            if (prime[i]) {
                ans++;

                for (int j = 2 * i; j < n; j += i) {
                    prime[j] = false;
                }
            }
        }
        return ans;
    }
};
