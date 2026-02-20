#include <stdio.h>
int fib(int m){
    if (m==0){
        printf("%d\n", m); // no run time execusion
        return 0;}
    if (m==1){
        printf("%d\n%d\n", m-1, m); // run time execution ok here
        return 1;}
    
    else{
        int p = m + fib(m-1);
        m = p;
        printf("%d\n", p);
        return p;}
}
int main(){
    int n;
    printf("Ener number of terms in series\n");
    scanf("%d", &n);
    printf("Fibbonacci series: \n");
    fib(n);
}
// try bc7 dec to bin using recursion