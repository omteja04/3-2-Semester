// MongoDB Playground
// Use Ctrl+Space inside a snippet or a string literal to trigger completions.

// The current database to use.

use("local");
db.msd.insertOne({
    name: "Iron Man",
    age: 48,
    email: "ironman@avengers.com",
    isActive: true
})

db.msd.insertMany([
    { name: "Captain America", age: 101, email: "cap@avengers.com", isActive: true },
    { name: "Thor", age: 1500, email: "thor@asgard.com", isActive: false }
])


db.msd.find();
db.msd.find({ name: "Captain America" });