class Laptop {
    brand: string;
    price: number;
    constructor(brand?: string, price?: number) {
        this.brand = brand || "Unknown";
        this.price = price || 0;
    }
    info() {
        console.log(`Brand: ${this.brand}, Price: ${this.price}`);
    }
}
const laptop1 = new Laptop();
const laptop2 = new Laptop("HP");
const laptop3 = new Laptop(undefined, 50000);
const laptop4 = new Laptop("HP", 54000);

console.log()
laptop1.info()
console.log()
laptop2.info()
console.log()
laptop3.info()
console.log()
laptop4.info()