#include <cmath>
using namespace std;

long double countDivisors(const long& n) 
{
    long double sum = 0;
    long double sq = int(sqrt(n));
    for (int i = 1; i < sq + 1; ++i)
    {
        sum += n / i;
    }
    return 2 * (sum + sq - sq * (sq + 1) * 0.5) - sq;
}