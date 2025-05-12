---
markmap:
  colorFreezeLevel: 0
  maxWidth: 400
  initialExpandLevel: 2
  pan: true
  zoom: true
---

# MongoDB

## 1. Document Database Overview

- Document-oriented storage
- Flexible schema
- JSON-like format (BSON)
- High scalability

## 2. Understanding JSON

- JavaScript Object Notation (JSON)
- Lightweight data interchange format
- Human-readable
- Used for data storage and communication
- MongoDB uses BSON (Binary JSON) for more efficient storage

## 3. MongoDB Structure and Architecture

- **Databases**: Container for collections
- **Collections**: Container for documents
- **Documents**: Individual records (JSON/BSON format)
- **Indexes**: Improve query performance
- **Replica Sets**: Data redundancy and high availability
- **Sharding**: Horizontal scaling for large datasets

## 4. MongoDB Remote Management

- Use MongoDB Atlas or third-party tools to manage remotely
- Supports cloud-based management
- Provides a web-based interface
- Allows scaling and backups

## 5. Installing MongoDB on Local Computer (Mac or Windows)

### Steps for Windows:

    1. Download MongoDB installer from [MongoDB website](https://www.mongodb.com/try/download/community)
    2. Run the installer and follow the setup instructions
    3. Add MongoDB to PATH for easy command-line access
    4. Verify installation by running `mongod` in the terminal

### Steps for Mac:

    1. Install MongoDB using Homebrew: `brew tap mongodb/brew && brew install mongodb-community`
    2. Start MongoDB using `brew services start mongodb/brew/mongodb-community`
    3. Verify installation with `mongod`

## 6. Introduction to MongoDB Cloud

- MongoDB Atlas: Fully managed cloud service
- Offers automatic scaling, backup, and monitoring
- Available on AWS, Azure, Google Cloud
- Free tier for developers

## 7. Create MongoDB Atlas Cluster

### Steps to create an Atlas cluster:

    1. Sign in to [MongoDB Atlas](https://www.mongodb.com/cloud/atlas)
    2. Click "Build a Cluster"
    3. Choose a cloud provider, region, and cluster tier
    4. Configure cluster settings (e.g., authentication, network access)
    5. Wait for the cluster to be provisioned (takes a few minutes)
    6. Connect to your cluster by clicking "Connect" and follow the instructions

## 8. GUI Tools Overview

- MongoDB Compass: Official GUI for MongoDB
- Provides a graphical interface to interact with MongoDB data
- Supports schema visualization, document querying, and performance analysis
- Offers built-in features for data aggregation and CRUD operations

## 9. Install and Configure MongoDB Compass

### Steps to install Compass:

    1. Download MongoDB Compass from [MongoDB website](https://www.mongodb.com/products/compass)
    2. Run the installer and follow the setup instructions
    3. Launch Compass after installation
    4. To connect, use your MongoDB Atlas connection string or local instance URI
    5. Enter the credentials (username, password) for Atlas or your local MongoDB instance

## 10. Introduction to the MongoDB Shell

- MongoDB Shell: Command-line interface for MongoDB
- Allows direct interaction with MongoDB instance
- Provides a JavaScript engine for writing scripts
- Can perform CRUD operations, manage databases and collections

## 11. MongoDB Shell JavaScript Engine

- The MongoDB Shell uses JavaScript to interact with the database
- Supports JavaScript functions for querying, aggregating, and modifying data
- Allows scripting and automation

## 12. MongoDB Shell JavaScript Syntax

- JavaScript syntax for interacting with MongoDB
- Basic operations like `find()`, `insert()`, `update()`, `delete()`
- Use `$` operators for advanced querying
- Examples: `db.users.find()`, `db.users.insertOne({name: "Alice"})`

## 13. Introduction to MongoDB Data Types

- MongoDB supports various data types, including:
  - **String**: Represents textual data
  - **Integer**: 32-bit or 64-bit integer
  - **Double**: 64-bit floating-point number
  - **Boolean**: True or false values
  - **Date**: Date and time
  - **Array**: Ordered list of values
  - **Object**: Embedded document
  - **Null**: Represents an empty or undefined value
  - **ObjectId**: Unique identifier for documents

## 14. Introduction to CRUD Operations on Documents

- **Create**: Insert documents into a collection (`insertOne()`, `insertMany()`)
- **Read**: Retrieve documents using queries (`find()`)
- **Update**: Modify existing documents (`updateOne()`, `updateMany()`)
- **Delete**: Remove documents (`deleteOne()`, `deleteMany()`)

## 15. Create and Delete Databases and Collections

- **Create Database**: MongoDB creates databases when documents are inserted into collections
- **Create Collection**: Explicitly create a collection using `createCollection()`
- **Drop Collection**: Remove a collection using `drop()`
- **Drop Database**: Delete an entire database using `dropDatabase()`

## 16. Introduction to MongoDB Queries

- MongoDB queries allow retrieving and manipulating data
- Use comparison operators, logical operators, and projections for complex queries
- Queries can include filters, sorting, and limiting results
- Advanced querying with aggregation framework
