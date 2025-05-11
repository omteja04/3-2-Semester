---
markmap:
  colorFreezeLevel: 0
  maxWidth: 400
  initialExpandLevel: 2
  pan: true
  zoom: true
---

# Node.js

## Why and What Node.js

- **Asynchronous & Non-blocking I/O**: Enables high concurrency with fewer resources.
- **Single-threaded Event Loop**: Efficient use of a single thread for handling I/O operations.
- **JavaScript on the Server**: Allows using JavaScript on both client and server sides.
- **Scalable & Fast**: Ideal for building scalable network applications.
- **Use Cases**:
  - Web servers
  - Real-time applications (e.g., chat apps, live updates)
  - API services

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
  // example.js
  module.exports = function () {
    console.log("Hello from the module!");
  };
  ```

- **Importing Modules**:

  ```javascript
  const example = require("./example");
  example();
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

- **Other Methods**:

  - `forever` (deprecated, now largely replaced by `pm2`).

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
