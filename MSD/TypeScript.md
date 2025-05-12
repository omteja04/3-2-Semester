---
markmap:
  colorFreezeLevel: 0
  maxWidth: 400
  initialExpandLevel: -1
  pan: true
  zoom: true
---

# TypeScript

## Installing TypeScript

### 1. Install Node.js

- Go to [Node.js Official Website](https://nodejs.org/)
- Download **LTS version**
- Verify installation with:
  ```bash
  node -v
  npm -v
  ```

### 2. Install TypeScript via npm

- Run:

  ```bash
  npm install -g typescript
  ```

### 3. Verify TypeScript Installation

- Verify with:

  ```bash
  tsc -v
  ```

### 4. Creating a TypeScript File

- Create `app.ts`:

  ```typescript
  let message: string = "Hello, TypeScript!";
  console.log(message);
  ```

### 5. Compile TypeScript to JavaScript

- Run:

  ```bash
  tsc app.ts
  ```

### 6. Run the JavaScript File

- Run with:

  ```bash
  node app.js
  ```

### 7. Automatically Compile TypeScript

- Use `--watch` flag:

  ```bash
  tsc --watch
  ```

### 8. Use a TypeScript Configuration File (Optional)

- Generate `tsconfig.json`:

  ```bash
  tsc --init
  ```

---

#### Troubleshooting

- **Permission Issues**: Use `sudo` (Linux/Mac) or admin command prompt (Windows):

  ```bash
  sudo npm install -g typescript
  ```

- **Update TypeScript**:

  ```bash
  npm install -g typescript@latest
  ```

## Functions

1. **Function Declaration**: Functions are defined with type annotations for parameters and return types.

   - `function name(param: type): returnType { ... }`

2. **Arrow Functions**: Shorter syntax for writing functions, with lexical `this`.

   - `const name = (param: type): returnType => { ... }`

3. **Function Types**: You can define a function signature type using a type alias.

   - `type FunctionType = (param1: type1, param2: type2) => returnType`

4. **Optional Parameters**: Use `?` to make parameters optional.

   - `function name(param1?: type)`

5. **Default Parameters**: Assign default values to parameters.

   - `function name(param1 = defaultValue)`

6. **Rest Parameters**: Collects all the remaining arguments into an array.

   - `function name(...params: type[])`

## Interfaces

1. **Basic Interface Definition**: Defines the shape of an object with specific properties and their types.
2. **Optional Properties**: Use `?` to make properties optional.
3. **Read-only Properties**: Use `readonly` to prevent modification of properties.
4. **Methods in Interfaces**: Define method signatures in the interface to specify required methods for objects.
5. **Extending Interfaces**: Use `extends` to create new interfaces that build on existing ones.
6. **Function Types**: Use interfaces to define function signatures.
7. **Interface as a Contract**: Classes or objects must implement the structure defined by the interface.
8. **Interface vs Type Alias**: Interfaces are mainly used for objects, while type aliases are more flexible for other complex types.

## Duck Typing

- | Feature                | Explanation                                              |
  | ---------------------- | -------------------------------------------------------- |
  | Definition             | Structural type checking (not name-based)                |
  | Key Principle          | “If it walks like a duck and quacks like a duck…”        |
  | Type Checking Based On | Object shape (property names and types)                  |
  | Useful For             | Flexibility and code reuse with functions and interfaces |

## Function Types

- | Feature                 | Example Syntax                           | Description                           |
  | ----------------------- | ---------------------------------------- | ------------------------------------- |
  | Type Alias for Function | `type Fn = (a: number) => string;`       | Defines a reusable function signature |
  | Inline Type             | `let fn: (x: string) => number`          | Directly declares function type       |
  | Function as Parameter   | `(fn: (a: number, b: number) => number)` | Accepts a typed function as argument  |
  | Interface Function      | `interface Fn { (x: string): boolean }`  | Function shape using an interface     |

## Classes, Constructor, Access Modifiers, <br> Properties and Methods

- | Feature          | Description              | Example                          |
  | ---------------- | ------------------------ | -------------------------------- |
  | Class            | Blueprint for objects    | `class MyClass { ... }`          |
  | Constructor      | Initializes objects      | `constructor(name: string)`      |
  | Access Modifiers | Visibility of members    | `public`, `private`, `protected` |
  | Properties       | Data members of a class  | `name: string;`                  |
  | Methods          | Functions inside a class | `greet(): void { ... }`          |
- | Modifier    | Meaning                           | Accessible From       |
  | ----------- | --------------------------------- | --------------------- |
  | `public`    | Default. Accessible everywhere    | Anywhere              |
  | `private`   | Only inside the class             | Within the class only |
  | `protected` | Inside the class & its subclasses | Class + Subclasses    |

## Creating and using Namespaces

- Namespaces in TypeScript help you organize code into logical groups and prevent naming conflicts — especially useful when not using module systems.

- | -                      | Feature                                                                   | Description |
  | ---------------------- | ------------------------------------------------------------------------- | ----------- |
  | namespace keyword      | Declares a block to encapsulate related code                              |
  | export keyword         | Exposes elements outside the namespace                                    |
  | namespace usage        | Access exported members via NamespaceName.memberName                      |
  | nesting                | Namespaces can be nested inside each other                                |
  | splitting across files | Use /// <reference path="..."> to merge multiple files into one namespace |
  | runtime impact         | Compiles into an IIFE (Immediately Invoked Function Expression)           |

1. Basic Namespace:

   ```ts
   namespace Utils {
     export function greet(name: string) {
       return `Hello, ${name}`;
     }
   }

   console.log(Utils.greet("Levi")); // Output: Hello, Levi
   ```

2. Nested Namespaces:

   ```ts
   namespace Game {
     export namespace Engine {
       export function start() {
         console.log("Game started");
       }
     }
   }

   Game.Engine.start();
   ```

- Use Namespaces For: browser-based apps not using modules.
- Use Namespaces For: When keeping everything in a single global context.

## Creating and using Modules

### What is a Module?

- **Module**: Any TypeScript file that uses `import` or `export` statements.
- Every TypeScript file is a **separate module** by default.
- Modules enable sharing and reusing code between files.
- | Feature        | Description                                                    |
  | -------------- | -------------------------------------------------------------- |
  | `export`       | Exposes variables, functions, or classes to other files.       |
  | `import`       | Imports code from other modules to use it in the current file. |
  | Default Export | Exports a single item from a module (`export default`).        |
  | Named Exports  | Exports multiple items from a module with names.               |

### Creating & Using Modules

- In the **mathUtils.ts** file:

  ```ts
  export function add(x: number, y: number): number {
    return x + y;
  }

  export function multiply(x: number, y: number): number {
    return x * y;
  }
  ```

- In the **main.ts** file:

  ```ts
  import { add, multiply } from "./mathUtils";

  console.log(add(5, 3)); // Output: 8
  console.log(multiply(4, 2)); // Output: 8
  ```

- Export Types

  - **Named Exports**: You can export multiple items from a module.

    ```ts
    export const name = "Levi";
    export function greet() { ... }
    ```

  - Import:

    ```ts
    import { name, greet } from "./file";
    ```

  - **Default Export**: You can export one default value.

    ```ts
    export default class Logger { ... }
    ```

  - Import:

    ```ts
    import Logger from "./Logger";
    ```

## Module Formats and Loaders

- | Concept            | ES6 Modules                     | CommonJS                             | AMD                                             | SystemJS                              |
  | ------------------ | ------------------------------- | ------------------------------------ | ----------------------------------------------- | ------------------------------------- |
  | **Import/Export**  | `import { add } from 'module';` | `const { add } = require('module');` | `define(['module'], function(module) { ... });` | `System.import('module').then(...)`   |
  | **Module Loading** | Synchronous and Static          | Synchronous and Block-based          | Asynchronous                                    | Asynchronous and dynamic loading      |
  | **Supported By**   | Browsers, Node.js (v12+)        | Node.js (Older versions)             | Mainly in Browsers (via RequireJS)              | All formats, used in various projects |

## Module Vs Namespace

- | Feature                | **Module**                                              | **Namespace**                                                                          |
  | ---------------------- | ------------------------------------------------------- | -------------------------------------------------------------------------------------- |
  | **Declaration Syntax** | Uses `export` and `import` keywords                     | Uses `namespace` and `export` within the namespace                                     |
  | **Code Separation**    | Can be split across multiple files                      | Typically confined to a single file (but can span multiple files in certain scenarios) |
  | **Scope**              | Each module is its own scope (i.e., private by default) | Everything inside a namespace shares the same global scope unless explicitly exported  |
  | **Usage**              | For large-scale projects and **external code sharing**  | For grouping related code in **non-modular codebases**                                 |
  | **Static Imports**     | Supported (imports are resolved at compile time)        | No `import`; everything is merged into global space                                    |
  | **Tree Shakability**   | Yes, unused code can be excluded                        | No, all code in a namespace is included unless manually excluded                       |
  | **Bundling**           | Supported (webpack, rollup, etc.)                       | No support for bundling, everything is part of the global scope                        |
  | **File Usage**         | Each file is treated as a module                        | Can span multiple files but typically in a single global space                         |
  | **Example**            | `import { add } from './utils';`                        | `namespace MathUtils { export function add() { ... } }`                                |

- Use Modules if:

  - You are working in modern TypeScript or JavaScript environments that support ES6 modules.
  - You want to take advantage of tree-shaking, which removes unused exports in the build process.
  - You want to separate your code into different files for better code organization.
  - You are using bundlers like Webpack, Rollup, or Parcel.
  - You need asynchronous loading or lazy loading of your code.

- Use Namespaces if:
  - You are working with legacy code or in an environment where ES6 modules are not available.
  - You are building small-scale applications and don't need modular code splitting.
  - You don't require tree-shaking or dynamic imports.
  - Your project is small enough to benefit from grouping related functions together in a single space.

## Generics

- | **Concept**             | **Description**                                                                                   |
  | ----------------------- | ------------------------------------------------------------------------------------------------- |
  | **Generics**            | Write reusable components that work with any data type while maintaining type safety.             |
  | **Type Parameters**     | Placeholders (e.g., `<T>`) for types that are provided when the function or class is used.        |
  | **Generic Functions**   | Functions that work with various types without compromising on type safety.                       |
  | **Generic Constraints** | Restrict the types a generic can be to those that satisfy a specific condition (using `extends`). |
- ```ts
  function printLength<T extends { length: number }>(arg: T): number {
    return arg.length;
  }
  ```

## Connect

- [![GitHub](https://img.shields.io/badge/GitHub-omteja04-181717?logo=github)](https://github.com/omteja04)
- [![LinkedIn](https://img.shields.io/badge/LinkedIn-omteja-0000FF?logo=linkedin)](https://linkedin.com/in/omteja)
