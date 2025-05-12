---
markmap:
  colorFreezeLevel: 0
  maxWidth: 400
  initialExpandLevel: 2
  pan: true
  zoom: true
---

# Express.js

## 1. Express Development Environment

- **Express.js**: A fast and minimal web framework for Node.js to build scalable and efficient web applications.
- **Installation**:
  ```bash
  npm initialize -y            # Initialize a Node.js project with default settings
  npm install express          # Install Express.js in the project
  ```

* **Basic Setup**:

  ```javascript
  const express = require("express");
  const app = express();

  app.get("/", (request, response) => {
    response.send("Hello, Express!");
  });

  app.listen(3000, () => {
    console.log("Server running on port 3000");
  });
  ```

* **Testing**: Run the server with the command `node app.js` and open your web browser to `http://localhost:3000/` to check if the server is working.

---

## 2. Defining a Route

- **Route Syntax**: Routes are defined using `app.METHOD(path, handler)` where:

  - `METHOD` refers to the HTTP method (e.g., `get()`, `post()`, `put()`, `delete()`).
  - The **Handler Function** processes the request (`request`) and sends a response (`response`).

  ```javascript
  app.get("/about", (request, response) => {
    response.send("About Us");
  });
  ```

---

## 3. Handling Routes

- **Handling Multiple Routes**: You can handle different types of HTTP requests (e.g., `GET`, `POST`, etc.) for the same URL.

  ```javascript
  app.get("/login", (request, response) => {
    response.send("Login Page");
  });

  app.post("/login", (request, response) => {
    response.send("Logging in...");
  });
  ```

- **Route Handlers with Callbacks**:

  ```javascript
  app.get(
    "/home",
    (request, response, next) => {
      console.log("Request received at /home");
      next(); // Passes control to the next middleware or route handler
    },
    (request, response) => {
      response.send("Home Page");
    }
  );
  ```

---

## 4. Route and Query Parameters

- **Route Parameters**: You can extract variables directly from the URL using `:param` syntax.

  ```javascript
  app.get("/user/:id", (request, response) => {
    response.send(`User ID: ${request.params.id}`);
  });
  ```

- **Query Parameters**: Query parameters are extracted from the URL's query string.

  ```javascript
  app.get("/search", (request, response) => {
    response.send(`Search term: ${request.query.term}`);
  });
  ```

---

## 5. How Middleware Works

- **Middleware**: Middleware functions are executed during the request-response cycle. They can modify the request or response or terminate the request-response cycle.

  - **Syntax**: `app.use()` applies middleware globally, while you can also apply middleware to specific routes.

  ```javascript
  app.use((request, response, next) => {
    console.log("Middleware executed");
    next(); // Pass control to the next middleware
  });
  ```

---

## 6. Chaining of Middlewares

- Multiple middleware functions are executed in the order they are defined.

  ```javascript
  app.use(express.json()); // Middleware for parsing JSON bodies
  app.use(express.urlencoded()); // Middleware for parsing URL-encoded bodies
  ```

- **Example of multiple middlewares for a route**:

  ```javascript
  app.get(
    "/user",
    (request, response, next) => {
      console.log("Logging request");
      next();
    },
    (request, response) => {
      response.send("User Profile");
    }
  );
  ```

---

## 7. Types of Middlewares

1. **Application-Level Middleware**: Middleware attached to the Express application instance (`app.use()`).
2. **Router-Level Middleware**: Middleware applied to specific routes defined by a router.

   ```javascript
   const router = express.Router();
   router.use((request, response, next) => {
     console.log("Router middleware");
     next();
   });
   app.use("/api", router); // Apply router-level middleware to /api path
   ```

3. **Built-In Middleware**: Express provides built-in middleware like `express.json()`, `express.static()`, etc.
4. **Error-Handling Middleware**: Middleware used to handle errors globally.

   ```javascript
   app.use((error, request, response, next) => {
     response.status(500).send("Something went wrong");
   });
   ```

---

## 8. Connecting to MongoDB with Mongoose

- **Install Mongoose**: To interact with MongoDB in an object-oriented way, install Mongoose:

  ```bash
  npm install mongoose
  ```

- **Setting up MongoDB Connection**:

  ```javascript
  const mongoose = require("mongoose");
  mongoose
    .connect("mongodb://localhost/my_database", {
      useNewUrlParser: true,
      useUnifiedTopology: true,
    })
    .then(() => console.log("Successfully connected to MongoDB"))
    .catch((error) => console.error("Connection failed", error));
  ```

---

## 9. Validation Types and Defaults, Models

- **Schema Definition**: Mongoose allows you to define the structure of the data (schema).

  ```javascript
  const userSchema = new mongoose.Schema({
    name: { type: String, required: true }, // name is a required field
    age: { type: Number, default: 18 }, // age defaults to 18 if not specified
  });
  ```

- **Creating a Model**:

  ```javascript
  const User = mongoose.model("User", userSchema);
  ```

---

## 10. CRUD Operations

- **Create**: Insert a new document into the collection.

  ```javascript
  User.create({ name: "Alice", age: 30 }).then((user) =>
    console.log("User created:", user)
  );
  ```

- **Read**: Retrieve documents from the database.

  ```javascript
  User.find({ name: "Alice" }).then((users) => console.log(users));
  ```

- **Update**: Modify an existing document.

  ```javascript
  User.updateOne({ name: "Alice" }, { $set: { age: 31 } }).then((result) =>
    console.log("Update result:", result)
  );
  ```

- **Delete**: Remove a document from the collection.

  ```javascript
  User.deleteOne({ name: "Alice" }).then((result) =>
    console.log("Delete result:", result)
  );
  ```

---

## 11. API Development

- **Basic CRUD API** for user management:

  - **Create**: `POST /users`
  - **Read**: `GET /users`
  - **Update**: `PUT /users/:id`
  - **Delete**: `DELETE /users/:id`

  ```javascript
  app.get("/users", (request, response) => {
    User.find({}, (error, users) => response.json(users));
  });

  app.post("/users", (request, response) => {
    User.create(request.body, (error, user) => response.json(user));
  });
  ```

---

## 12. Why Session Management

- **Sessions**: Sessions allow you to store user-specific data (e.g., login state, shopping cart contents) across multiple requests.
- **Install Express Session**:

  ```bash
  npm install express-session
  ```

- **Set up Session Middleware**:

  ```javascript
  const session = require("express-session");
  app.use(
    session({
      secret: "mysecretkey",
      resave: false,
      saveUninitialized: true,
    })
  );
  ```

---

## 13. Cookies and cookie-parser

- **Cookies**: Cookies store small pieces of data on the client-side and can be used to track session information or preferences.
- **Install cookie-parser**:

  ```bash
  npm install cookie-parser
  ```

- **Using cookie-parser middleware**:

  ```javascript
  const cookieParser = require("cookie-parser");
  app.use(cookieParser());

  app.get("/setcookie", (request, response) => {
    response.cookie("username", "John");
    response.send("Cookie is set");
  });

  app.get("/getcookie", (request, response) => {
    response.send(`Cookie value: ${request.cookies.username}`);
  });
  ```

---

## 14. Sessions

- **Session Middleware**:

  ```javascript
  const session = require("express-session");
  app.use(
    session({
      secret: "mysecretkey",
      resave: false,
      saveUninitialized: true,
    })
  );
  ```

- **Setting session data**:

  ```javascript
  app.get("/setsession", (request, response) => {
    request.session.user = "John";
    response.send("Session set");
  });
  ```

---

## 15. Why and What Security

- **Why Security**: Security is essential to protect your application from attacks such as Cross-Site Scripting (XSS), Cross-Site Request Forgery (CSRF), and to ensure data privacy and integrity.
- **Security Best Practices**:

  - Use HTTPS for encrypted communication.
  - Sanitize inputs to prevent malicious scripts (XSS).
  - Use anti-CSRF tokens to prevent unauthorized requests.

---

## 16. Helmet Middleware

- **Helmet**: Helmet is a collection of middleware functions to help secure HTTP headers and protect against vulnerabilities such as Clickjacking, Cross-Site Scripting (XSS), and others.

  ```javascript
  const helmet = require("helmet");
  app.use(helmet());
  ```

- **Benefits**: Protects against a variety of web security threats.

---

## 17. Using a Template Engine Middleware

- **EJS (Embedded JavaScript)**: EJS is a simple templating engine for generating HTML with JavaScript.

  - **Install EJS**: `npm install ejs`
  - **Setup Template Engine**:

    ```javascript
    app.set("view engine", "ejs");
    app.get("/home", (request, response) => {
      response.render("index", { title: "Home Page" });
    });
    ```

---

## 18. Stylus CSS Preprocessor

- **Stylus**: Stylus is a CSS preprocessor that makes writing CSS easier and more maintainable.

  - **Install Stylus Middleware**:

    ```bash
    npm install stylus stylus-middleware
    ```

  - **Setup**:

    ```javascript
    app.use(
      stylus.middleware({
        src: path.join(__dirname, "stylus"),
        dest: path.join(__dirname, "public/styles"),
      })
    );
    ```

---

## Connect

- [![GitHub](https://img.shields.io/badge/GitHub-omteja04-181717?logo=github)](https://github.com/omteja04)
- [![LinkedIn](https://img.shields.io/badge/LinkedIn-omteja-0000FF?logo=linkedin)](https://linkedin.com/in/omteja)
