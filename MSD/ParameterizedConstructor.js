var Bike = /** @class */ (function () {
    function Bike(model) {
        this.model = model;
    }
    Bike.prototype.display = function () {
        console.log("Bike model is ".concat(this.model));
    };
    return Bike;
}());
var bike = new Bike("Yamaha");
bike.display();
