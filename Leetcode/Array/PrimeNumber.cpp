int isPrime(int N)
{
    // code here
    if (N == 1) // if N = 1 return 0
        return 0;
    for (int i = 2; i * i <= N; i++) //// loop from 2 to sqrt(N)
        if (N % i == 0)              // if N is divisble by any other number return 0
            return 0;
    return 1; // return 1 if N is not divisible by any other number.
}