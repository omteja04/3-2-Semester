import { User } from "./login.js";
document.getElementById("loginForm").addEventListener("submit", function (event) {
    event.preventDefault();
    let username = document.getElementById("username").value;
    let password = document.getElementById("password").value;
    let user = new User("Levi", "1234");
    alert(user.validate(username, password));
});