---
markmap:
  colorFreezeLevel: 0
  maxWidth: 400
  initialExpandLevel: 2
  pan: true
  zoom: true
---

# HTML5

## Introduction to Web

- The web is a system of interlinked hypertext documents and multimedia content that is accessible over the internet.
- **Web Technologies**:
  - HTML (Hypertext Markup Language)
  - CSS (Cascading Style Sheets)
  - JavaScript (for interactivity)
  - Server-Side Technologies (PHP, Node.js, etc.)

## Overview of Web Technologies

- **HTML**: Structure of the web page.
- **CSS**: Presentation and design of the web page.
- **JavaScript**: Interaction and dynamic content on the web page.
- **Backend**: Server-side processing (e.g., Node.js, Python).
- **Databases**: Store data (e.g., MySQL, MongoDB).
- **Web Servers**: Serve the content (e.g., Apache, Nginx).

## HTML - Introduction

- HTML stands for **Hypertext Markup Language**.
- HTML is used to create and structure web content such as headings, paragraphs, links, images, tables, etc.
- HTML is composed of elements that represent content and structure on a webpage.

## HTML - Need

- **Structure**: HTML provides the backbone of web pages by structuring content.
- **Separation of Content and Presentation**: HTML allows for clean separation between content (HTML) and design (CSS).
- **Universality**: HTML is platform-independent and can be rendered in any web browser.

## Case Insensitivity

- HTML is **case-insensitive**.
  - Example: `<title>` and `<TITLE>` are equivalent.
  - However, it is recommended to follow lowercase conventions for consistency.

## Platform-Independence

- HTML is platform-independent, meaning it works on any operating system (Windows, macOS, Linux).
- Web browsers interpret HTML code the same way regardless of the operating system.

## DOCTYPE Declaration

- **Purpose**: The DOCTYPE declaration defines the document type and version of HTML.
- **Example**:

  ```html
  <!DOCTYPE html>
  ```

- It tells the browser to use the latest HTML5 standards.

## Types of HTML Elements

- **Structural Elements**:

  - `<html>`, `<head>`, `<body>`, `<header>`, `<footer>`, etc.

- **Content Elements**:

  - `<p>`, `<h1>`-`<h6>`, `<ul>`, `<ol>`, `<li>`, `<a>`, `<img>`, etc.

## HTML Elements - Attributes

- HTML elements can have attributes that define additional properties.
- Example:

  ```html
  <a href="https://www.example.com">Visit Example</a>
  ```

  - `href` is an attribute of the `<a>` element.

## Metadata Element

- **Purpose**: Provides information about the document, like author, keywords, or character encoding.
- Example:

  ```html
  <meta charset="UTF-8" /> <meta name="author" content="John Doe" />
  ```

## Sectioning Elements

- Sectioning elements help organize content on the page.

  - Example: `<section>`, `<article>`, `<nav>`, `<aside>`, `<header>`, `<footer>`.

- **Purpose**: Improves accessibility and SEO.

  - Example:

    ```html
    <section>
      <h1>Introduction</h1>
      <p>Welcome to the world of HTML.</p>
    </section>
    ```

## Paragraph Element

- **Purpose**: Defines a paragraph of text.

  - Example:

    ```html
    <p>This is a paragraph.</p>
    ```

## Division and Span Elements

- **`<div>`**: Block-level container for grouping content.

  - Example:

    ```html
    <div class="container">
      <h2>Title</h2>
      <p>Some content here.</p>
    </div>
    ```

- **`<span>`**: Inline container for text.

  - Example:

    ```html
    <span class="highlight">Important</span>
    ```

## List Element

- **Ordered List (`<ol>`)**: Used to create numbered lists.

  - Example:

    ```html
    <ol>
      <li>First item</li>
      <li>Second item</li>
    </ol>
    ```

- **Unordered List (`<ul>`)**: Used for bullet-point lists.

  - Example:

    ```html
    <ul>
      <li>Item 1</li>
      <li>Item 2</li>
    </ul>
    ```

## Link Element

- **`<a>`**: Creates a hyperlink.

  - Example:

    ```html
    <a href="https://www.example.com" target="_blank">Visit Example</a>
    ```

- The `href` attribute defines the URL of the linked page.

## Character Entities

- Used to represent special characters.

  - Example:

    ```html
    &lt;
    <!-- Represents '<' -->
    &gt;
    <!-- Represents '>' -->
    &amp;
    <!-- Represents '&' -->
    ```

## HTML5 Global Attributes

- **Attributes common to all HTML elements**:

  - `id`, `class`, `style`, `data-*`, `title`, `lang`, etc.
  - Example:

    ```html
    <div id="main-content" class="container">Content</div>
    ```

## Creating Table Elements

- **Table**: Used to display tabular data.

  - Example:

    ```html
    <table>
      <tr>
        <th>Name</th>
        <th>Age</th>
      </tr>
      <tr>
        <td>John</td>
        <td>30</td>
      </tr>
    </table>
    ```

## Table Elements: Colspan/Rowspan Attributes, Border, Cellspacing, and Cellpadding

- **`colspan`**: Merges columns.

  - Example:

    ```html
    <td colspan="2">Merged Cell</td>
    ```

- **`rowspan`**: Merges rows.

  - Example:

    ```html
    <td rowspan="2">Merged Row</td>
    ```

- **`border`, `cellspacing`, `cellpadding`**: Controls the appearance and spacing of the table.

  - Example:

    ```html
    <table border="1" cellspacing="5" cellpadding="10">
      <tr>
        <td>Content</td>
      </tr>
    </table>
    ```

## Creating Form Elements

- **Form**: A container for user input elements.

  - Example:

    ```html
    <form action="/submit" method="POST">
      <input type="text" name="username" />
      <button type="submit">Submit</button>
    </form>
    ```

## Input Elements - Attributes, Color and Date Pickers, Select and Datalist Elements

- **Input**: Used for user input.

  - Example:

    ```html
    <input type="text" name="email" placeholder="Enter your email" />
    ```

- **Color Picker**:

  ```html
  <input type="color" name="color" />
  ```

- **Date Picker**:

  ```html
  <input type="date" name="birthdate" />
  ```

- **Select and Datalist**: For dropdowns and autocompletion.

  - Example:

    ```html
    <select name="country">
      <option value="usa">USA</option>
      <option value="india">India</option>
    </select>
    ```

## Editing Elements

- **Contenteditable**: Makes an element editable by the user.

  - Example:

    ```html
    <div contenteditable="true">Edit this text</div>
    ```

## Media

- **Audio** and **Video**: Used to embed media files.

  - Example:

    ```html
    <video src="movie.mp4" controls>
      Your browser does not support the video tag.
    </video>
    ```

## Iframe

- **`<iframe>`**: Embeds another HTML document within the current document.

  - Example:

    ```html
    <iframe src="https://www.example.com"></iframe>
    ```

## Why HTML Security

- **HTML security** involves protecting users from vulnerabilities that can be exploited through malicious code.
- Common vulnerabilities: **Cross-Site Scripting (XSS)**, **HTML Injection**, **Clickjacking**.

## HTML Injection, Clickjacking

- **HTML Injection**: Malicious injection of HTML or JavaScript into web pages.
- **Clickjacking**: Deceptive technique where malicious content is placed over a legitimate page to trick users.

## HTML5 Attributes & Events Vulnerabilities

- Common vulnerabilities include **Cross-Site Scripting (XSS)**, **Cross-Site Request Forgery (CSRF)**, and event handler misuse.

## Local Storage Vulnerabilities

- Local storage is used to store data on the client-side but can be vulnerable to **XSS** attacks if not sanitized properly.

## HTML5 - Cross-Browser Support

- Ensure your HTML works across various browsers (Chrome, Firefox, Safari, etc.) by using **progressive enhancement** and **fallbacks**.

## Best Practices For HTML Web Pages

- Use **semantic HTML** for better accessibility and SEO.
- Always **validate HTML** using the W3C validator.
- Follow the **DRY (Don't Repeat Yourself)** principle for code reusability.
- Use external **CSS** and **JavaScript** files.
- Optimize for **performance**: Minify HTML, CSS, and JS, lazy load images, etc.
- **Ensure accessibility**: Use ARIA roles, alt attributes, and proper form labels.

## Connect

- [![GitHub](https://img.shields.io/badge/GitHub-omteja04-181717?logo=github)](https://github.com/omteja04)
- [![LinkedIn](https://img.shields.io/badge/LinkedIn-omteja-0000FF?logo=linkedin)](https://linkedin.com/in/omteja)
