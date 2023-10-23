let p = new Number(263);

Number.prototype.f = function()
{
    return("I wnat go home");
}
console.log(p.f());

class lun
{
    constructor(tit,pri)
    {
        this.tit = tit
        this.pri = pri 
    }
    print()
    {
        console.log(`${this.tit}는 가격이 ${this.pri} 이다`)
    }
}