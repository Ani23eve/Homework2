#include <stdio.h>

int main(){
    /*int a,b;
    scanf("%d %d", &a, &b);

    if((!a&&b)||(a&&!b)){
        printf("True\n");
    }
    else {
        printf("False\n");
    }

    //ni@ani-pc:~/Day2$ gcc exer2.c -o exer2
    //ani@ani-pc:~/Day2$ ./exer2
    //ni@ani-pc:~/Day2$ gedit numbers.txt
    //ani@ani-pc:~/Day2$ ./exer2 < numbers.txt*/

    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);

    if((!a&&b)||(a&&!b) || (!a&&c) || (a&&!c) || (!b&&c) || (b&&!c))

    {
        printf("True\n");
    }
    else {
        printf("False\n");
    }
    return 0;
    //ani@ani-pc:~/Day2$ gcc exer2.c -o exer2
    //ani@ani-pc:~/Day2$ ./exer2
    //ani@ani-pc:~/Day2$ gedit numbers.txt
    //ani@ani-pc:~/Day2$ ./exer2 < numbers.txt


    return 0;
}