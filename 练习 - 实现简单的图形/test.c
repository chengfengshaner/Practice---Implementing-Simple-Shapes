//#include <stdio.h>
//
//int main() 
//{
//    int n = 30;      //���εĴ�С�����Ը�����Ҫ����
//    for (int i = 1; i <= n + 1; i++)
//    {
//        for (int j = 1; j <= 2 * n - 1; j++) 
//        {
//            if ((i == 1 || i == n + 1) && j >= n - i + 2 && j <= n + i - 1) 
//            {       // �������е��м䲿��
//                printf("*");
//            }
//            else if (i >= 2 && i <= n && (j == n - i + 1 || j == n + i - 1)) 
//            {       // ����������Ǻ�
//                printf("*");
//            }
//            else if (i == n / 2 + 1 && abs(j - n / 2 - 0.5) <= n / 2 - 2) 
//            {        // �м���Ǻ�
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
#include <math.h>                           //������ѧ�⣬���ڼ������ֵ

int main() 
 {
    int n = 30;                             //���εĴ�С�����Ը�����Ҫ����
    for (int i = -n / 2; i <= n / 2; ++i) 
    {                                       //��Χ���󵽸����԰��������°벿��
        for (int j = -n; j <= n; ++j) 
        {
            if ((abs(i) + abs(j) <= n / 2) && //�������岿��
                (!(abs(i) == n / 2 && abs(j) == 0)) && /*ȥ�����ĵ�*/ (!(abs(i) == n / 2 - 1 && abs(j) == 1)))
            {                               // ȥ���ϲ���С���
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
