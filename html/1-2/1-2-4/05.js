let products1 = [
    { name: 'apple', price: 1000 },
    { name: 'bananas', price: 1200 },
    { name: 'mango', price: 3000 }
];

let products2 = [
    {
        name: 'apple',
        price: 1000,
        print: function() 
        {
            console.log(`${this.name} ${this.price}`);
        }
    },
    {
        name: 'bananas',
        price: 1200,
        print: function() 
        {
            console.log(`${this.name} ${this.price}`);
        }
    },
    {
        name: 'mango',
        price: 3000,
        print:function() 
        {
            console.log(`${this.name} ${this.price}`);
        }
    }
];

products2.forEach(product => product.print());
