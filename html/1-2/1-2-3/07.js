let f1 = function()
{
    console.log("익명 함수")
}
let f2 =()=> console.log("f2");
let sum1 = function(a,b)
{
    let re = a+b;
    return re;
}
let sum2 = (a,b) =>
{
    let re = a+b;
    return re;
}
let red1 = sum1(1,2);
let red2 = sum1(3,4);

function power()
{
    return x *x;
}
let reed = (x) =>
{
    return x *x;
}

let reed1 = power(4);
let reed2 = reed(4);
console.log(reed);
console.log(red1);
console.log(red2);
console.log(f1);
console.log(f2);