function print1(name,count)
{
    console.log(`${name}`+"이(가)"+`${count}`+"개 있음");
    if (typeof(count)== undefined) {
        count = 1;
    }
}
print1("오렌지",10);
print1("사과")
let print2 = (name,count) =>
{
    console.log(`${name}`+"이(가)"+`${count}`+"개 있음");
    if (typeof(count)== undefined) {
        count = 1;
    }
}
print2("귤",10);
print2("배")
let print3 = function (name,count)
{
    console.log(`${name}`+"이(가)"+`${count}`+"개 있음");
    if (typeof(count)== undefined) {
        count = 1;
    }
}
print3("딸기",10);
print3("자몽")