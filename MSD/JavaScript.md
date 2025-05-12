---
markmap:
  colorFreezeLevel: 0
  maxWidth: 400
  initialExpandLevel: -1
  pan: true
  zoom: true
---

# JavaScript

## Why We Need JavaScript

### 1. Making Websites Interactive

- Transforms static websites into dynamic, interactive ones
- Enables real-time user interactions (e.g., button clicks, form submissions)

### 2. Client-Side Scripting

- Runs directly in the browser
- Improves performance and reduces server load

### 3. Asynchronous Programming

- Supports callbacks, promises, async/await
- Allows tasks (e.g., fetching data) to run in the background without blocking the page

### 4. Improved User Experience

- Powers Single Page Applications (SPAs)
- Enables real-time interactions via WebSockets and AJAX

### 5. Interaction with HTML/CSS

- Manipulates the DOM (Document Object Model)
- Dynamically changes content and styling based on user input

### 6. Integration with Web APIs

- Interacts with APIs like Google Maps, Geolocation, and Fetch API
- Enables advanced features like live search and real-time updates

### 7. Cross-Browser Compatibility

- Supported by all major browsers
- Ensures consistent functionality across different devices

### 8. Mobile and Desktop Applications

- JavaScript used in React Native (mobile) and Electron (desktop) for cross-platform apps

### 9. Server-Side Development (Node.js)

- Node.js enables JavaScript on the server-side
- Facilitates full-stack JavaScript development

### 10. Wide Range of Frameworks and Libraries

- React, Angular, Vue.js, Express.js, jQuery, and more for faster development

### 11. Community and Ecosystem

- Active developer community and vast resources
- npm (Node Package Manager) provides millions of libraries

### 12. Universality

- JavaScript is the only language supported across all browsers, both client and server-side
- Used in web, mobile, desktop, and even IoT applications

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

- **Variable Identifiers**: Used for variables and constants.

- **Function Identifiers**: Used to name functions.

- **Class Identifiers**: Used for class names.

- **Object Identifiers**: Used for objects and their properties.

- **Array Identifiers**: Used for arrays and their elements.

- **Constant Identifiers**: Used for constants that cannot be reassigned.

- **Module Identifiers**: Used in modules for exporting and importing code.

- **Event Handler Identifiers**: Used to reference functions that handle events.

- **Destructured Identifiers**: Used in object and array destructuring.

- **Property and Method Identifiers**: Used to access properties and methods of objects.

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
- Date

## Operators and Types of Operators

- Arithmetic
- Assignment
- Comparison
- Logical
- Bitwise
- Ternary
- Type operators (`typeof`, `instanceof`)
- Spread Operator
- Rest Operator

## Types of Statements

1. **Non-Conditional Statements**: Declare variables, express assignments, and return values.
2. **Conditional Statements**: Execute code based on conditions (e.g., `if`, `switch`).
3. **Looping Statements**: Repeat a block of code multiple times (e.g., `for`, `while`).
4. **Exception Handling**: Handle errors gracefully (e.g., `try-catch`).
5. **Other Statements**: Handle control flow (e.g., `break`, `continue`).

## Non-Conditional Statements

- Non-Conditional Statements in JavaScript are the basic building blocks of the program. They perform actions without making any decisions or checking conditions.-
- **Declaration Statements**: Declare variables and functions.
- **Expression Statements**: Perform operations like assignments or function calls.
- **Return Statement**: Returns a value from a function or exits early.
- **Break Statement**: Exits a loop or switch statement prematurely.
- **Continue Statement**: Skips the current iteration of a loop and continues to the next one.-

## Conditional Statements

- if
- else if
- else
- switch

## Types of Loops

- for
- while
- do...while
- for...in - used for object iteration - not recommended for array elements
- for...of - iterable objects like arrays, strings, and other iterable collections.

## Types of Functions

1. **Function Declaration**: A named function defined using the `function` keyword.
2. **Function Expression**: A function without a name (anonymous), assigned to a variable.
3. **Arrow Function**: A concise syntax for functions, introduced in ES6, with lexical `this`.
4. **Immediately Invoked Function Expression (IIFE)**: A function that is executed immediately after its definition.
5. **Constructor Function**: A function used to create objects, typically used with the `new` keyword.
6. **Generator Function**: A function that can pause and resume its execution using the `yield` keyword.
7. **Anonymous Function as a Parameter**: A function without a name, often passed as an argument to other functions (e.g., callbacks).
8. **Recursive Function**: A function that calls itself to solve a problem through repeated execution.

## Declaring and Invoking Functions

1. **Declaring a Function**: Use the `function` keyword followed by the function name, parameters, and the function body.
2. **Invoking a Function**: To invoke, use the function name followed by parentheses containing arguments (if any).
3. **Return Values**: Functions can return a value, which can be stored or used in further expressions.
4. **Anonymous Functions**: Functions without a name that are often assigned to variables or used as arguments.
5. **Hoisting**: Function declarations are hoisted and can be called before they appear in the code, while function expressions are not hoisted.
6. **Arrow Functions**: A more concise way to declare functions introduced in ES6, with a shorter syntax and different behavior for `this`.
7. **Recursion**: Functions can call themselves, useful for problems like factorials, traversing trees, etc.

## Arrow Function

- **Arrow functions** provide a concise syntax for writing functions.
- They **do not** have their own `this`, `arguments`, `super`, or `new.target`, making them suitable for simple functions and scenarios where you want to maintain the lexical context of `this`.
- Arrow functions are perfect for callbacks and array methods, but they should not be used as constructors.
- ```javascript
  const add = (a, b) => a + b;
  ```

## Function Parameters

1. **Default Parameters**: Parameters can have default values.
2. **Rest Parameters**: Represent an indefinite number of parameters as an array.
3. **Destructuring Parameters**: Unpack values from objects or arrays directly in the function signature.
4. **Named vs. Anonymous Parameters**: Named parameters are explicitly defined, whereas anonymous ones are often used in callback functions.
5. **Arrow Functions**: Parameters in arrow functions follow the same rules as regular functions but with a more concise syntax.
6. **Variable Numbers of Parameters**: Use rest parameters (`...`) or the `arguments` object to handle an unknown number of arguments.

## Nested Function

- **Nested functions** are functions defined inside other functions.
- They can access variables and parameters from the outer function, which is useful for encapsulating behavior and creating closures.
- **Closures** allow inner functions to "remember" the environment in which they were created, providing powerful capabilities like data privacy and function factories.

## Built-in Functions

- String Methods
  - st.charAt(index)
  - st.concat(s1,s2,...)
  - st.includes(search)
  - st.indexOf(search)
  - st.slice(startInd, endInd)
  - st.toUpperCase()
  - st.toLowerCase()
- Array Methods
  - arr.push(ele)
  - arr.pop()
  - arr.shift() - remove first
  - arr.unshift(ele) - add at first
  - arr.concat(brr)
  - arr.forEach(callback)
  - arr.map(callback)
  - arr.filter(callback)
- Math Methods
  - Math.abs(x)
  - Math.pow(base, exp)
  - Math.round(x)
  - Math.floor(x)
  - Math.ceil(x)
  - Math.max(...x)
  - Math.min(...x)
- JSON Methods
  - JSON.stringify(obj)
  - JSON.parse(jsonString)

## Variable Scope in Functions

- **Global scope**: Variables declared outside of functions or blocks.
- **Local (function) scope**: Variables declared inside functions.
- **Block scope**: Variables declared using `let` or `const` inside blocks `{}`.
- **Scope chain**: When a variable is accessed, JavaScript looks for it in the current scope, and if not found, checks outer scopes.
- **Hoisting**: Variable declarations are hoisted to the top of their scope, but only declarations are hoisted, not initializations.
- **Closures**: Functions that retain access to their lexical scope even after they are returned or executed outside the scope.
- **Shadowing**: Local variables can shadow variables from outer scopes, making them inaccessible in that specific context.

## Working With Classes

- **Classes** in JavaScript allow for object creation, inheritance, and encapsulation.
- **Constructor functions** are used to initialize the state of an object.
- **Inheritance** allows classes to inherit from other classes.
- **Getters and setters** provide controlled access to object properties.
- **Static methods** allow operations that don't depend on object instances.
- **Class expressions** offer flexibility in defining classes dynamically.
- ```javascript
  class Person {
    constructor(name) {
      this.name = name;
    }
  }
  ```

## Creating and Inheriting Classes

- **Creating Classes**: You define a class using the `class` keyword and specify the behavior (methods) and properties of the class.
- **Inheritance**: Subclasses can extend base classes using the `extends` keyword. The subclass can then use the `super()` method to call the parent class's constructor.
- **Method Overriding**: Subclasses can override methods from the parent class to provide more specific behavior.

## In-built Events and Handlers

- Mouse Events (`click`, `mouseover`)
- Keyboard Events (`keydown`, `keyup`)
- Form Events (`submit`, `change`)

```javascript
element.addEventListener("click", handler);
```

## Working with Objects

### Types of Objects

- JavaScript has plain objects, arrays, functions, and other built-in objects.
- User-defined
- Built-in (Array, Date, Math)

### Creating Objects

- Object literals
- `new Object()`
- Constructor functions
- `Object.create()`

### Combining and Cloning Objects

- Spread operator (`{...obj1, ...obj2}`)
- It’s useful for cloning, merging, and manipulating objects.

### Destructuring Objects

- It allows you to extract properties from an object and assign them to variables with optional renaming and default values.
- ```javascript
  const { name, age } = person;
  ```

## Spread Operator

The **spread operator** is a powerful and concise tool in JavaScript that simplifies working with arrays and objects. It allows you to:

- Copy arrays or objects.
- Merge multiple arrays or objects.
- Pass elements of an array as individual arguments to a function.
- Convert strings into arrays of characters.
- ```javascript
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
- ```javascript
  setTimeout(() => {
    console.log("Hello");
  }, 1000);
  ```
- When callbacks are nested within callbacks, the code becomes messy and hard to maintain. This is called callback hell.
- ```javascript
  doTask1(() => {
    doTask2(() => {
      doTask3(() => {
        console.log("All tasks done!");
      });
    });
  });
  ```

## Promises

- Promises solve callback hell.
- Provide a clean, chainable way to handle asynchronous operations.
- Help with error handling in async flows.
- ```javascript
  fetch(url)
    .then((res) => res.json())
    .then((data) => console.log(data))
    .catch((err) => console.error(err));
  ```
- **Promise States**

  - **Pending** – Initial state, neither fulfilled nor rejected.

  - **Fulfilled** – The operation completed successfully.

  - **Rejected** – The operation failed.

## Async and Await

- Avoids complex .then() chaining

- Improves code readability

- Simplifies error handling with try...catch
- ```javascript
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

- Promote reusability of code

- Maintain cleaner project structure

- Enable encapsulation (hide internal logic)

- Load only what’s needed using import/export

- Creating Module

  ```javascript
  export const greet = () => "Hello!";
  ```

- Consuming Module

  ```javascript
  import { greet } from "./greet.js";
  ```

- Use `type="module"` in HTML

## Connect

- [![GitHub](https://img.shields.io/badge/GitHub-omteja04-181717?logo=github)](https://github.com/omteja04)
- [![LinkedIn](https://img.shields.io/badge/LinkedIn-omteja-0000FF?logo=linkedin)](https://linkedin.com/in/omteja)
