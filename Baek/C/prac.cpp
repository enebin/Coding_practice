// C++ program to Returns n % p  
// using Sieve of Eratosthenes 
#include <bits/stdc++.h> 
#include <iostream>
using namespace std; 
typedef long long int lld;
  
// Returns largest power of p that divides n! 
lld largestPower(lld n, lld p) 
{ 
    // Initialize result 
    lld x = 0; 
  
    // Calculate x = n/p + n/(p^2) + n/(p^3) + .... 
    while (n) { 
        n /= p; 
        x += n; 
    } 
    return x; 
} 
  
// Utility function to do modular exponentiation. 
// It returns (x^y) % p 
lld power(lld x, lld y, lld p) 
{ 
    lld res = 1; // Initialize result 
    x = x % p; // Update x if it is more than or 
    // equal to p 
    while (y > 0) { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res * x) % p; 
  
        // y must be even now 
        y = y >> 1; // y = y/2 
        x = (x * x) % p; 
    } 
    return res; 
} 
  
// Returns n! % p 
lld modFact(lld n, lld p) 
{ 
    if (n >= p) 
        return 0; 
  
    lld res = 1; 
  
    // Use Sieve of Eratosthenes to find all primes 
    // smaller than n 
    bool isPrime[n + 1]; 
    memset(isPrime, 1, sizeof(isPrime)); 
    for (lld i = 2; i * i <= n; i++) { 
        if (isPrime[i]) { 
            for (lld j = 2 * i; j <= n; j += i) 
                isPrime[j] = 0; 
        } 
    } 
  
    // Consider all primes found by Sieve 
    for (lld i = 2; i <= n; i++) { 
        if (isPrime[i]) { 
            // Find the largest power of prime 'i' that divides n 
            lld k = largestPower(n, i); 
  
            // Multiply result with (i^k) % p 
            res = (res * power(i, k, p)) % p; 
        } 
    } 
    return res; 
} 
  
// Driver method 
int main() 
{ 
    lld n, p;
    cin >> n >> p;
    cout << modFact(n, p); 
    return 0; 
} 
