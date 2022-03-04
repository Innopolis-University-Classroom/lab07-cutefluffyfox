template<typename T = int>
void multiples(T& sum, T x, int n){
    sum += 1;
    for (int i = 1; i <= n; i++){
        sum += i*x;
    }
}