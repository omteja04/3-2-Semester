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

| Reason        | Explanation                                                |
| ------------- | ---------------------------------------------------------- |
| Structure     | Defines content layout                                     |
| Compatibility | Works on all platforms/browsers                            |
| Interactivity | Enables forms and links                                    |
| Integration   | Works with CSS/JS                                          |
| Accessibility | Semantic tags improve user and search engine understanding |

## Case Insensitivity

- HTML is **case-insensitive**.
- Example: `<title>` and `<TITLE>` are equivalent.
- | Item            | HTML             | XHTML          |
  | --------------- | ---------------- | -------------- |
  | Tag Names       | Case-Insensitive | Case-Sensitive |
  | Attribute Names | Case-Insensitive | Case-Sensitive |
  | Recommendation  | Use lowercase    | Use lowercase  |

## Platform-Independence

- HTML is platform-independent, meaning it works on any operating system (Windows, macOS, Linux).
- Web browsers interpret HTML code the same way regardless of the operating system.
- | Feature                | Platform-Dependent                     | Platform-Independent |
  | ---------------------- | -------------------------------------- | -------------------- |
  | Example                | C/C++, Java with OS-specific libraries | HTML                 |
  | Needs Compilation      | Yes                                    | No                   |
  | Needs Special Software | Often                                  | No (just a browser)  |
  | Portability            | Limited                                | High                 |

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
- **Block-level element** for grouping large sections of content.
- **Use case:** Layout, structuring, and styling large chunks of content.
- **Common use:** Containers for sections, footers, headers, and articles.
- Example:

  ```html
  <div class="container">
    <h2>Title</h2>
    <p>Some content here.</p>
  </div>
  ```

- **`<span>`**: Inline container for text.
  **Inline element** for grouping small sections of content (usually text).
  **Use case:** Styling or manipulating small portions of inline content.
  **Common use:** Highlighting text, applying inline styles.
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

- **`<ul>`**: Defines an **unordered list** (bulleted).

  - **Used for**: Lists where order does not matter.

- **`<ol>`**: Defines an **ordered list** (numbered).

  - **Used for**: Lists where order is important.

- **`<dl>`**: Defines a **definition list** for terms and definitions.

  - **Used for**: Glossaries, FAQs, or terminology lists.

- **`<li>`**: Defines an individual **list item** inside any list.

- Best Practices
  - **Semantics**: Use `<ul>` when the order of items doesn’t matter, `<ol>` when it does, and `<dl>` for definitions.
  - **Accessibility**: Screen readers often announce lists as “list” followed by the count of items, helping users understand the content structure.
  - **Avoid large, unstyled lists**: Apply styles to make lists more readable and visually appealing, especially when presenting a lot of information.

## Link Element

- **`<a>`**: Creates a hyperlinks to external resources, other pages, or specific sections within a page.

- **`href`**: The most important attribute, specifying the destination URL.
- **`target`**: Determines where the link will open (e.g., in the same tab, new tab).
- **`title`**: Provides additional information about the link, often displayed on hover.
- **`rel`**: Specifies the relationship between the linking document and the destination.
- **`download`**: Triggers a download of the linked resource.

- Example:

  ```html
  <a href="https://www.example.com" target="_blank">Visit Example</a>
  ```

- **Best Practices for Using Links**

  1.  **Use Descriptive Link Text**: The text inside the `<a>` tag should describe the target resource (e.g., "Visit our homepage" instead of just "Click here").

  2.  **Accessibility**: Ensure that the link text is clear and provides context. Use the `title` attribute for additional information.

  3.  **External Links**: Use `target="_blank"` for links that open external websites, so users don't lose the current page.

  4.  **Security**: When linking to external sites, use `rel="noopener noreferrer"` to protect against security vulnerabilities like **reverse tabnabbing**.

## Character Entities

### **Commonly Used HTML Character Entities**

1. **Spaces and Punctuation**

   - **`&amp;`** → `&` (Ampersand)
   - **`&lt;`** → `<` (Less-than)
   - **`&gt;`** → `>` (Greater-than)
   - **`&quot;`** → `"` (Double quotation mark)
   - **`&apos;`** → `'` (Single quotation mark)
   - **`&nbsp;`** → (Non-breaking space)

2. **Mathematical and Special Symbols**

   - **`&plus;`** → `+` (Plus sign)
   - **`&minus;`** → `−` (Minus sign)
   - **`&times;`** → `×` (Multiplication sign)
   - **`&divide;`** → `÷` (Division sign)
   - **`&euro;`** → `€` (Euro symbol)
   - **`&copy;`** → `©` (Copyright symbol)
   - **`&reg;`** → `®` (Registered trademark symbol)

3. **Accents and Diacritical Marks**

   - **`&eacute;`** → `é` (e with acute accent)
   - **`&agrave;`** → `à` (a with grave accent)
   - **`&ntilde;`** → `ñ` (n with tilde)
   - **`&ouml;`** → `ö` (o with umlaut)

4. **Currency Symbols**

   - **`&dollar;`** → `$` (Dollar sign)
   - **`&pound;`** → `£` (Pound sign)
   - **`&yen;`** → `¥` (Yen sign)

5. **Mathematical Symbols**

   - **`&infin;`** → `∞` (Infinity symbol)
   - **`&forall;`** → `∀` (Universal quantifier)
   - **`&exist;`** → `∃` (Existential quantifier)

### **Example:**

```html
<p>Here is an ampersand: &amp;</p>
<p>The copyright symbol: &copy;</p>
<p>The greater-than symbol: &gt;</p>
```

This would render as:

- Here is an ampersand: `&`
- The copyright symbol: `©`
- The greater-than symbol: `>`

### **Best Practices for Using Character Entities**

1. **Use Character Entities for Special Characters**: Always use character entities for special characters that have a reserved meaning in HTML (e.g., `<`, `>`, `&`).

2. **Avoid Overuse**: Only use character entities when necessary. If you're working with UTF-8 encoded pages, you can directly use the characters, as modern browsers fully support this.

3. **Consistency**: Be consistent with your use of character entities for characters that are not easy to type or that might not display correctly in certain fonts or encoding systems.

## HTML5 Global Attributes

- **`id`** – Assigns a unique identifier to an element for styling or scripting.
  ```html
  <div id="header">Welcome to My Website</div>
  ```
- **`class`** – Groups elements with a common name for styling or behavior.
  ```html
  <p class="highlight">This is highlighted text.</p>
  ```
- **`style`** – Adds inline CSS styles to an element.
  ```html
  <h1 style="color: blue;">Hello World</h1>
  ```
- **`title`** – Adds a tooltip that appears on hover.
  ```html
  <button title="Click to submit">Submit</button>
  ```
- **`lang`** – Specifies the language of the element’s content.
  ```html
  <p lang="en">This is an English paragraph.</p>
  ```
- **`dir`** – Sets text direction (`ltr` or `rtl`).
  ```html
  <p dir="rtl">This is right-to-left text.</p>
  ```
- **`data-*`** – Stores custom private data for JavaScript.
  ```html
  <div data-user-id="12345">User Profile</div>
  ```
- **`hidden`** – Hides the element from rendering.
  ```html
  <p hidden>This content is hidden.</p>
  ```
- **`tabindex`** – Controls keyboard tab order.
  ```html
  <input type="text" tabindex="1" /> <input type="text" tabindex="2" />
  ```
- **`accesskey`** – Defines keyboard shortcuts to focus or activate elements.
  ```html
  <button accesskey="s">Save</button>
  ```
- **`draggable`** – Enables drag-and-drop for an element.
  ```html
  <img src="image.jpg" draggable="true" />
  ```
- **`spellcheck`** – Toggles spell checking on user-editable content.
  ```html
  <textarea spellcheck="true"></textarea>
  ```
- **`contenteditable`** – Makes the element content editable in the browser.
  ```html
  <div contenteditable="true">You can edit this text.</div>
  ```
- **`autofocus`** – Automatically focuses the element on page load.
  ```html
  <input type="text" autofocus />
  ```
- **`role`** – Defines the element’s role for assistive technologies.
  ```html
  <div role="alert">This is an important message!</div>
  ```

### Benefits of HTML5 Global Attributes

- Consistency
- Flexibility
- Accessibility

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

  ```html
  <td colspan="2">Merged Cell</td>
  ```

- **`rowspan`**: Merges rows.

  ```html
  <td rowspan="2">Merged Row</td>
  ```

- **Border**: The table has a border of width 1.

- **Cellspacing**: The space between cells is 5px.

- **Cellpadding**: The space between the content of each cell and its border is 10px.

- **Colspan**: The header Employee Information spans across 2 columns.

- **Rowspan**: The first cell in the first column (101) spans across two rows, grouping the employee ID and name.
- Example:

  ```html
  <table border="1" cellspacing="5" cellpadding="10">
    <tr>
      <td>Content</td>
    </tr>
  </table>
  ```

## Creating Form Elements

- Forms are fundamental for collecting user input in HTML.
- Various form elements like `<input>`, `<select>`, `<textarea>`, `<button>`, etc., allow for collecting different types of data.
- **Attributes** like `type`, `name`, `id`, `placeholder`, and `required` further define the behavior and validation of the form.
- Organizing forms with `<fieldset>` and `<legend>` provides structure and clarity.

* Example:

  ```html
  <form action="/submit" method="POST">
    <input type="text" name="username" />
    <button type="submit">Submit</button>
  </form>
  ```

## Input Elements - Attributes, Color and Date Pickers, Select and Datalist Elements

- **Input**: Used for user input.

  ```html
  <input type="text" name="email" placeholder="Enter your email" />
  ```

- **Color Picker** (`<input type="color">`) allows users to pick a color via a color picker dialog.

  ```html
  <input type="color" name="color" />
  ```

- **Date Picker** (`<input type="date">`) provides an interface to select a date from a calendar.

  ```html
  <input type="date" name="birthdate" />
  ```

- **Select** (`<select>`) creates a dropdown menu with predefined options.

  ```html
  <select name="country">
    <option value="usa">USA</option>
    <option value="india">India</option>
  </select>
  ```

* **Datalist** (`<datalist>`) offers an autocomplete feature, allowing users to either select from a list of options or enter a custom value.

  ```html
  <input list="browsers" id="browser" name="browser" />
  <datalist id="browsers">
    <option value="Chrome"></option>
    <option value="Firefox"></option>
    <option value="Safari"></option>
    <option value="Edge"></option>
  </datalist>
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

- Security Considerations with `<iframe>`
  - **Cross-Site Scripting (XSS):** When embedding content from external sources, it’s important to ensure that the content is safe and doesn’t introduce vulnerabilities like XSS.
  - **Clickjacking Protection:** You should be aware of the potential for clickjacking, where an attacker can trick a user into clicking on hidden elements within an iframe. Using the X-Frame-Options header or the sandbox attribute can help mitigate this risk.
  - **Sandboxing:** To prevent iframe content from executing malicious scripts, consider using the sandbox attribute. You can specify which features are allowed, such as forms, scripts, and navigation.

## Why HTML Security?

- Safeguards users, applications, and content from malicious attacks
- HTML forms, scripts, and embeds are potential attack vectors

- Key Reasons

  - Protecting User Data

    - Forms collect sensitive data (passwords, credit cards)
    - Use SSL/TLS to encrypt input fields

  - Preventing Unauthorized Access

    - Secure authentication & authorization
    - Manage sessions and cookies securely

  - Maintaining Content Integrity

    - Prevent HTML/content manipulation
    - Block XSS attacks

  - Guarding Against CSRF

    - Prevents unauthorized actions via authenticated users
    - Use CSRF tokens and validations

  - Avoiding Clickjacking

    - Invisible iframe overlays trick users
    - Use `X-Frame-Options` & `sandbox`

  - Preventing HTML Injection

    - Sanitize user input (e.g., comments, reviews)
    - Validate and escape special characters

  - Cross-Site Scripting (XSS) Prevention

    - Stop script injection in the browser
    - Use CSP, input sanitization, output encoding

  - Preventing Malicious Embeds

    - Embedded resources may be compromised
    - Use `sandbox` and secure embedding practices

  - Protection Against Code Execution
    - Prevent harmful command execution
    - Secure coding, input/output validation

- HTML Security Vulnerabilities

  - HTML Injection

    - Injecting HTML/JS into pages
    - Prevention: sanitize inputs, escape characters

  - Clickjacking

    - Trick users via hidden elements
    - Prevention: `X-Frame-Options`

  - XSS

    - Inject and run scripts in users’ browsers
    - Prevention: encoding, CSP, input validation

  - CSRF

    - Unauthorized actions by authenticated users
    - Prevention: CSRF tokens, CAPTCHA

  - Local Storage Vulnerabilities
    - Data in local storage can be accessed via JS
    - Prevention: avoid storing sensitive info, use encryption

- Best Practices

  - Validate inputs & encode outputs
  - Use HTTPS for all pages
  - Implement Content Security Policy (CSP)
  - Use `SameSite` attribute in cookies
  - Secure HTTP headers: `X-Frame-Options`, `CSP`, `HSTS`, `X-XSS-Protection`
  - Conduct regular audits & testing

## HTML Injection

#### What is HTML Injection?

- Injection of malicious HTML code
- Alters content, layout, or behavior of a web page
- Caused by lack of input sanitization

#### How it Works

- Unsanitized user input inserted into HTML
- Example: `<script>alert('Hacked!');</script>`

#### Consequences

- Data Theft (cookies, session tokens)
- Page Manipulation
- Spread of Malware
- Phishing Attacks

#### Prevention

- Input Sanitization
- Output Encoding
  - `<` → `&lt;`
  - `>` → `&gt;`
- Content Security Policy (CSP)
- Use Secure Frameworks (Angular, React)

## Clickjacking

#### What is Clickjacking?

- Malicious use of hidden/transparent iframes
- Tricks users into clicking unintended elements

#### How it Works

- Overlay trusted site with transparent iframe
- User clicks unknowingly on sensitive actions

#### Consequences

- Unauthorized Actions
- Account Hijacking
- Financial Fraud
- Reputation Damage

#### Prevention

- `X-Frame-Options` Header
  - `DENY`, `SAMEORIGIN`
- `Content-Security-Policy`
  - `frame-ancestors 'none';`
- UI Confirmation for Critical Actions
- Secure Web Design

## HTML5 Events Vulnerabilities

### 1. Cross-Site Scripting (XSS) Vulnerabilities

- **Description**: Attackers inject malicious scripts into web pages.
- **How it relates to events**:
  - Input data injected into event attributes like `onclick`, `onload`, `onmouseover`.
- **Example**:
  ```html
  <button onclick="alert(document.cookie)">Click me!</button>
  ```

* **Prevention**:

  - Sanitize input.
  - Use `addEventListener` instead of inline JavaScript.
  - Implement Content Security Policy (CSP).

### 2. Clickjacking

- **Description**: Trick users into clicking hidden elements on iframes.
- **How it relates to events**:

  - Triggering `onclick`, `onmousedown` through deception.

- **Example**:

  ```html
  <iframe src="https://securewebsite.com"></iframe>
  ```

- **Prevention**:

  - Use `X-Frame-Options: DENY`
  - Use CSP: `frame-ancestors 'none'`

### 3. Event Handler Injection

- **Description**: Injecting event attributes like `onclick` into elements.
- **How it relates to events**:

  - Using user input to dynamically assign event attributes.

- **Example**:

  ```html
  <button onclick="window.location='http://malicious-site.com'">
    Click me
  </button>
  ```

- **Prevention**:

  - Avoid inline handlers.
  - Use `addEventListener`.
  - Sanitize and encode input.

### 4. Insecure Event Listeners (Event Spoofing)

- **Description**: Forged or manipulated events.
- **How it relates to events**:

  - Untrusted sources triggering events without validation.

- **Example**:

  - Attacker manually triggers form submit event.

- **Prevention**:

  - Validate event sources.
  - Apply authorization checks.

### 5. DOM-based XSS

- **Description**: Untrusted DOM data used in scripts.
- **How it relates to events**:

  - Using untrusted data in `onclick`, `onload`, etc.

- **Example**:

  ```js
  let url = window.location.href;
  document.getElementById("myButton").onclick = function () {
    alert(url);
  };
  ```

- **Prevention**:

  - Sanitize user input.
  - Avoid using untrusted data directly.
  - Prefer `textContent` over `innerHTML`.

### 6. Event Handler Abuse (Overuse of Event Listeners)

- **Description**: Too many listeners = performance & potential DoS risk.
- **How it relates to events**:

  - Excessive event listeners degrade performance.

- **Prevention**:

  - Remove unused listeners.
  - Use event delegation.

## Local Storage Vulnerabilities

### 1. Cross-Site Scripting (XSS) Attacks

- Local storage accessible via JavaScript
- If attacker injects malicious script:
  - Can access, modify, or delete local storage data
  - Example:
    ```javascript
    var userData = localStorage.getItem("user_credentials");
    console.log(userData);
    ```
- Prevention:
  - Sanitize inputs
  - Use Content Security Policy (CSP)
  - Avoid storing sensitive info in local storage

### 2. Lack of Encryption

- Data is not encrypted
- Easily accessible via browser developer tools
- Example:
  ```javascript
  localStorage.setItem("session_token", "12345abcde");
  ```

* Prevention:

  - Encrypt data using libraries (e.g., crypto-js)
  - Prefer secure cookies or server-side storage

### 3. Insufficient Access Control

- No access control for local storage
- Any script on the page can access it
- Risky in multi-origin environments
- Prevention:

  - Enforce same-origin policy
  - Avoid cross-site sharing of sensitive data

### 4. Persistent Data

- Data persists after browser is closed
- Risk if device is compromised
- Example:

  ```javascript
  localStorage.removeItem("session_token");
  localStorage.clear();
  ```

- Prevention:

  - Clear sensitive data on logout/session expiry

### 5. Lack of User Awareness

- Users may not realize risks
- Malicious websites can exploit this
- Prevention:

  - Educate users
  - Use secure alternatives

### 6. Browser-Specific Vulnerabilities

- Implementation varies by browser
- May contain bugs or security flaws
- Prevention:

  - Keep browsers updated
  - Use security headers like CSP

## HTML5 - Cross-browser Support

### 1. What is Cross-Browser Support?

- Consistent user experience across:
  - Google Chrome
  - Mozilla Firefox
  - Microsoft Edge
  - Safari
  - Opera
  - Internet Explorer
- Issues:
  - Inconsistent appearance or behavior
  - Accessibility concerns

### 2. Features Introduced by HTML5

- New Semantic Elements
  - `<article>`, `<section>`, `<header>`, `<footer>`, `<nav>`, `<figure>`, `<main>`
- Multimedia
  - `<audio>`, `<video>`, `<source>`
- Form Elements
  - `email`, `tel`, `date`, `range`, `color`, `number`
- Canvas
- Local Storage
  - `localStorage`, `sessionStorage`
- Geolocation API
- Offline Web Apps
  - `manifest` attribute
- Web Workers
- WebSockets
- Drag and Drop API

### 3. Challenges of Cross-Browser Support

- Legacy Browsers
  - Internet Explorer 8 and below
- Partial Support
  - Example: `localStorage` in Safari vs Chrome
- Vendor Prefixes
  - `-webkit-`, `-moz-`, `-ms-`
- Behavior Differences
  - Canvas rendering differences
- Mobile Browser Support
  - Varies by OS and device

### 4. Checking HTML5 Support

- Can I Use
- MDN Web Docs

### 5. Strategies to Ensure Cross-Browser Support

#### 1. Feature Detection

- Use JavaScript (e.g., Modernizr)
  ```js
  if (Modernizr.localstorage) {
    // Supported
  } else {
    // Fallback
  }
  ```

````

#### 2. Provide Fallbacks

* Example:

```html
<video controls>
  <source src="movie.mp4" type="video/mp4">
  <p>Your browser does not support HTML5 video. <a href="movie.mp4">View video</a>.</p>
</video>
````

#### 3. Use Polyfills

- Polyfill.io
- Video.js

#### 4. Ensure Mobile Compatibility

- Responsive Design
- Test on iOS/Android native browsers

#### 5. Handle Browser-Specific Issues

- CSS Prefixes

```css
.box {
  -webkit-border-radius: 10px;
  -moz-border-radius: 10px;
  border-radius: 10px;
}
```

- JavaScript Workarounds

### 6. Best Practices

- Minimize reliance on non-essential features
- Use polyfills & feature detection
- Regular browser/device testing
- Progressive enhancement
- Follow HTML5 specifications

## HTML Best Practices

### 1. Use Semantic HTML

- Use tags like: header, footer, main, section, article, nav, aside, figure
- Avoid div and span when semantic elements are available
- Example:
  - article with header, section, and footer

### 2. Maintain Accessibility (a11y)

- Use alt attributes for images
- Ensure keyboard navigation
- Use ARIA roles and attributes
- Ensure text/background contrast

### 3. Organize and Structure HTML Properly

- Use consistent indentation
- Avoid inline styles; use external CSS
- Group related elements with section, div, article

### 4. Optimize HTML for Performance

- Minify HTML
- Lazy load images with loading="lazy"
- Use external JS/CSS
- Prefer HTML5 video/audio

### 5. Validate HTML

- Use W3C Markup Validation Service

### 6. Keep Code Clean and Commented

- Add comments for complex sections
- Avoid over-commenting

### 7. Use Relative Links for Internal Navigation

- Relative for internal: `/about.html`
- Absolute for external: `https://example.com`

### 8. Avoid Deprecated/Obsolete Elements

- Don’t use: font, center, marquee
- Use CSS instead

### 9. Use alt Attribute for All Images

- Always describe the image meaningfully

### 10. Make Forms Accessible

- Use label tags for form inputs
- Group fields with fieldset and legend
- Use appropriate input types: email, password, number, etc.

### 11. Implement Security Best Practices

- Sanitize user inputs (prevent XSS, HTML Injection)
- Use HTTPS
- Add meta: X-Content-Type-Options: nosniff

### 12. Ensure Responsive Web Design

- Add viewport meta tag
- Use srcset for responsive images

### Conclusion

- Improves accessibility, performance, maintainability, and security
- Write clean, semantic, scalable HTML

## Connect

- [![GitHub](https://img.shields.io/badge/GitHub-omteja04-181717?logo=github)](https://github.com/omteja04)
- [![LinkedIn](https://img.shields.io/badge/LinkedIn-omteja-0000FF?logo=linkedin)](https://linkedin.com/in/omteja)
