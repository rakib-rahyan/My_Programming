#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[101], b[101];
    scanf("%s",&a);
    scanf("%s",&b);

    int p = 0;
    for(int i =0; a[i] !='\0';i++){
        char c1 = tolower(a[i]);
        char c2 = tolower(b[i]);
        if(c1==c2){
            p=0;
        }
        else if(c1<c2){
            p =-1;
            break;
        }
        else{
            p=1;
            break;
        }
    }
    printf("%d",p);
    return 0;
}
