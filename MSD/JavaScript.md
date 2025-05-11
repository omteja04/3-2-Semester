---
markmap:
  colorFreezeLevel: 0
  maxWidth: 400
  initialExpandLevel: 2
  pan: true
  zoom: true
---

# JavaScript

## Why We Need JavaScript

- Enhances interactivity
- Controls browser behavior
- Enables dynamic content
- Used for frontend and backend (Node.js)

## What is JavaScript

- Lightweight, interpreted programming language
- Follows ECMAScript standard
- Runs in browser and server (Node.js)
- Event-driven and asynchronous

## Environment Setup

- Use browser console
- Use code editors (VS Code, Sublime)
- Node.js for backend JavaScript

## Working with Identifiers

- Names used for variables, functions, classes
- Rules:
  - Must begin with letter, \_, or $
  - Case-sensitive

## Type of Identifiers

- Variables
- Constants
- Function names
- Class names

## Data Types

### Primitive

- String
- Number
- Boolean
- Null
- Undefined
- Symbol
- BigInt

### Non-Primitive

- Objects
- Arrays
- Functions

## Operators and Types of Operators

- Arithmetic
- Assignment
- Comparison
- Logical
- Bitwise
- Ternary
- Type operators (`typeof`, `instanceof`)

## Types of Statements

- Expression statements
- Declaration statements
- Control flow statements

## Non-Conditional Statements

- Looping
- Function calls
- Variable declarations

## Conditional Statements

- if
- else if
- else
- switch

## Types of Loops

- for
- while
- do...while
- for...of
- for...in

## Types of Functions

- Named function
- Anonymous function
- Arrow function
- Constructor function

## Declaring and Invoking Functions

- `function name() {}`
- `const name = function() {}`
- `name();`

## Arrow Function

- Shorter syntax
- No own `this`, `arguments`, `super`

```javascript
const add = (a, b) => a + b;
```

## Function Parameters

- Default parameters
- Rest parameters
- Arguments object

## Nested Function

- Function defined inside another
- Can access outer function’s variables

## Built-in Functions

- `alert()`
- `prompt()`
- `confirm()`
- `parseInt()`, `parseFloat()`
- `isNaN()`

## Variable Scope in Functions

- Global scope
- Function scope
- Block scope (let, const)
- Lexical scope

## Working With Classes

- Introduced in ES6
- Template for objects

```javascript
class Person {
  constructor(name) {
    this.name = name;
  }
}
```

## Creating and Inheriting Classes

- Use `extends` for inheritance
- Use `super()` to call parent constructor

## In-built Events and Handlers

- Mouse Events (`click`, `mouseover`)
- Keyboard Events (`keydown`, `keyup`)
- Form Events (`submit`, `change`)

```javascript
element.addEventListener("click", handler);
```

## Working with Objects

### Types of Objects

- User-defined
- Built-in (Array, Date, Math)

### Creating Objects

- Object literals
- `new Object()`
- Constructor functions
- `Object.create()`

### Combining and Cloning Objects

- Spread operator (`{...obj1, ...obj2}`)

### Destructuring Objects

```javascript
const { name, age } = person;
```

## Spread Operator

- Used in arrays, objects, function arguments

```javascript
const newObj = { ...obj1, ...obj2 };
```

## Browser and Document Object Model (DOM)

- Window object
- Document object
- DOM tree structure
- Selecting elements (`getElementById`, `querySelector`)
- Manipulating content and styles
- Event handling

## Arrays

### Creating Arrays

- `let arr = [1, 2, 3];`

### Destructuring Arrays

```javascript
const [a, b] = arr;
```

### Accessing Arrays

- Indexing: `arr[0]`

### Array Methods

- `push()`, `pop()`, `shift()`, `unshift()`
- `map()`, `filter()`, `reduce()`
- `forEach()`, `includes()`, `slice()`, `splice()`

## Asynchronous Programming

- Helps handle time-based and delayed operations
- Prevents blocking

## Callbacks

- Function passed as an argument

```javascript
setTimeout(() => {
  console.log("Hello");
}, 1000);
```

## Promises

- Represent eventual completion or failure

```javascript
fetch(url)
  .then((res) => res.json())
  .then((data) => console.log(data))
  .catch((err) => console.error(err));
```

## Async and Await

- Cleaner way to work with Promises

```javascript
async function fetchData() {
  const res = await fetch(url);
  const data = await res.json();
}
```

## Fetch API

- Used to make HTTP requests

```javascript
fetch(url, {
  method: "GET/POST",
  headers: { "Content-Type": "application/json" },
  body: JSON.stringify(data),
});
```

## Creating and Consuming Modules

### Creating Module

```javascript
export const greet = () => "Hello!";
```

### Consuming Module

```javascript
import { greet } from "./greet.js";
```

- Use `type="module"` in HTML

## Connect

- [![GitHub](https://img.shields.io/badge/GitHub-omteja04-181717?logo=github)](https://github.com/omteja04)
- [![LinkedIn](https://img.shields.io/badge/LinkedIn-omteja-0000FF?logo=linkedin)](https://linkedin.com/in/omteja)
