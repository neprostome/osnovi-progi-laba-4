#include <stdio.h>
#include <stdbool.h>

/*
int dec2bin(int num)
{
    int bin = 0, k = 1;

    while (num)
    {
        bin += (num % 2) * k;
        k *= 10;
        num /= 2;
    }

    return bin;
}
*/

int main() {
    int x;
    //char buf[100];
    scanf("%d", &x);
    int dL = 88, dR = 99;
    int a = ((x < dL) || (x > dR)) + 1;
    printf("If the number below is 1, then the number you entered falls within the required range, otherwise it doesnt fall within\nthe required range:\n%d\n", a);
    //int bin = dec2bin(x);
    //int adcResult = 333;
    printf("Type dignit for another ex\n");
    int x1;
    scanf("%d", &x1);
    bool c = x1 & (1 << 10);
    printf("%d", c);
}
    /*
    char newbstr[1000];
    itoa(x1, newbstr, 2);
    //printf("%d\n", strlen(newbstr));
    //printf("%s\n", newbstr);
    if (strlen(newbstr) >= 10) {
        printf("tenth bit of the entered number in the binary system: %c\n", newbstr[9]);
        return 0;
    }
    else{
        char newostr[1000];
        itoa(x, newostr, 8);
        //printf("%d\n", strlen(newostr));
        //printf("%s\n", newostr);
        if(strlen(newostr) >= 10){
            printf("tenth bit of the entered number in the octal system: %c\n", newostr[9]);
            return 0;
        }
        else{
            char newdstr[1000];
            itoa(x, newdstr, 16);
            //printf("%d\n", strlen(newdstr));
            //printf("%s\n", newdstr);
            if(strlen(newdstr) >= 10){
                printf("tenth bit of the entered number in the hexadecimal system: %c\n", newdstr[9]);
                return 0;
            }
            else{
                printf("oh shit...\nit seems that there is simply no tenth bit in this number((\nshocked plus tilted...\n");
            }
        }
    }

    //printf("%o\n", newbstr[9]);
    //printf("%x\n", newbstr[9]);
    return 0;
}

#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, g;
    char s[2][100] = {"Yah", "No"};
    scanf("%d", &a);
    bool checker = true;

    for(int i = 88; i <= 99; i++)
        checker *= (a - i);

    printf("%s\n", s[checker]);

    scanf("%d", &x1);
    bool c = x1 & (1 << 10);
    printf("%d", c);
}
 */
