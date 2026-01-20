#include<stdio.h>
#include<string.h>

int main()
{
    char str[102];
    while(1){

        fgets(str, sizeof(str), stdin);
        if(str[0] == '.' && (str[1] == '\n' || str[1] == '\0')){ //&& (str[1] == '\n' || str[1] == '\0') 이 문장이 없으면 .sdfa 이런 문자열 도 끝내버림
            break;
        }

        int top = -1;
        int state = 1;
        char stack[102];

        for(int i = 0 ; str[i] != '\0' ; i++){
            char c = str[i];

            if(c == '(' || c == '['){
                top++;
                stack[top] = c;
            }
            else if(c == ')'){
                if(stack[top] != '('){
                    state = 0;
                    break;
                }
                else if(stack[top] == '('){
                    top--;
                }
            }
            else if(c == ']'){
                if(stack[top] != '['){
                    state = 0;
                    break;
                }
                else if(stack[top] == '['){
                    top--;
                }
            }

        }
        if(state == 0 || top != -1){
            printf("no\n");
        }
        else{
            printf("yes\n");
        }
    }
    return 0;
}