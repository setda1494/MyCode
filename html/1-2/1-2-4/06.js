let products = [
    {
        name: 'banana',
        price: 1200,
        print: function() {
        console.log(`${this.name}의 가격은 ${this.price}원 입니다.`);
        }
    },
    {
        name: 'mango',
        price: 3000,
        print: function() {
        console.log(`${this.name}의 가격은 ${this.price}원 입니다.`);
        }
    }
];

for (let product of products) {
    console.log('-------------');
    console.log(product.name);
    console.log(product.price);
    product.print();
    console.log('-------------');
}