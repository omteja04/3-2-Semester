"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.Multiplier = void 0;
exports.add = add;
function add(a, b) {
    return a + b;
}
var Multiplier = /** @class */ (function () {
    function Multiplier() {
    }
    Multiplier.prototype.multiply = function (a, b) {
        return a * b;
    };
    return Multiplier;
}());
exports.Multiplier = Multiplier;
