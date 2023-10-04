function mu1(a,b)
{
    let mull1 = a*b;
    console.log(mull1);
}
mu1(1,2);
let mu2 = function(a,b)
{
    let mull1 = a*b;
    console.log(mull1);
}
mu2(3,4);
let mu3 = (a,b) =>
{
    let mull1 = a*b;
    console.log(mull1);
}
mu3(5,6);

function print1 (msg)
{
    console.log('"${msg}" 라고 말했다')
}
print1("오늘 비온데");
let print2  =function(msg)
{
    console.log('"${msg}" 라고 말했다')
}
print2("오늘 비온데");
let print3 = (msg) =>
{
    console.log('"${msg}" 라고 말했다')
}
print3("오늘 비온데");
