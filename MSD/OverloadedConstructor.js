var Laptop = /** @class */ (function () {
    function Laptop(brand, price) {
        this.brand = brand || "Unknown";
        this.price = price || 0;
    }
    Laptop.prototype.info = function () {
        console.log("Brand: ".concat(this.brand, ", Price: ").concat(this.price));
    };
    return Laptop;
}());
var laptop1 = new Laptop();
var laptop2 = new Laptop("HP");
var laptop3 = new Laptop(undefined, 50000);
var laptop4 = new Laptop("HP", 54000);
console.log();
laptop1.info();
console.log();
laptop2.info();
console.log();
laptop3.info();
console.log();
laptop4.info();
