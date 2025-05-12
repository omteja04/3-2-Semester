---
markmap:
  colorFreezeLevel: 0
  maxWidth: 400
  initialExpandLevel: 3
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

- **Basic Setup**:

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

- **Testing**: Run the server with the command `node app.js` and open your web browser to `http://localhost:3000/` to check if the server is working.

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

- **Checking the Connection Status**

  ```js
  mongoose.connection.once("open", () => {
    console.log("MongoDB connection established");
  });
  ```

- **Disconnecting from MongoDB**
  ```js
  mongoose
    .disconnect()
    .then(() => {
      console.log("Disconnected from MongoDB");
    })
    .catch((err) => {
      console.error("Error disconnecting from MongoDB:", err);
    });
  ```

---

## 9. Validation Types and Defaults, Models

## 1. Validation Types

### 1.1. Required

- `required: true`
- `required: [true, 'Message']`

### 1.2. String Length

- `minlength`
- `maxlength`

### 1.3. Pattern Matching

- `match: /regex/`
- **Example for Username**: `username: { type: String, match: /^[a-zA-Z0-9]+$/ }`
  - Ensures the username only contains alphanumeric characters (no spaces or special characters).

### 1.4. Numeric

- `min`
- `max`

### 1.5. Enum

- `enum: ['admin', 'user', 'guest']`

### 1.6. Custom Validator

- `validate: { validator, message }`

## 2. Default Values

### 2.1. Static Defaults

- `default: 'active'`
- `default: Date.now`

### 2.2. Dynamic Defaults

- `` default: function() { return `user_${Math.random().toString(36).substr(2, 9)}`; }``

## 3. Mongoose Models

### Creating Schema - Structure of the data

- ```javascript
  const userSchema = new mongoose.Schema({
    name: { type: String, required: true }, // name is a required field
    age: { type: Number, default: 18 }, // age defaults to 18 if not specified
  });
  ```

### Creating a Model

- `mongoose.model('User', userSchema)`

### Creating a Document

- `new User({ ... }).save()`

### Querying

- `find()`, `findOne()`, `findById()`

### Updating

- `updateOne()`, `findOneAndUpdate()`

### Deleting

- `deleteOne()`, `deleteMany()`

---

## 10. CRUD Operations

## Create

- Create new documents in MongoDB

### Creating a Single Document

- `save()` method
  - Create instance of model
  - Save to DB

### Creating Multiple Documents

- `insertMany()`
  - Insert array of documents

## Read

- Querying documents from MongoDB

### Finding All Documents

- `find()`

### Finding a Single Document

- `findOne()`
- `findById()`

### Filtering Data

- Query operators
  - `$gt`, `$lt`, etc.

## Update

- Modify existing documents

### Updating a Single Document

- `updateOne()`
  - Use `$set` for updating fields

### Updating Multiple Documents

- `updateMany()`

### Find and Update

- `findOneAndUpdate()`
  - `{ new: true }` returns updated document

## Delete

- Remove documents

### Delete Single Document

- `deleteOne()`

### Delete Multiple Documents

- `deleteMany()`

### Delete by ID

- `findByIdAndDelete()`

---

## 11. API Development

### 1. What is Express.js?

- Minimal and flexible Node.js web framework
- Simplifies API and web app development

### 2. Setting Up Express

- Install via `npm install express`
- Initialize app with:
  ```js
  const express = require("express");
  const app = express();
  ```

### 3. Basic API Structure

- HTTP methods:

  - `GET`: Read data
  - `POST`: Create data
  - `PUT`: Update data
  - `DELETE`: Remove data

- Route example:

  ```js
  app.get('/api/items', (req, res) => { ... });
  ```

### 4. Middleware

- Functions that run between request and response
- Common types:

  - `express.json()`: Parse JSON bodies
  - Custom middleware (e.g., logging, auth)
  - Third-party (e.g., `cors`, `morgan`)

### 5. Route Handling

- Modular routes:

  - `express.Router()`
  - Group related endpoints

- Route parameters and query strings:

  ```js
  app.get('/api/user/:id', (req, res) => { ... });
  ```

### 6. Error Handling

- Centralized error middleware
- 404 handler:

  ```js
  app.use((req, res) => res.status(404).send("Not Found"));
  ```

### 7. Working with Databases

- Use ORMs like Mongoose, Sequelize
- Connect in app setup
- Async handlers with `async/await`

### 8. Environment Variables

- Use `.env` + `dotenv`
- Store sensitive info (e.g., DB_URI, PORT)

### 9. Security Best Practices

- Use `helmet`, `cors`, and `rate-limit`
- Validate inputs (e.g., `Joi`, `express-validator`)
- Sanitize user data

### 10. Deployment

- Use `pm2` for production
- Deploy on platforms like:

  - Heroku
  - Render
  - Vercel
  - AWS

---

## 12. Why Session Management

### 1. User Authentication and Authorization

- Track login status
- Store user ID, permissions, role
- Session ID stored as a cookie
- Enables access to protected resources
- Avoids repeated login

### 2. Maintaining State Across Requests

- HTTP is stateless
- Sessions preserve:
  - Shopping cart
  - Multi-step form
  - User preferences

### 3. Personalized User Experience

- Store themes, languages
- Recently viewed items
- Recommendations and notifications

### 4. Handling Sensitive Data Securely

- Sensitive data stored server-side
- Only session ID sent to client
- Protects against:
  - XSS
  - Session hijacking

### 5. Enhancing Security

- Session timeouts
- Encrypted sessions
- Prevent session fixation

### 6. Scaling Applications

- Load-balanced servers
- Shared session store (Redis, DB)
- Sticky sessions

### 7. Handling Multiple User Roles

- Store roles in session
- Role-based access control (RBAC)
- Protect admin-level resources

### 8. Reducing Server Load

- Cache key data in session
- Fewer DB queries
- Faster response times

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

### Overview

- Server-side mechanism to persist user data across HTTP requests
- Identified using a unique **Session ID**
- Data is stored on the server; only the session ID is sent to the client (usually as a cookie)

### Why Needed?

- HTTP is stateless
- Use sessions to:
  - Track login status
  - Maintain shopping carts or form data
  - Personalize user experience

### How It Works

- **Login**
  - User logs in, server creates session, sets session ID cookie
- **Subsequent Requests**
  - Client sends session ID, server retrieves session data
- **Session Expiry**
  - Can expire after inactivity or fixed time

### Express.js Integration

- Use `express-session` middleware
- Install: `npm install express-session`
  ```js
  app.use(
    session({
      secret: "your_secret_key",
      resave: false,
      saveUninitialized: true,
      cookie: { secure: false },
    })
  );
  ```

#### Routes Example

- `/login`: Sets session data
- `/dashboard`: Reads session data
- `/logout`: Destroys session

### Configuration Options

- `secret`: Signs the session ID cookie
- `resave`: Avoid resaving unchanged sessions
- `saveUninitialized`: Save empty sessions
- `cookie` options:

  - `secure`: HTTPS only
  - `maxAge`: Expiry time
  - `httpOnly`: Prevent JS access

### Storage Options

- Default: MemoryStore (not for production)
- Production Stores:

  - Redis (via `connect-redis`)
  - MongoDB (via `connect-mongo`)
  - SQL DBs (via Sequelize/MySQL adapters)

### Security Tips

- Set `secure` and `httpOnly` flags
- Use `maxAge` for expiry
- Regenerate session ID on login with `req.session.regenerate()`

### Benefits

- Maintains state across requests
- Secure server-side storage
- Easy to integrate and customize

### Conclusion

- Sessions are key for stateful web apps
- Use `express-session` for Express apps
- Prioritize security and scalability

---

## 15. Why and What Security

### Why Security is Needed

- **Data Protection**: Safeguard sensitive data (e.g., passwords, personal info).
- **Unauthorized Access**: Prevent unauthorized users from accessing resources.
- **Maintain Integrity**: Protect from data corruption or DoS attacks.
- **User Privacy**: Ensure user privacy and legal compliance (e.g., GDPR).
- **Compliance**: Meet industry standards to avoid legal consequences.
- **Financial Loss**: Avoid breaches leading to financial and reputation damage.

### What Security Measures to Implement

#### 1. Authentication & Authorization

- Verify user identity with strong passwords, OAuth, or JWT.
- Implement multi-factor authentication.
- Enforce least privilege for access control.

#### 2. Secure Communication (HTTPS)

- Use SSL/TLS encryption for data transmission.
- Always enforce HTTPS for secure communication.

#### 3. Input Validation & Sanitization

- Prevent SQL injection and XSS attacks using prepared statements and input sanitization.

#### 4. XSS Protection

- Sanitize user inputs and set Content Security Policy (CSP).

#### 5. CSRF Protection

- Use anti-CSRF (Cross-Site Request Forgery) tokens for state-changing actions.

#### 6. Session Management

- Implement session timeouts and regenerate session IDs on login.
- Store session data in secure, HttpOnly cookies.

#### 7. Security Headers

- Use headers like X-Content-Type-Options, X-Frame-Options, and HSTS.

#### 8. Rate Limiting & Throttling

- Implement rate limiting to prevent brute-force and DoS attacks.

#### 9. Logging & Monitoring

- Secure logs and monitor real-time events for suspicious behavior.

#### 10. Regular Security Audits & Penetration Testing

- Use automated security tools and perform penetration testing.

#### 11. Database Security

- Use parameterized queries, encrypt sensitive data, and limit access.

#### 12. File Upload Security

- Restrict file types, check MIME types, and store files securely.

#### 13. Regular Software Updates

- Keep dependencies and software updated to patch known vulnerabilities.

---

## 16. Helmet Middleware

### Why Use Helmet?

- Protects from XSS, clickjacking, MITM attacks
- Secures HTTP headers

### How Helmet Works

- Collection of middleware
- Sets various HTTP headers
- Configurable (use all or some)

### Common Middleware and Headers

#### helmet.contentSecurityPolicy()

- Prevents XSS attacks
- Header: `Content-Security-Policy`

#### helmet.hidePoweredBy()

- Hides Express.js technology stack
- Header: `X-Powered-By`

#### helmet.xssFilter()

- Enables XSS filter in browsers
- Header: `X-XSS-Protection`

#### helmet.frameguard()

- Prevents clickjacking
- Header: `X-Frame-Options`
- Options: `deny`, `sameorigin`

#### helmet.noSniff()

- Prevents MIME-type sniffing
- Header: `X-Content-Type-Options`

#### helmet.referrerPolicy()

- Controls `Referer` header behavior
- Header: `Referrer-Policy`
- Options: `no-referrer`, `strict-origin`, etc.

#### helmet.dnsPrefetchControl()

- Controls DNS prefetching
- Header: `X-DNS-Prefetch-Control`

#### helmet.hsts()

- Enforces HTTPS connections
- Header: `Strict-Transport-Security`

#### helmet.ieNoOpen()

- Prevents auto-execution of downloads in IE
- Header: `X-Download-Options`

#### helmet.cacheControl()

- Controls caching behavior
- Header: `Cache-Control`

### Usage

- Installation

  ```bash
  npm install helmet
  ```

- Usage
  ```javascript
  const helmet = require("helmet");
  app.use(helmet());
  ```

---

## 17. Using a Template Engine Middleware

### Purpose

- Dynamically generate HTML
- Separate business logic from UI

### Common Template Engines

- EJS (Embedded JavaScript Templates)
- Pug (formerly Jade)
- Handlebars
- Mustache

### Setup (Using EJS as Example)

#### 1. Install

- `npm install ejs`

#### 2. Configure

- `app.set('view engine', 'ejs')`
- `app.set('views', path.join(__dirname, 'views'))`

#### 3. Render View

- Use `res.render('viewName', data)`
- `res.render('index', { name: 'John Doe' })`

### Example: EJS

#### Server Code

```js
const express = require("express");
const path = require("path");
const app = express();
app.set("view engine", "ejs");
app.set("views", path.join(__dirname, "views"));
app.get("/", (req, res) => {
  res.render("index", { name: "John Doe" });
});
```

#### index.ejs

```html
<h1>Hello, <%= name %>!</h1>
<p>Welcome to Express with EJS!</p>
```

### Pug Alternative

#### Install

- `npm install pug`

#### Syntax

```pug
html
  head
    title Express with Pug
  body
    h1 Hello, #{name}!
    p Welcome to Express with Pug!
```

### Benefits

- Separation of concerns
- Dynamic HTML
- Clean and maintainable code
- Built-in logic support (loops, conditionals, etc.)

### Conclusion

- Makes web apps dynamic
- Works with various engines
- Ideal for clean server-rendered web pages

---

## 18. Stylus CSS Preprocessor

- **Stylus**: Stylus is a CSS preprocessor that makes writing CSS easier and more maintainable.

- **Variables**:

  - Can be used throughout the stylesheet for consistent styling.
  - e.g., `primary = #ffffff`.

- **Nesting**:

  - Nesting selectors inside one another helps organize the CSS structure, e.g., `nav ul li a`.

- **Mixins**:

  - Functions or reusable blocks of styles. For example:

    ```stylus
    rounded(radius)
      border-radius: radius
    ```

- **Color Functions**:

  - Functions like `lighten()` modify colors, e.g., `background: lighten($primary, 10%)`.

- **Loops**:

  - Use loops to apply styles dynamically to a group of elements, e.g.:

    ```stylus
    for i in (1 .. 15)
      div:nth-child({i})::after
        content: \" i \"
    ```

- **Conditionals**:

  - `if` statements for conditional styles:

    ```stylus
    if $theme == 'dark'
      body
        background: #333
        color: white
    ```

### Express Setup for Stylus

- **Setting up Express**:

  - Used to create a server and serve files.
  - The `express.static()` middleware serves static files like CSS, JavaScript, and HTML.

- **Using Stylus Middleware**:

  - Stylus middleware compiles `.styl` files into `.css` before serving them to the client.

- **Install Stylus Middleware**:

  ```bash
  npm install stylus
  ```

- **Example Setup**:

  ```js
  app.use(
    stylus.middleware({
      src: path.join(__dirname, "public"),
      dest: path.join(__dirname, "public"),
    })
  );
  ```

### Combining Everything

- **How Stylus Compiles**:

  - `.styl` files are compiled into `.css` by Stylus middleware and applied to HTML elements.

- **Output**:

  - When you visit the Express server (e.g., `localhost:3000`), the HTML file will display styled elements based on the `.styl` file.

---

## Connect

- [![GitHub](https://img.shields.io/badge/GitHub-omteja04-181717?logo=github)](https://github.com/omteja04)
- [![LinkedIn](https://img.shields.io/badge/LinkedIn-omteja-0000FF?logo=linkedin)](https://linkedin.com/in/omteja)
