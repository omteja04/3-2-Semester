const http = require("http");

const server = http.createServer((req, res) => {
    res.writeHead(200, { "Content-Type": "text/html" });
    res.write("<h1>Welcome to The Server</h1>");
    res.end();
});

server.listen(3000, () => {
    console.log("Server is running at http://localhost:3000");
});
