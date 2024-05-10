function countDigits(n){
    let cnt = 0;
    while (n > 0){
        cnt += 1;

        n = Math.floor(n / 10);
    }
    return cnt;
}

function main() {
    let N = 329823;
    console.log("N: " + N);
    let digits = countDigits(N);
    console.log("Number of Digits in N: " + digits);
}

// Execute the main function
main();
