class Bike {
    model: string
    constructor(model: string) {
        this.model = model;
    }
    display() {
        console.log(`Bike model is ${this.model}`);
    }
}
const bike = new Bike("Yamaha");
bike.display();