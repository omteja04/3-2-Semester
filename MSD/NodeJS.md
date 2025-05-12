---
markmap:
  colorFreezeLevel: 0
  maxWidth: 400
  initialExpandLevel: -1
  pan: true
  zoom: true
---

# Node.js

## Why Node.js?

- **JavaScript Everywhere (Full Stack JavaScript)**

  - Unified Language: Use JavaScript for both client-side and server-side development.
  - Code Reusability: Share libraries, functions, and models between the client and server.

- **Asynchronous, Event-Driven Model**

  - Non-blocking I/O: Single-threaded event loop for handling many simultaneous requests.
  - Event Loop: Uses callbacks and promises for asynchronous execution.
  - Real-Time Interaction: Ideal for real-time apps like chat and gaming.

- **Performance and Speed**

  - V8 JavaScript Engine: Compiles JavaScript directly into machine code for fast execution.
  - Efficient Memory Management: Non-blocking model reduces memory usage.

- **Scalability**

  - Single-Threaded but Scalable: Event loop handles many I/O operations without separate threads.
  - Horizontal Scaling: Supports clustering for scaling across multiple CPU cores.

- **Community and Ecosystem**

  - Node Package Manager (NPM): Large ecosystem of open-source libraries and packages.
  - Active Community: Constant improvement through community contributions.

- **Cross-Platform Development**

  - Works on Multiple Platforms: Windows, Linux, macOS.
  - Serverless Computing: Ideal for serverless architectures like AWS Lambda and Google Cloud Functions.

- **Microservices Architecture**

  - Lightweight Services: Ideal for building microservices that are independent and scalable.

- **Cost-Effective for I/O Heavy Applications**
  - I/O Bound Applications: Efficient handling of concurrent I/O tasks like file operations and database queries.

## What is Node.js?

- **Definition**

  - Node.js: A runtime environment for executing JavaScript code on the server side using Google’s V8 engine.

- **Core Features**

  - Single-Threaded Event Loop: Handles multiple requests concurrently on a single thread.
  - Asynchronous Programming: Uses callbacks, promises, and async/await for non-blocking operations.
  - Built-In Modules: Includes modules like `http`, `fs`, `path`, and `events` for common tasks.
  - NPM: Package manager for installing and sharing third-party libraries.

- **Core Architecture**

  - V8 JavaScript Engine: Compiles JavaScript directly to machine code for fast execution.
  - Event Loop: Manages asynchronous I/O tasks with callbacks and event handling.
  - Libuv: Library that handles asynchronous I/O operations.

- **Common Use Cases**

  - Web Servers: Lightweight, non-blocking I/O web servers.
  - Real-time Applications: Powers chat apps, live data feeds, multiplayer games.
  - API Servers: Efficiently handles RESTful and GraphQL APIs.
  - Microservices: Ideal for building scalable microservices.
  - Command-Line Tools: Can interact with the operating system for creating CLI tools.

- **Modular and Extensible**
  - Modules and Packages: Create reusable and shareable modules through NPM.
  - Microservices and Serverless Architecture: Perfect for modular applications and cloud-based serverless functions.

## How to use Node.js

- **Installation**:
  - Download from [Node.js Official Website](https://nodejs.org/)
  - Install via package managers (Homebrew, apt, etc.)
- **Creating a Node.js Application**:
  - Initialize with `npm init`
  - Install dependencies with `npm install <package_name>`
  - Start server with `node app.js`

## Create a Web Server in Node.js

- **Basic Web Server**:
  ```javascript
  const http = require("http");
  const server = http.createServer((req, res) => {
    res.writeHead(200, { "Content-Type": "text/plain" });
    res.end("Hello, Node.js!");
  });
  server.listen(3000, () =>
    console.log("Server running on http://localhost:3000")
  );
  ```
- **http module**: Imports the built-in HTTP module for handling requests and responses.
- **http.createServer()**: Creates a server that handles incoming requests.
- **req**: The request object containing request details like URL, method, and headers.
- **res**: The response object used to send data back to the client.
- **res.writeHead()**: Sets the status code and headers for the response.
- **res.end()**: Sends the response body and ends the request.
- **server.listen()**: Binds the server to a port (e.g., 3000) and begins accepting requests.

## Node Package Manager (NPM)

- **What is NPM**:

  - Package manager for Node.js.
  - Manages libraries and dependencies.

- **Common NPM Commands**:

  - `npm init`: Initialize a new Node.js project.
  - `npm install <package_name>`: Install dependencies.
  - `npm start`: Start a script defined in `package.json`.
  - `npm install --save-dev <package_name>`: Install as development dependency.

## Modular Programming in Node.js

- **Modularity**: Split large applications into smaller modules.
- **Exporting Modules**:

  ```javascript
    // greeting.js

    // Function that returns a greeting message
    function sayHello(name) {
        return `Hello, ${name}!`;
    }

    // Export the function so it can be used in other files
    module.exports = sayHello;

  ```

- **Importing Modules**:

  ```javascript
  // Import the 'greeting' module
    const greet = require('./greeting');

    // Use the 'sayHello' function from the 'greeting' module
    console.log(greet('Alice'));

  ```

## Restarting Node Application

- **Nodemon**:

  - Automatically restarts the Node.js application on file changes.
  - `npm install -g nodemon`
  - Start with `nodemon app.js`

- **PM2**:

  - Advanced process manager for Node.js.
  - Monitors, reloads, and ensures uptime.
  - `npm install pm2 -g`
  - Start with `pm2 start app.js`

- `**forever**` (deprecated, now largely replaced by `pm2`).

## File Operations in Node.js

- **Reading Files**:

  - Asynchronous: `fs.readFile('file.txt', 'utf8', callback)`
  - Synchronous: `fs.readFileSync('file.txt', 'utf8')`

- **Writing Files**:

  - Asynchronous: `fs.writeFile('file.txt', data, callback)`
  - Synchronous: `fs.writeFileSync('file.txt', data)`

- **Other File Operations**:

  - **Appending**: `fs.appendFileSync('file.txt', data)`
  - **Deleting**: `fs.unlink('file.txt', callback)`
  - **Renaming**: `fs.renameSync('oldname.txt', 'newname.txt')`
  - **Directory Operations**: `fs.mkdirSync('newDir')`

## Error Handling in Node.js

- **Error in Asynchronous Code**:

  ```javascript
  fs.readFile("non_existent_file.txt", (err, data) => {
    if (err) {
      console.error("Error:", err);
      return;
    }
    console.log(data);
  });
  ```

- **Error in Synchronous Code**:

  ```javascript
  try {
    let result = 10 / 0;
  } catch (err) {
    console.error("Error:", err);
  }
  ```

## Connect

- [![GitHub](https://img.shields.io/badge/GitHub-omteja04-181717?logo=github)](https://github.com/omteja04)
- [![LinkedIn](https://img.shields.io/badge/LinkedIn-omteja-0000FF?logo=linkedin)](https://linkedin.com/in/omteja)
