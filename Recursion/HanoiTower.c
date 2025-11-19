/* 
* Is it possible?
n = 1인 경우: 당연히 가능
n < k인 경우: 가능하다고 가정하자.
n = k인 경우: 먼저 가장 큰 하나를 제외한 나머지 k - 1개를 M으로 옮긴다.
다음으로 가장 큰 디스크를 L에서 R로 옮긴다. 그런 다음 존 전에 M으로 옮겨둔 k - 1개를 R로 옮긴다.

* How many movements?
T(n)을 n개의 디스크를 L에거 R로 옮길 때 필요한 movement의 횟수라고 하자.
T(1) = 1
T(n) = T(n - 1) + 1 + T(n - 1) = 2T(n - 1) + 1, n > 1인 경우
=> T(n) = 2^n - 1

* How?
- Move n Disks from the Starting Peg to the Destinaiton Peg
if n i s 1
    move disk 1 from the starting peg to the destination peg;
else
    move the top n - 1 disks from the stating peg to the temporary peg;
    move disk n from the starting peg to the destination peg;
    move the top n - 1 disks from the temporary peg to the destination peg;
*/
#include <stdio.h>

void showMoves(int n, char start, char dest, char temp){
    if (n == 1){
        printf("Move disk 1 from peg %c to peg %c\n", start, dest);
    }
    else{
        showMoves(n - 1, start, temp, dest);
        printf("Move disk %d from peg %c to peg %c\n", n, start, dest);
        showMoves(n - 1, temp, dest, start);
    }
}

int main(void){
    showMoves(4, 'L', 'R', 'M');
    return 0;
}