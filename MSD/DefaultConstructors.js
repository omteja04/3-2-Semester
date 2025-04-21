var Car = /** @class */ (function () {
    function Car() {
        this.brand = "Default Brand";
    }
    Car.prototype.show = function () {
        console.log("Car Brand is ".concat(this.brand));
    };
    return Car;
}());
var car1 = new Car();
car1.show();
