#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
    int sum=0;
    for(int i=argc-1;i>0;i--)
    {
        sum=sum+atoi(argv[i]);
    }
    printf("Total: %d\n",sum);
    return 0;
}

