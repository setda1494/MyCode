let a = [100,200,300,400,500];
let b =0;

function payup(money) {
    if (money <= 200) {
        money*= 1.2;
    }
    if (money >=300) {
        money *=1.15;
    }
    console.log(money);
    return money;
}


for (let i=0; i<= a.length;i++) {
    b = payup(b);
    console.log(i+"번재 직원 월급인상"+b);
}