#include<stdio.h>
int main()
{
    char name[105];
    int temp[26]={0};
    scanf("%s", name);


    // for (int i=0; i<150; i++){

    //     temp[i] = 0;
    // }

    int num;

    for (int i=0; name[i] !='\0'; i++){
            if (name[i]>='a' && name[i]<= 'z'){


                    temp[name[i]-'a'] = 1;


            }
    }

    int sum = 0;
    for (int i=0; i < 26; i++){

         sum += temp[i];
    }


    // sum= sum-1;

    // printf("%d\n", sum);
    if (sum%2!=0){
        printf("IGNORE HIM!\n");
    }

    else{
        printf("CHAT WITH HER!\n");
    }
}