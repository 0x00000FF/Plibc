#include <math.h>

int abs(int n) {
    return (int)(n & 0x7fffffff);
}

long labs(int n) {
    return (long)(n & 0x7fffffff);
}

long long llabs(long long n) {
    return (long long)(n & 0x7fffffffffffffff);
}