<!--
  Author: omteja04
  Created on: 09-05-2025 19:32:05
  Description: UNIT-5
-->

---

markmap:
  colorFreezeLevel: 0
  maxWidth: 0
  initialExpandLevel: 2
  pan: true
  zoom: true

---

# Wireless Application Protocol (WAP)

## A standard that allows mobile devices <br> to access information and <br> services over wireless networks.

### 1. Wireless Datagram Protocol (WDP)

- Acts like UDP in the WAP stack.
- Provides a uniform interface to upper layers.
- Transports data over bearer networks (GSM, SMS, GPRS, etc.).
- Ensures portability across wireless networks.

### 2. Wireless Transport Layer Security (WTLS)

- Wireless-optimized version of TLS/SSL.
- Provides:
  - Encryption
  - Data integrity
  - Authentication
- Secures communication over wireless links.

### 3. Wireless Transaction Protocol (WTP)

- Manages lightweight client-server transactions.
- Supports:
  - Reliable messaging
  - Acknowledgements
  - Low-overhead data transfer
- Designed for low-bandwidth, high-latency environments.

### 4. Wireless Session Protocol (WSP)

- HTTP-like protocol for wireless networks.
- Handles:
  - Session management
  - Content negotiation
  - Pipelining
- Improves mobile web browsing efficiency.

### 5. Wireless Application Environment (WAE)

- Application framework of WAP.
- Includes:
  - WML (Wireless Markup Language)
  - WMLScript
  - WTAI
- Defines how content is created and interpreted on mobile devices.

### 6. Wireless Markup Language (WML)

- XML-based markup for mobile web content.
- Uses:
  - Deck and card structure for navigation
  - Basic UI elements
  - WMLScript for scripting
- Lightweight, suitable for small screens and low bandwidth.

### 7. WMLScript

- Scripting language used in WML pages (similar to JavaScript).
- Used for:
  - Client-side validation
  - Calculations and simple logic
- Enhances interactivity without server requests.
- Compiled into bytecode to reduce size and increase performance.

### 8. Wireless Telephony Application (WTA)

- Integrates voice services with data applications.
- Enables:
  - Click-to-call
  - SMS from apps
  - Missed call checks
- Works with WML/WMLScript for richer mobile experience.

### 9. Wireless Telephony Application Interface (WTAI)

- APIs for telephony control from WAP apps.
- Examples:
  - `wtai://wp/mc;+919876543210` → Make call
  - `wtai://wp/sms;+919876543210` → Send SMS
- Links web content with phone functions.

### Connect

- [![GitHub](https://img.shields.io/badge/GitHub-omteja04-181717?logo=github)](https://github.com/omteja04)

---
