//#include <stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	//
//	int k =11;
//	int left = 0;
//	int right = sizeof(arr)/ sizeof(arr[0])-1;
//	
//	int mid = left + (right - left) / 2;
//	if (k > arr[right])
//	{
//		printf("找不到");
//		goto finish;
//	}
//	while (right >= left)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] == k)
//		{
//			printf("找到了");
//			break;
//		}
//		
//	}
//	printf(" %d", mid);
//	finish:
//	return 0;
//}
//int find(int arr[], int right, int k)
//{
//	int left = 0;
//	while (right >= left)
//	{
//		int mid = left + (right - left) / 2;
//
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k == arr[mid])
//		{
//			return mid;
//		}
//		
//	}
//	return -1;
//}
//int main()
//{
//	
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 11;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	int final = find(arr, right,k);
//	if (final != -1 )
//	{
//		printf("找到了 %d" ,final);
//	}
//	else
//	{
//		printf("没找到");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    scanf("%d", &i);
//    while (i)
//    {
//        printf("\|/");
//        printf("-O-");
//
//        printf("/|\\");
//
//            i--;
//
//    }
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() 
//{
//    int n;
//    scanf("%d", &n);
//
//    int size = 2 * n + 1; // 网格尺寸
//
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            if (i == n && j == n) {
//                printf("O"); // 中心
//            }
//            else if (i == n) {
//                printf("-"); // 水平线
//            }
//            else if (j == n) {
//                printf("|"); // 垂直线
//            }
//            else if (i == j) {
//                printf("\\"); // 主对角线（注意转义）
//            }
//            else if (i + j == size - 1) {
//                printf("/"); // 副对角线
//            }
//            else {
//                printf(" "); // 空格
//            }
//        }
//        printf("\n"); // 换行
//    }
//
//    return 0;
//}
#/*include <stdio.h>

int main() {
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%f%", b / a);
    return 0;
}*/

//int main() {
//    int min, hour, sec, input;
//    scanf("%d", &input);
//    if (input / 3600 > 1)
//    {
//        hour = input / 3600;
//        min = (input - hour * 3600) / 60;
//        sec = (input - hour * 3600 - min * 60);
//    }
//    else if (input / 3600 == 0)
//    {
//        hour = input / 3600;
//        min = 0;
//        sec = 0;
//    }
//    else if (input / 3600 < 0)
//    {
//        hour = 0;
//        min = input / 60;
//        sec = (input - min * 60);
//    }
//    printf("%d %d %d", hour, min, sec);
//
//    return 0;
//}
//int main() {
//    int n;
//    int a = 0;
//    a = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n + 1; i++)
//    {
//        a += i;
//    }
//    printf("%d", a);
//    return 0;
//}
//int main() {
//    int a, b;
//    int i = 0;
//    int sum[100] = {0};
//    scanf("%d", &i);
//    for (int c = 0; c < i; c++)
//    {
//        scanf("%d %d", &a, &b);
//        sum[c] = a + b;
//
//    }
//    for (int c = 0; c < i; c++)
//    {
//        printf("%d\n", sum[c]);
//
//    }
//    return 0;
//}
//int main() {
//    int a, b;
//    int i = 0;
//    int sum[100] = { 0 };
//    int n = 0;
//    while (1)
//    {
//        scanf("%d %d", &a, &b);
//        sum[i] = a + b;
//        if (sum[i] == 0)
//        {
//            for (n = 0;n<i; n++)
//            {
//                printf("%d\n", sum[n]);
//            }
//            break;
//        }
//        i++;
//    }
//    return 0;
//}
//#include <stdio.h>
//int function(int arr[])
//{
//    for(int k=0;;k++)
//    {
//    
//        for (int i = 2; i <= arr[k]; i++)
//        {
//            if (arr[k] == i)
//            {
//                continue;
//            }
//            if (arr[k] > 1 && arr[k] % i == 0)
//            {
//                return 1;
//            }
//
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int a, b;
//    scanf("%d", &a);
//    int arr[10000] = {0};
//    int brr[10000] = { 0 };
//    for (int b = 1; b <= a; b++)
//    {
//        scanf("%d", &arr[b]);
//    }
//    for (int j = 0; j <a; j++)
//    {
//        brr[j] = function(arr[j]);
//        if (brr[j] == 1)
//        {
//            printf("Yes\n");
//        }
//        else
//        {
//            printf("No\n");
//        }
//    }
//    return 0;
//}
//int func(int a)
//{
//    if (a <= 1)return 1;
//    for (int i = 2; i < a; i++)
//    {
//        if (a > 1 && a % i == 0 )
//        {
//            return 1;
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int a, b;
//    scanf("%d", &a);
//    int arr[10000] = { 0 };
//    int brr[10000] = { 0 };
//
//    for (int b = 1; b <= a; b++)
//    {
//        scanf("%d", &arr[b - 1]);
//    }
//    for (int t = 0; t < a; t++)
//    {
//        brr[t] = func(arr[t]);
//    }
//    for (int j = 0; j <a; j++)
//    {
//        if (brr[j] == 1 )
//            printf("No\n");
//        else
//            printf("Yes\n");
//    }
//    return 0;
//}
//int main() {
//    int a, b;
//    scanf("%d", &b);
//    int c = 0;
//    for (a = 1; a <= b; a++)
//    {
//        if (a % 2 == 0)
//        {
//            c = -a;
//        }
//        else
//        {
//            c += a;
//
//        }
//    }
//    printf("%d", c);
//    return 0;
//}
//#include <stdbool.h>
//#include <stdio.h>
//int func(int a)
//{
//    while (a>0)
//    {
//        int b = a % 10;
//        a /= 10;
//        if (b == 4)
//        {
//            return 1;
//        }
//    }
//    return 0;
//}
//int main() {
//    int a, b;
//    scanf("%d", &a);
//    for (b = 1; b <= a; b++)
//    {
//        if (b % 4 == 0 | func(b) == 1)
//        {
//            continue;
//        }
//        else
//        {
//            printf("%d ", b);
//        }
//    }
//    return 0;
//}
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("0");
    }
    else if (n == 2 || n == 3)
    {
        printf("1");
    }
    else if (n >= 4)
    {
        int arr[100] = { 0 };
        arr[n] = arr[n - 3] + 2 * arr[n - 2] + arr[n - 1];
    }
    printf("%d", n);
    return 0;
}