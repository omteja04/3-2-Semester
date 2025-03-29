export class User {
    validate(username, password) {
        return username === password ? "Login Successful" : "Unauthorized Access";
    }
}