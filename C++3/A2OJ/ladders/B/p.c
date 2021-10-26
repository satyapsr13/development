inline int popcount(int x)
{
    int count = 0;
    __asm__ volatile("POPCNT %1, %0;"
                     : "=r"(count)
                     : "r"(x)
                     :);
    return count;
}