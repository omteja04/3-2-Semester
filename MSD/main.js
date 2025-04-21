"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
var MathOperations_1 = require("./MathOperations");
var sum = (0, MathOperations_1.add)(5, 10);
console.log("Addition of 5 and 10 is: ".concat(sum));
var multiplier = new MathOperations_1.Multiplier();
var product = multiplier.multiply(5, 10);
console.log("Product of 5 and 10 is: ".concat(product));
