/*
    10071 - Back to High School Physics | Problem statement: https://onlinejudge.org/external/100/10071.pdf | uDebug: https://www.udebug.com/UVa/10071

    Author: Elkin Narváez
    Email: elkinnarvaez2406@gmail.com
    Online Judge Profile: https://uhunt.onlinejudge.org/id/1256677
    Last submission: 12/15/2021
*/

#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
    int v, t;
    while(scanf("%d %d", &v, &t) != EOF){
        printf("%d\n", 2 * v * t);
    }
    return 0;
}