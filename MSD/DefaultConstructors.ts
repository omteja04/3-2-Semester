class Car {
    brand: string;
    constructor() {
        this.brand = "Default Brand";
    }
    show() {
        console.log(`Car Brand is ${this.brand}`);
    }
}
const car1 = new Car();
car1.show();