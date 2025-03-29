const fs = require("fs");
// Create and write to src.txt
fs.writeFileSync("src.txt", "Mongo, Express, Angular, Node");
// Read the file
const data = fs.readFileSync("src.txt", "utf8");
console.log("File Content:", data);
// Append data
fs.appendFileSync("src.txt", "\nReact, Vue");
console.log("New content added.")