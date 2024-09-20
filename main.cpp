#include ".assignment/test.h"

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result &result)
{
    // 在这里完成你的代码
    int x = a, y = b, z = c;

    if (x > y)
        std::swap(x, y);
    if (y > z)
        std::swap(y, z);
    if (x > y)
        std::swap(x, y);

    result.min = x;
    result.mid = y;
    result.max = z;
}

