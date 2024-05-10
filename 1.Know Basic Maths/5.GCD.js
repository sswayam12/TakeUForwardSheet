function GCD(n1,n2){

    for(let i = 1;i<=Math.min(n1,n2);i++){
        if(n1%i === 0 && n2%i === 0){
            gcd = i;
        }
    }
    return gcd;
}

function main(){
    let n1 = 15;
    let n2 = 20;

    let gcd = GCD(n1,n2);

    console.log(gcd);
}

main();