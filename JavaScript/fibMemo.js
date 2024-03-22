const fibo = (n)=> {
    if (n <= 2) {
        return 1;
    }
    return fibo(n-2) + fibo(n-1);
}

console.log(fibo(7));
console.log(fibo(6)); 