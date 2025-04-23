export class User {
    constructor(username, password) {
        this.username = username;
        this.password = password;
    }
    validate(username, password) {
        return (username === this.username && password === this.password) ? "Login Successful" : "Unauthorized Access";
    }
}