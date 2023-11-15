function test() {
    try
    {
        console.log(`A`);
        const array = new array(-20000)
        console.log(`B`)
    }
    catch(exception)
    {
        console.log(`C`);
        return
    }
    finally
    {
        console.log(`E`);
    }
}
test()