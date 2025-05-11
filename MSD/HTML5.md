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

- The World Wide Web (WWW) is a system of interlinked hypertext documents and multimedia content accessed via the Internet.
- Enables users to view websites, click links, and interact with web applications.
- Basic Components of the Web
  - **Browser**: Software to view web content (e.g., Chrome, Firefox, Edge)
  - **URL (Uniform Resource Locator)**: Address used to access resources (e.g., https://example.com)
  - **HTTP/HTTPS**: Protocols for data transfer between client and server
  - **Web Server**: Stores and serves website content (e.g., Apache, Nginx)
  - **Web Page**: Document written in HTML, viewed in a browser
  - **Web Application**: Dynamic, interactive website with client-server architecture

## Overview of Web Technologies

### Front-End Technologies (Client-Side)

- Technologies the user sees and interacts with in the browser
  - **HTML**: Structure/content of web pages
  - **CSS**: Styles and layouts (colors, fonts, spacing)
  - **JavaScript**: Interactivity (animations, dynamic data, forms)
  - **Frameworks/Libraries**: React, Angular, Vue.js (for building complex UIs)
  - **Responsive Design**: Techniques (media queries, flexbox) for device adaptation

### Back-End Technologies (Server-Side)

- Handle business logic, database operations, server communication
  - **Languages**: Java, Python, PHP, Ruby, Node.js
  - **Web Frameworks**: Express (Node.js), Django (Python), Laravel (PHP)
  - **Database**: Store/retrieve data (MySQL, MongoDB, PostgreSQL)
  - **Authentication**: Secure user access (login/logout/session/cookies)

### Database Technologies

- Store user information, content, application data
  - **Relational DB**: MySQL, PostgreSQL (SQL, structured schemas)
  - **NoSQL DB**: MongoDB, Firebase (JSON-like, flexible documents)

### Web Servers

- Serve static/dynamic content to clients
  - **Apache**: Most common open-source server
  - **Nginx**: Efficient, high-performance server
  - **Node.js**: Server environment for backend JavaScript

### Protocols

- Rules for data transmission
  - **HTTP/HTTPS**: Transfers data (HTTPS is secure)
  - **FTP**: Transfers files
  - **TCP/IP**: Foundational internet protocol

### APIs (Application Programming Interfaces)

- Enable communication between client and server
  - Example: Weather website fetching data from a weather API
  - Uses JSON/XML for data exchange

### Web Development Tools

- **VS Code**: Popular code editor
- **Git & GitHub**: Version control and collaboration
- **Browser DevTools**: Inspect/debug HTML, CSS, JS
- **Postman**: Test APIs
- **Package Managers**: npm/yarn for dependencies

### Deployment and Hosting

- Platforms for deploying web apps:
  - GitHub Pages (static sites)
  - Netlify, Vercel
  - Heroku, Firebase
  - AWS, Azure, GCP (cloud platforms)

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

## Types of Elements in HTML

### Block-level Elements

- Start on a new line, take full width
- Used for: sections, paragraphs, headers
- Examples: `div`, `p`, `h1`–`h6`, `section`, `article`, `header`, `footer`, `nav`, `ul`, `ol`, `li`, `table`, `form`

### Inline Elements

- Do not start on a new line, only take needed width
- Used for: styling, formatting within blocks
- Examples: `span`, `a`, `strong`, `em`, `img`, `label`, `input`, `abbr`, `code`

### Empty (Void) Elements

- No closing tag, cannot contain content
- Used for: line breaks, images, input fields
- Examples: `br`, `hr`, `img`, `input`, `link`, `meta`, `source`, `embed`

### Semantic vs Non-Semantic Elements

- **Semantic:** Clearly describe their purpose
  - Examples: `header`, `footer`, `article`, `nav`, `aside`, `main`
- **Non-Semantic:** Do not convey meaning
  - Examples: `div`, `span`

---

## HTML Attributes

### What are Attributes?

- Extra info in tags to define properties/behavior
- Format: `name="value"` in the opening tag

### Common Attributes

- `id`, `class`, `src`, `alt`, `href`, `title`, `style`, `target`, `disabled`

### Boolean Attributes

- Presence means true (no value needed)
- Examples: `checked`, `disabled`, `readonly`

### Rules

- Values in quotes
- Names case-insensitive (lowercase recommended)
- Some are global, some tag-specific

---

## HTML Metadata Elements

### What is Metadata?

- Data about the webpage, not shown on page
- Placed in `<head>`

### Common Metadata Elements

- `title`: Page title (browser tab, SEO)
- `meta`: Charset, description, author, viewport
- `link`: Attach external files (CSS)
- `style`: Internal CSS
- `script`: JS files or code
- `base`: Base URL for relative links

---

## Sectioning Elements

### Purpose

- Structure webpage into logical, accessible sections
- Placed in `<body>`

### Key Sectioning Elements

- `header`: Intro section (logo, nav)
- `footer`: Page/section footer (copyright, contact)
- `nav`: Navigation links
- `section`: Thematic group of content
- `article`: Self-contained content (blog post, news)
- `aside`: Tangential content (sidebars, quotes)
- `main`: Main content (excludes header/footer/aside)
- `h1`–`h6`: Headings (importance order)

### Benefits

- Improved accessibility
- SEO benefits
- Maintainable code
- Responsive design support

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
