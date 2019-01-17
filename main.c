#include <stdio.h>
struct Point
{
    int x;
    int y;
};
int main(){
int index=0;
    struct Point arr[100];
    printf("欢迎进入专场位置管理系统!\n");
     while (1)
    {
        printf("1---添加车辆位置\n");
        printf("2---删除车辆位置\n");
        printf("3---显示全部车辆位置\n");
        printf("4---返回离我的位置最近的车辆\n");
        printf("5---退出\n");
        printf("请选择相应功能\n");
        int code;
        scanf("%d", &code);
        if (code==1){}
        if (code==2){}
        if (code==3){}
        if (code==4){}
        if (code==5){
            printf("正在退出应用……\n");
            break;
        }
    }
    return 0;
}