int main() {
	int sum;
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    printf("%d", sum);
    return 0;
}
