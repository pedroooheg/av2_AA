class Solution{
private:

    long long binaryToDecimal(string s)
    {
        long long result = 0;

        for(char c : s)
            result = result * 2 + (c - '0');

        return result;
    }

    int bitLength(long long x)
    {
        int bits = 0;

        while(x)
        {
            bits++;
            x >>= 1;
        }

        return max(bits, 1);
    }

    long long karatsuba(long long x, long long y)
    {
        if(x < 2 || y < 2)
            return x * y;

        int n = max(bitLength(x), bitLength(y));
        int m = n / 2;

        long long high1 = x >> m;
        long long low1  = x & ((1LL << m) - 1);

        long long high2 = y >> m;
        long long low2  = y & ((1LL << m) - 1);

        long long z0 = karatsuba(low1, low2);
        long long z1 = karatsuba(low1 + high1, low2 + high2);
        long long z2 = karatsuba(high1, high2);

        return (z2 << (2 * m))
             + ((z1 - z2 - z0) << m)
             + z0;
    }

public:

    long long karatsubaAlgo(string A, string B)
    {
        return karatsuba(
            binaryToDecimal(A),
            binaryToDecimal(B)
        );
    }
};