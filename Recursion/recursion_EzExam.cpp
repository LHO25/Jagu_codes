#include <iostream>
using namespace std;

int func(int n){
    if (n == 0) return 0;        //base case
    else return n + func(n - 1); //recursive case
}

int factorial(int n){
    if(n == 0) return 1;
    else return n * factorial(n - 1);
}


double power(double x, int n){
    if(n == 0) return 1;
    else return x * power(x, n - 1);
}

int fibonacci(int n){
    if(n < 2) return n;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}

// double gcd(int m, int n){
//     if (m < n){
//         int tmp = m;
//         m = n;
//         n = tmp;
//     }
//     if (m % n == 0) return n;
//     else return gcd(n, m % n);
// }

int gcd(int p, int q){
    if(q == 0) return p;
    else return gcd(q, p % q);
}

int length(char *str){       // C-style string length
    if (*str == '\0') return 0;
    else return 1 + length(str + 1);
}

void printChars(char *str){
    if (*str == '\0') return;
    else {
        printf("%c\n", *str);
        printChars(str + 1);
    }
}

void printCharsReverse(char *str){
    if (*str == '\0') return;
    else {
        printCharsReverse(str + 1);
        printf("%c", *str);
    }
}

int search(int data[], int size, int target){
    if (size <= 0) return -1;
    else if (target == data[size-1]) return size - 1;
    else return search(data , size-1, target);
}

int findMax(int n, int data[]){
    if (n == 1) return data[0];
    else { return max(data[n - 1], findMax(n - 1, data)); }
}

void printInBinary(int n){
    if (n < 2) { printf("%d", n); }
    else{
        printInBinary(n / 2);
        printf("%d", n % 2);
    }
}

bool isDisjoint(int m, int A[], int n, int B[]){ // 교집합이 공집합인지
    if (m <0 || n <0) return true;
    else if (A[m - 1] == B[n - 1]) return false; 
    else if (A[m - 1] > B[n - 1]) return isDisjoint(m - 1, A, n, B);
    else return isDisjoint(m, A, n - 1, B);
}

