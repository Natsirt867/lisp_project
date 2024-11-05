#include <stdio.h>

int helloWorld(int argInput){
    int i = 0;
    for (i < argInput;; i++){
        printf("Hello World!\n");
        if (i >= argInput){
            return 0;
        }
    }
    return 0;  
}

int main(){
    helloWorld(6);
}
