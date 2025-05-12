---
markmap:
  colorFreezeLevel: 0
  maxWidth: 400
  initialExpandLevel: 2
  pan: true
  zoom: true
---

# Angular

## 1. **Introduction to Angular**

- TypeScript-based framework
- Developed by Google
- Used for building **Single Page Applications** (SPA)
- **Component-based architecture**
- MVVM (Model-View-ViewModel) design pattern
- **Declarative** templating and **dependency injection**
- **Cross-platform**: Web, mobile, and desktop apps
- **Two-way data binding**
- **Tooling support** with Angular CLI

## 2. **Features of Angular**

- **Two-way data binding**: Automatic synchronization between model and view
- **Modular architecture**: Code is divided into modules for reusability
- **Dependency Injection**: Reduces the need for manual service creation
- **Directives**: Extend HTML functionality (both structural and attribute directives)
- **RxJS**: For managing asynchronous data
- **Pipes**: For transforming data in templates
- **Routing**: Handling navigation and dynamic views

## 3. **Angular Application Setup**

- Install Node.js and Angular CLI
- Initialize a project using `ng new project-name`
- Navigate to the project folder and serve using `ng serve`
- Basic folder structure:
  - `src/app`: Contains components, services, and other app-related files
  - `angular.json`: Configuration for project structure
  - `package.json`: Project dependencies

## 4. **Components and Modules**

- **Component**:
  - A building block in Angular, containing HTML, CSS, and logic
  - Composed of a class, metadata, and a template
  - Defined using `@Component` decorator
- **Module**:
  - An Angular app is modularized into multiple pieces called modules.
  - `AppModule` is the root module
  - Uses `@NgModule` decorator to declare components, services, and other resources

## 5. **Executing Angular Application**

- **Development Server**: `ng serve` starts the Angular development server on `http://localhost:4200`
- **Build Command**: `ng build` compiles and bundles the application for production
- **Testing**: Use `ng test` for unit tests and `ng e2e` for end-to-end tests

## 6. **Elements of Template**

- **Directives**:
  - Structural (`*ngIf`, `*ngFor`, `*ngSwitch`)
  - Attribute (`ngStyle`, `ngClass`)
- **Data Binding**:
  - **Interpolation** (`{{ value }}`): Data binding to text content
  - **Property Binding** (`[property]="value"`): Binding to element properties
  - **Event Binding** (`(event)="method()"`): Binding to events like clicks
  - **Two-way Binding** (`[(ngModel)]="value"`): Combination of property and event binding

## 7. **Change Detection**

- **Mechanism** that tracks changes in the app’s state and updates the view
- **Zone.js**: A library that helps Angular detect changes when asynchronous operations occur (like HTTP requests, user input)
- **Change Detection Strategy**:
  - **Default**: Angular checks all components
  - **OnPush**: Only checks components when their inputs change

## 8. **Structural Directives**

- **`*ngIf`**: Conditionally includes or removes elements
  ```html
  <div *ngIf="isLoggedIn">Welcome, user!</div>
  ```

* **`*ngFor`**: Loops over collections

  ```html
  <ul>
    <li *ngFor="let item of items">{{ item }}</li>
  </ul>
  ```

* **`*ngSwitch`**: Switches between multiple views

  ```html
  <div [ngSwitch]="value">
    <div *ngSwitchCase="'A'">Option A</div>
    <div *ngSwitchDefault>Default</div>
  </div>
  ```

## 9. **Custom Structural Directive**

- Used to create custom behavior for manipulating DOM structure based on conditions
- Example: A simple phone number validation directive

  ```typescript
  @Directive({
    selector: "[appPhoneValidator]",
  })
  export class PhoneValidatorDirective {
    constructor(private el: ElementRef) {}

    @HostListener("blur") onBlur() {
      const value = this.el.nativeElement.value;
      if (!/^\d{10}$/.test(value)) {
        alert("Invalid phone number");
      }
    }
  }
  ```

## 10. **Attribute Directives**

- **`ngStyle`**: Dynamically apply CSS styles to an element

  ```html
  <div [ngStyle]="{ 'color': color, 'font-size': size }">Styled Text</div>
  ```

- **`ngClass`**: Dynamically apply CSS classes

  ```html
  <div [ngClass]="{ 'active': isActive, 'highlight': isHighlighted }">Text</div>
  ```

## 11. **Property Binding, Attribute Binding, Style and Event Binding**

- **Property Binding**: Binding to an element's property

  ```html
  <img [src]="imageUrl" />
  ```

- **Attribute Binding**: Binding to an attribute

  ```html
  <button [attr.aria-label]="buttonLabel">Click me</button>
  ```

- **Style Binding**: Dynamically set styles

  ```html
  <div [style.background-color]="bgColor"></div>
  ```

- **Event Binding**: Listening to DOM events

  ```html
  <button (click)="onClick()">Click me</button>
  ```

## 12. **Built-in Pipes**

- **`DatePipe`**: Format dates

  ```html
  <p>{{ currentDate | date:'shortDate' }}</p>
  ```

- **`UpperCasePipe`**: Convert text to uppercase

  ```html
  <p>{{ text | uppercase }}</p>
  ```

## 13. **Nested Components**

- Parent components contain child components using `selector` tags

  ```html
  <app-child></app-child>
  ```

## 14. **Passing Data Between Components**

- **Parent to Child**: Using `@Input()`

  ```typescript
  @Input() childData: string;
  ```

- **Child to Parent**: Using `@Output()` and `EventEmitter`

  ```typescript
  @Output() notifyParent: EventEmitter<string> = new EventEmitter();
  this.notifyParent.emit('data from child');
  ```

## 15. **Shadow DOM**

- Encapsulation for component styles
- Styles apply only to the component and not outside of it, providing component-level styling isolation.

## 16. **Component Life Cycle**

- **Lifecycle Hooks**:

  - `ngOnInit`: Called after the component is initialized
  - `ngOnChanges`: Called when input properties change
  - `ngOnDestroy`: Cleanup logic before the component is destroyed
  - **ngDoCheck**: Custom change detection

## 17. **Template Driven Forms**

- Forms driven by directives in the template (`ngModel`)
- **Validation**: Built-in validators like `required`, `minlength`, `maxlength`

  ```html
  <form #myForm="ngForm">
    <input name="email" [(ngModel)]="email" required />
    <button [disabled]="!myForm.valid">Submit</button>
  </form>
  ```

## 18. **Reactive Forms (Model Driven Forms)**

- Forms are managed using `FormControl` and `FormGroup` in the component class

  ```typescript
  this.form = this.fb.group({
    name: ["", Validators.required],
    email: ["", [Validators.required, Validators.email]],
  });
  ```

## 19. **Custom Validators**

- **Reactive Forms**: Use functions like `Validators.pattern`, `Validators.minLength`
- **Template Driven Forms**: Custom validation logic in directives

## 20. **Dependency Injection**

- **Injecting services** into components and other services
- Angular creates instances of services and injects them automatically

## 21. **Services Basics**

- Used for sharing data and logic across components
- **Singleton pattern**: Ensures a single instance of the service

## 22. **RxJS Observables**

- Handling async data streams like HTTP responses, user inputs, or events
- Methods like `.subscribe()`, `.map()`, `.catchError()`

## 23. **Server Communication using HttpClient**

- Use `HttpClient` module to interact with RESTful APIs
- Example of a GET request:

  ```typescript
  this.http.get("https://api.example.com/data").subscribe((response) => {
    this.data = response;
  });
  ```

## 24. **Routing Basics**

- **`RouterLink`**: Navigation between components

  ```html
  <a routerLink="/home">Go to Home</a>
  ```

- **`RouterOutlet`**: Where routed components are displayed

## 25. **Route Guards**

- **`CanActivate`**: Prevent navigation based on conditions
- **`CanDeactivate`**: Prevent leaving a page with unsaved changes
- **`CanLoad`**: Prevent loading feature modules lazily

## 26. **Asynchronous Routing and Nested Routes**

- **Lazy Loading**: Load modules only when needed
- **Nested Routes**: Define child routes within parent routes

## Connect

- [![GitHub](https://img.shields.io/badge/GitHub-omteja04-181717?logo=github)](https://github.com/omteja04)
- [![LinkedIn](https://img.shields.io/badge/LinkedIn-omteja-0000FF?logo=linkedin)](https://linkedin.com/in/omteja)
