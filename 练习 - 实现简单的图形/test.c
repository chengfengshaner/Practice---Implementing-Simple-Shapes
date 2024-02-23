//#include <stdio.h>
//
//int main() 
//{
//    int n = 30;      //心形的大小，可以根据需要调整
//    for (int i = 1; i <= n + 1; i++)
//    {
//        for (int j = 1; j <= 2 * n - 1; j++) 
//        {
//            if ((i == 1 || i == n + 1) && j >= n - i + 2 && j <= n + i - 1) 
//            {       // 上下两行的中间部分
//                printf("*");
//            }
//            else if (i >= 2 && i <= n && (j == n - i + 1 || j == n + i - 1)) 
//            {       // 左右两侧的星号
//                printf("*");
//            }
//            else if (i == n / 2 + 1 && abs(j - n / 2 - 0.5) <= n / 2 - 2) 
//            {        // 中间的星号
//                printf("*");
//            }
//            else {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

#include <stdio.h>
#include <math.h>                           //引入数学库，用于计算绝对值

int main() 
 {
    int n = 30;                             //心形的大小，可以根据需要调整
    for (int i = -n / 2; i <= n / 2; ++i) 
    {                                       //范围扩大到负数以包括心形下半部分
        for (int j = -n; j <= n; ++j) 
        {
            if ((abs(i) + abs(j) <= n / 2) && //心形主体部分
                (!(abs(i) == n / 2 && abs(j) == 0)) && /*去除中心点*/ (!(abs(i) == n / 2 - 1 && abs(j) == 1)))
            {                               // 去除上部的小尖角
                printf("*");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
