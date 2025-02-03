   int n = arr.size();
   
    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2 * n + 1)) / 6; // Fixed formula for sum of squares
    long long S = 0, S2 = 0;
    
    for (int i = 0; i < n; i++) {
        S += arr[i];
        S2 += (long long)arr[i] * (long long)arr[i]; // Fix: Accumulate squares properly
    }
    
    long long val1 = S - SN;  // Sum Difference (X - Y)
    long long val2 = S2 - S2N; // Square Sum Difference (X² - Y²)
    
    val2 = val2 / val1;  // (X² - Y²) / (X - Y) gives (X + Y)
    
    long long x = (val1 + val2) / 2;  // X (Repeating number)
    long long y = x - val1;  // Y (Missing number)
    
    return {(int)x, (int)y};
}
