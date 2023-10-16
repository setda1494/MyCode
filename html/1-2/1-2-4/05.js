let products1 = 
{//객체
    {name:`apple`, prise:1000},
    {name:`banans`, prise:1200},
    {name:`mango`, prise:3000}
};
let products2 = 
[{//배열
    
    {
        name:`apple`, 
        prise:1000,
        print:function()
        {
            console.log(`${this.name}${this.prise}`)
        }
    },
    {
        name:`banans`, 
        prise:1200,
        print:function()
        {
            console.log(`${this.name}${this.prise}`)
        }
    },
    {
        name:`mango`, 
        prise:3000,
        print:function()
        {
            console.log(`${this.name}${this.prise}`)
        }
    },
    

}];
products2.print