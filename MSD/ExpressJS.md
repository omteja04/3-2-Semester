---
markmap:
  colorFreezeLevel: 0
  maxWidth: 400
  initialExpandLevel: 2
  pan: true
  zoom: true
---

# Express.js

## Express Development Environment

- Install dependencies: `npm init`, `npm install express`
- Set up basic server: `const app = express();`
- Start server: `app.listen(3000, () => { console.log('Server running') });`

## Defining a Route

- Use `app.get('/route', callback)` to define routes.
- Define route for homepage:
  ```javascript
  app.get("/", (req, res) => {
    res.send("Hello World");
  });
  ```

## Handling Routes

- Handle multiple methods: `get`, `post`, `put`, `delete`
- Example:

  ```javascript
  app.post("/data", (req, res) => {
    res.send("Data received");
  });
  ```

## Route and Query Parameters

- Route parameters: `/user/:id`
- Query parameters: `/search?q=keyword`
- Access via `req.params` and `req.query`:

  ```javascript
  app.get("/user/:id", (req, res) => {
    const userId = req.params.id;
    const search = req.query.q;
  });
  ```

## How Middleware Works

- Middleware functions modify request/response.
- Example middleware:

  ```javascript
  app.use((req, res, next) => {
    console.log("Request received");
    next();
  });
  ```

## Chaining of Middlewares

- Multiple middleware functions can be used in sequence.

  ```javascript
  app.use(middleware1, middleware2, middleware3);
  ```

## Types of Middlewares

- Application-level middleware
- Router-level middleware
- Error-handling middleware
- Built-in middleware (e.g., `express.static`, `express.json`)

## Connecting to MongoDB with Mongoose

- Install Mongoose: `npm install mongoose`
- Connect to MongoDB:

  ```javascript
  const mongoose = require("mongoose");
  mongoose.connect("mongodb://localhost/mydb", {
    useNewUrlParser: true,
    useUnifiedTopology: true,
  });
  ```

## Validation Types and Defaults, Models

- Define model schema:

  ```javascript
  const userSchema = new mongoose.Schema({
    name: { type: String, required: true },
    age: { type: Number, default: 18 },
  });
  const User = mongoose.model("User", userSchema);
  ```

## CRUD Operations

- **Create** a new document:

  ```javascript
  const newUser = new User({ name: "Alice", age: 25 });
  newUser.save((err) => {
    if (err) return console.error(err);
    console.log("User created");
  });
  ```

- **Read** a document:

  ```javascript
  User.find({ name: "Alice" }, (err, users) => {
    if (err) return console.error(err);
    console.log("Users found:", users);
  });
  ```

- **Update** a document:

  ```javascript
  User.updateOne({ name: "Alice" }, { age: 26 }, (err, result) => {
    if (err) return console.error(err);
    console.log("User updated:", result);
  });
  ```

- **Delete** a document:

  ```javascript
  User.deleteOne({ name: "Alice" }, (err) => {
    if (err) return console.error(err);
    console.log("User deleted");
  });
  ```

## API Development

- Example API:

  ```javascript
  app.get("/api/users", async (req, res) => {
    const users = await User.find();
    res.json(users);
  });
  ```

## Why Session Management

- Session management helps keep track of user data across multiple requests.
- Common for authentication and user states.

## Cookies and Cookie-Parser

- Install `cookie-parser`: `npm install cookie-parser`
- Use middleware to parse cookies:

  ```javascript
  const cookieParser = require("cookie-parser");
  app.use(cookieParser());
  ```

## Sessions

- Install `express-session`: `npm install express-session`
- Setup session:

  ```javascript
  const session = require("express-session");
  app.use(
    session({ secret: "my-secret", resave: false, saveUninitialized: true })
  );
  ```

## Why and What Security

- Protect your app against common vulnerabilities: XSS, CSRF, etc.
- Use HTTPS, validate inputs, sanitize data.

## Helmet Middleware

- Install `helmet`: `npm install helmet`
- Use Helmet for basic security headers:

  ```javascript
  const helmet = require("helmet");
  app.use(helmet());
  ```

## Using a Template Engine Middleware

- Set up EJS as template engine:

  ```javascript
  app.set("view engine", "ejs");
  app.get("/", (req, res) => {
    res.render("index", { title: "My App" });
  });
  ```

## Stylus CSS Preprocessor

- Install Stylus: `npm install stylus stylus-middleware`
- Set up Stylus middleware:

  ```javascript
  const stylus = require("stylus");
  app.use(
    stylus.middleware({
      src: path.join(__dirname, "stylus"),
      dest: path.join(__dirname, "public/styles"),
    })
  );
  ```

## Connect

- [![GitHub](https://img.shields.io/badge/GitHub-omteja04-181717?logo=github)](https://github.com/omteja04)
- [![LinkedIn](https://img.shields.io/badge/LinkedIn-omteja-0000FF?logo=linkedin)](https://linkedin.com/in/omteja)
