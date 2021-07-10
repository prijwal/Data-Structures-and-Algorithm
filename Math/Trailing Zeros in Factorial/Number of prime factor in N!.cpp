int Solution::trailingZeroes(int n) {
    int cnt=0;
    for(int i=5;n/i>=1;i*=5)
        cnt+=n/i;
    return cnt;
}
// We can easily observe that the number of 2s in p
// rime factors is always more than or equal to the 
// number of 5s. So if we count 5s in prime factors,
// we are done. How to count the total number of 5s 
// in prime factors of n!? 

// Trailing 0s in n! = Count of 5s in prime factors of n!
//                   = floor(n/5) + floor(n/25) + floor(n/125) + ....
