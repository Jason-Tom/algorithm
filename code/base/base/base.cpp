#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
#define open if(1)
int x=0,T=0;
int main(void){
    open
    freopen("test.txt","r",stdin);
//     printf("the num is %d \n", x);
//   输出语句，左边指定输出类型，可以加上修饰文字，要对应好格式，右边对应输出变量，不用加上&。
    int T;
    printf("请输入要输入的数字个数：\n");
    scanf("%d",&T);
    while(T!=0){
        printf("请输入数字：\n");
        scanf("%d",&x);
//       输入语句别忘了输入&
        printf("%d\n",x);
        T--;
    }
    return 0;
}
