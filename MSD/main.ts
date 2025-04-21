import { add, Multiplier } from './MathOperations'
const sum = add(5, 10);
console.log(`Addition of 5 and 10 is: ${sum}`);
const multiplier = new Multiplier();
const product = multiplier.multiply(5, 10);
console.log(`Product of 5 and 10 is: ${product}`);