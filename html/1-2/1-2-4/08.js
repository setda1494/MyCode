let ob1 = 
{
    name:`nature of code`,
    price:3000,
    author : `다니엘 쉬프만`,
    ISBN :9788968481901,
    Page : 620
}

let ob2=
{
    name : `돼지 삼겹살`,
    kg : 100,
    price : 1690,

    print: function(a)
    {
        return this.price * a 
    }
}

console.log(ob2.print(5))