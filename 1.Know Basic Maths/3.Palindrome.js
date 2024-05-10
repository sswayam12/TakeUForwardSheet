function palindrome(n){
    let revNum = 0;
    let originalNum = n;

    while(n > 0){
        let ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = Math.floor(n / 10);
    }
    if(revNum === originalNum){
        return true;
    }
    else{
        return false;
    }
}

function main(){

    let N = 124;

    if(palindrome(N)){
        console.log(`${N} is a Palindrome Number`);
    }
    else{
        console.log(`${N} is not a Palindrome Number`);
    }
}

main();