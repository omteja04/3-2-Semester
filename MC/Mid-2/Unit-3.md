<!--
  Author: @omteja04
  Created on: 11-04-2025 15:20:19
  Description: Unit-3
-->

- [Unit 3](#unit-3)
  - [Discuss about IEEE 802.11 architecture and services](#discuss-about-ieee-80211-architecture-and-services)
    - [IEEE 802.11 Architecture](#ieee-80211-architecture)
      - [1. Stations (STA)](#1-stations-sta)
      - [2. Access Point (AP)](#2-access-point-ap)
      - [3. Basic Service Set (BSS)](#3-basic-service-set-bss)
      - [4. Extended Service Set (ESS)](#4-extended-service-set-ess)
      - [5. Distribution System (DS)](#5-distribution-system-ds)
    - [IEEE 802.11 Services](#ieee-80211-services)
      - [A. MAC Layer Services](#a-mac-layer-services)
      - [B. Physical Layer Services](#b-physical-layer-services)
  - [What is Hiperlan? Explain its protocol family and characteristics](#what-is-hiperlan-explain-its-protocol-family-and-characteristics)
    - [HiperLAN Protocol Family](#hiperlan-protocol-family)
      - [1. HiperLAN/1](#1-hiperlan1)
        - [Protocol Layers:](#protocol-layers)
      - [2. HiperLAN/2](#2-hiperlan2)
        - [Protocol Layers:](#protocol-layers-1)
    - [Key Characteristics of HiperLAN](#key-characteristics-of-hiperlan)
  - [Why WATM is required? Write about the protocol reference model](#why-watm-is-required-write-about-the-protocol-reference-model)
    - [What is ATM?](#what-is-atm)
    - [Why WATM?](#why-watm)
    - [WATM Protocol Reference Model](#watm-protocol-reference-model)
      - [1. Physical Layer](#1-physical-layer)
      - [2. Medium Access Control (MAC) Layer](#2-medium-access-control-mac-layer)
      - [3. Data Link Control (DLC) Layer](#3-data-link-control-dlc-layer)
      - [4. ATM Adaptation Layer (AAL)](#4-atm-adaptation-layer-aal)
      - [5. ATM Layer](#5-atm-layer)
      - [6. Control Plane](#6-control-plane)
      - [7. Management Plane](#7-management-plane)
  - [Write about BRAN and legacy networks](#write-about-bran-and-legacy-networks)
    - [BRAN (Broadband Radio Access Networks)](#bran-broadband-radio-access-networks)
      - [Purpose of BRAN](#purpose-of-bran)
      - [Key Standards under BRAN](#key-standards-under-bran)
      - [Features of BRAN](#features-of-bran)
    - [Legacy Networks](#legacy-networks)
      - [Examples of Legacy Networks](#examples-of-legacy-networks)
      - [Importance of Legacy Networks](#importance-of-legacy-networks)
    - [Comparison: BRAN vs Legacy Networks](#comparison-bran-vs-legacy-networks)
  - [What is Bluetooth? Explain the process of forming piconet](#what-is-bluetooth-explain-the-process-of-forming-piconet)
    - [What is Bluetooth?](#what-is-bluetooth)
      - [Key Features:](#key-features)
    - [What is a Piconet?](#what-is-a-piconet)
    - [Process of Forming a Piconet](#process-of-forming-a-piconet)
      - [1. Inquiry Phase](#1-inquiry-phase)
      - [2. Paging Phase](#2-paging-phase)
      - [3. Connection Establishment](#3-connection-establishment)
      - [4. Piconet Formation](#4-piconet-formation)
    - [Roles in a Piconet](#roles-in-a-piconet)
    - [Summary](#summary)
  - [Explain Bluetooth protocol stack along with a diagram](#explain-bluetooth-protocol-stack-along-with-a-diagram)
    - [1. Core Protocols](#1-core-protocols)
    - [2. Cable Replacement Protocols](#2-cable-replacement-protocols)
    - [3. Telephony and Adopted Protocols](#3-telephony-and-adopted-protocols)
    - [Bluetooth Protocol Stack – Textual Diagram](#bluetooth-protocol-stack--textual-diagram)
    - [Working Example:](#working-example)

# Unit 3

## Discuss about IEEE 802.11 architecture and services

### IEEE 802.11 Architecture

![Architecture](https://image2.slideserve.com/4048758/slide7-l.jpg)

The **IEEE 802.11 architecture** defines how devices connect and communicate in a wireless network. It includes:

#### 1. Stations (STA)

- Any device with wireless capability (like a laptop, smartphone, or IoT device).
- Each station has a wireless network interface card (NIC).

#### 2. Access Point (AP)

- Acts as a bridge between the wired and wireless networks.
- Provides wireless connectivity to stations.
- Operates as part of an infrastructure network.

#### 3. Basic Service Set (BSS)

- The basic building block of an 802.11 WLAN.
- Two types:
  - **Independent BSS (IBSS)**: Ad-hoc mode (no AP, peer-to-peer communication).
  - **Infrastructure BSS**: Contains one AP and one or more STAs.

#### 4. Extended Service Set (ESS)

- A set of BSSs interconnected via a distribution system (DS), usually a wired Ethernet LAN.
- Allows seamless roaming between APs in large networks (like a campus Wi-Fi).

#### 5. Distribution System (DS)

- Backbone (usually wired) that connects multiple APs.
- Helps manage communication between different BSSs and external networks.

---

### IEEE 802.11 Services

IEEE 802.11 provides two broad types of services:

#### A. MAC Layer Services

Handled by the Medium Access Control sublayer.

1. **Authentication**: Verifies identity of stations.
2. **Deauthentication**: Ends a previously established authentication.
3. **Association**: STA joins a BSS through an AP.
4. **Disassociation**: STA leaves a BSS.
5. **Reassociation**: STA moves from one AP to another in the same ESS.
6. **Privacy**: Ensures data encryption using protocols like WEP, WPA, WPA2, or WPA3.
7. **Data Delivery**: Responsible for delivering data between STAs.

#### B. Physical Layer Services

Managed by the PHY layer.

1. **Carrier Sensing**: Detects whether the medium is free.
2. **Modulation/Demodulation**: Converts digital data to radio signals and vice versa.
3. **Transmission/Reception**: Actual sending and receiving of signals over the air.

---

---

## What is Hiperlan? Explain its protocol family and characteristics

**HiperLAN** stands for **High Performance Radio Local Area Network**. It is a set of wireless communication standards developed by the **European Telecommunications Standards Institute (ETSI)** as an alternative to **IEEE 802.11 (Wi-Fi)**.

- Developed mainly for **high-speed wireless LANs** in Europe.
- Aimed to support **real-time multimedia** and **data communication**.
- Though technologically advanced, it was overtaken by the popularity and adoption of Wi-Fi globally.

---

### HiperLAN Protocol Family

There are two main versions:

#### 1. HiperLAN/1

- Introduced in **1996**.
- Operates in the **5.15–5.35 GHz** frequency band.
- Provides data rates up to **20 Mbps**.
- Designed for **asynchronous and time-bounded services** (e.g., video and voice).

##### Protocol Layers:

- **Physical Layer (PHY)**: Uses Gaussian Minimum Shift Keying (GMSK).
- **Data Link Control (DLC)**:
  - Provides medium access control (MAC).
  - Uses **Elimination-Yield Non-Preemptive Multiple Access (EY-NPMA)** to manage channel access.
- **Convergence Layer**: Interfaces with higher-layer protocols like IP or ATM.

---

#### 2. HiperLAN/2

- Introduced in **2000**.
- Operates in the **5 GHz** band.
- Data rates up to **54 Mbps** (similar to Wi-Fi 802.11a).
- Supports **QoS (Quality of Service)** and is **connection-oriented**.
- Suitable for multimedia applications (voice, video).

##### Protocol Layers:

- **Physical Layer (PHY)**: OFDM-based (similar to 802.11a).
- **Data Link Control (DLC)**:
  - Connection-oriented MAC.
  - Centralized control through an **Access Point**.
- **Convergence Layer**:
  - Supports multiple higher-level protocols like:
    - ATM
    - IP
    - IEEE 1394 (FireWire)

---

### Key Characteristics of HiperLAN

| Feature          | HiperLAN/1    | HiperLAN/2                          |
| ---------------- | ------------- | ----------------------------------- |
| Frequency Band   | 5.15–5.35 GHz | 5 GHz                               |
| Max Data Rate    | 20 Mbps       | 54 Mbps                             |
| Access Technique | EY-NPMA       | Centralized TDMA                    |
| QoS Support      | Limited       | Yes                                 |
| Mobility         | Low           | Moderate                            |
| Interoperability | Limited       | Supports multiple protocols         |
| Encryption       | Basic         | Supports strong security (DES, AES) |

---

---

## Why WATM is required? Write about the protocol reference model

**WATM**, or **Wireless Asynchronous Transfer Mode**, was introduced to extend the benefits of **ATM (Asynchronous Transfer Mode)** networks to **wireless environments**.

### What is ATM?

- ATM is a **high-speed, connection-oriented** switching and multiplexing technology.
- Used in **wired networks** to support **voice, video, and data** traffic with **QoS (Quality of Service)** guarantees.

### Why WATM?

| Reason                                     | Description                                                                                                                                                  |
| ------------------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **QoS Guarantee in Wireless**              | Wireless networks are prone to errors and delays. WATM brings ATM’s strong QoS support to wireless, enabling smooth real-time applications like voice/video. |
| **Seamless Mobility**                      | WATM provides **handover and mobility** support between wireless cells while maintaining ongoing ATM connections.                                            |
| **Integration with Existing ATM Networks** | WATM enables wireless devices to connect directly to existing ATM backbones.                                                                                 |
| **Supports Multimedia Applications**       | Ensures reliable transmission for multimedia (video conferencing, streaming, VoIP).                                                                          |
| **Bandwidth Efficiency**                   | Provides efficient use of bandwidth in mobile environments.                                                                                                  |

---

### WATM Protocol Reference Model

The WATM reference model is **layered** similar to traditional network stacks but adapted for **wireless mobility and QoS**.

#### 1. Physical Layer

- Handles radio transmission and reception.
- Includes wireless modulation and error handling techniques.

#### 2. Medium Access Control (MAC) Layer

- Controls how multiple devices share the wireless medium.
- Provides **collision avoidance**, **scheduling**, and **priority access** for real-time traffic.

#### 3. Data Link Control (DLC) Layer

- Responsible for **error detection and correction**.
- Ensures **reliable link-level communication**.
- May include **ARQ (Automatic Repeat Request)** mechanisms.

#### 4. ATM Adaptation Layer (AAL)

- Converts user data into ATM cells and vice versa.
- Different AAL types for different traffic (e.g., AAL1 for voice, AAL5 for data).

#### 5. ATM Layer

- Manages the transfer of fixed-size ATM cells.
- Handles **cell multiplexing**, **switching**, and **QoS parameters**.

#### 6. Control Plane

- Includes **Connection Setup**, **Mobility Management**, and **Resource Allocation**.
- Ensures session continuity even when the mobile device moves across cells.

#### 7. Management Plane

- Monitors and manages the entire WATM system (faults, performance, etc.).

---

---

## Write about BRAN and legacy networks

### BRAN (Broadband Radio Access Networks)

**BRAN** stands for **Broadband Radio Access Networks**. It is a family of wireless standards developed by the **European Telecommunications Standards Institute (ETSI)** to provide high-speed wireless access for both fixed and mobile users.

#### Purpose of BRAN

BRAN was introduced to enable broadband access where traditional wired networks are not feasible or are too expensive to deploy. It supports data, voice, and video services and targets both home and business environments.

#### Key Standards under BRAN

| ETSI BRAN Standard | Equivalent IEEE Standard | Description                                                                        |
| ------------------ | ------------------------ | ---------------------------------------------------------------------------------- |
| HIPERLAN/1         | Unique to Europe         | First generation BRAN, 20 Mbps, supports limited QoS.                              |
| HIPERLAN/2         | IEEE 802.11a             | 54 Mbps, provides QoS and supports multimedia communication.                       |
| HIPERMAN           | IEEE 802.16 (WiMAX)      | Designed for metropolitan area networks (MANs), supports fixed and nomadic access. |

#### Features of BRAN

- Operates in the 5 GHz unlicensed band.
- Supports high data rates (20–54 Mbps).
- Offers Quality of Service (QoS) for real-time applications.
- Includes encryption and authentication for security.
- Suitable for multimedia applications and broadband access.

---

### Legacy Networks

**Legacy Networks** refer to older communication technologies and systems that were once widely used but are now considered outdated due to advances in networking.

#### Examples of Legacy Networks

| Legacy Technology                          | Modern Equivalent           |
| ------------------------------------------ | --------------------------- |
| Public Switched Telephone Network (PSTN)   | Voice over IP (VoIP), 4G/5G |
| ISDN (Integrated Services Digital Network) | Broadband, VoIP             |
| Frame Relay                                | MPLS, Ethernet              |
| ATM (Asynchronous Transfer Mode)           | IP-based networks           |
| 2G GSM                                     | 4G, 5G                      |

#### Importance of Legacy Networks

- Still in use in certain regions or industries due to reliability and existing infrastructure.
- Migration to modern networks often involves compatibility with legacy systems.
- Understanding legacy technologies is essential for network professionals maintaining hybrid systems.

---

### Comparison: BRAN vs Legacy Networks

| Feature      | BRAN                         | Legacy Networks              |
| ------------ | ---------------------------- | ---------------------------- |
| Speed        | High-speed (20–54+ Mbps)     | Low-speed (up to a few Mbps) |
| Medium       | Wireless                     | Mostly wired                 |
| QoS Support  | Yes                          | Limited                      |
| Mobility     | Supported                    | Limited or none              |
| Applications | Multimedia, broadband access | Voice, basic data            |
| Era          | 1990s–2000s (modern)         | 1970s–1990s (outdated)       |

---

---

## What is Bluetooth? Explain the process of forming piconet

### What is Bluetooth?

**Bluetooth** is a **short-range wireless communication technology** used to exchange data between devices over short distances using **radio waves in the 2.4 GHz ISM band**.

It is commonly used for:

- Wireless headphones and speakers
- Data transfer between mobile devices
- Wireless input devices (mouse, keyboard)
- Internet tethering and file sharing

#### Key Features:

- Operates in the 2.4 GHz unlicensed ISM band
- Range: Typically up to 10 meters (can vary)
- Uses frequency hopping spread spectrum (FHSS)
- Low power consumption
- Supports both voice and data transmission

---

### What is a Piconet?

A **piconet** is a small network formed by **Bluetooth-enabled devices** connected in an **ad hoc manner**. It consists of:

- **One master device**
- **One to seven active slave devices**

![Piconet](https://www.researchgate.net/profile/Farhat-Saleemi-2/publication/228990705/figure/fig1/AS:393606675353600@1470854552026/A-typical-Bluetooth-Piconet.png)

Additional devices can be parked (inactive) and switched in later.

### Process of Forming a Piconet

The formation of a piconet occurs in the following steps:

#### 1. Inquiry Phase

- The device that wants to become a **master** sends an **inquiry message**.
- Nearby Bluetooth devices respond with their device information (e.g., address and clock).

#### 2. Paging Phase

- The master selects devices it wants to connect to and enters the **paging phase**.
- It sends a **page message** to selected devices using their addresses.

#### 3. Connection Establishment

- The responding device(s) accept the page and establish a connection.
- The master assigns a **Bluetooth clock** and **hop sequence** to synchronize communication.

#### 4. Piconet Formation

- Once connected, the master and slave(s) form a **synchronized piconet**.
- All communication within the piconet is controlled by the master.

---

### Roles in a Piconet

| Role       | Description                                                      |
| ---------- | ---------------------------------------------------------------- |
| **Master** | Controls the communication, determines hopping pattern           |
| **Slave**  | Responds to master’s instructions, cannot initiate communication |

---

**Diagram:**

![Piconet](https://th.bing.com/th/id/R.2c024bc839c7422bbe8fd4ab1dd0e86b?rik=0Xfq9t725BUUqQ&riu=http%3a%2f%2fecomputernotes.com%2fimages%2fPiconet.jpg&ehk=XVtAkkFRFzUCF0ojXimACtJvcGb1538aWQXpl8O%2f8Sc%3d&risl=&pid=ImgRaw&r=0&sres=1&sresct=1)

- One master device
- Multiple slaves
- Communication is one-to-one, coordinated by the master

---

### Summary

- **Bluetooth** enables short-range wireless communication.
- A **piconet** is a small network with one master and up to seven active slaves.
- The piconet is formed through **inquiry**, **paging**, and **connection establishment** phases.
- Bluetooth supports **dynamic and temporary networking** without requiring fixed infrastructure.

---

---

## Explain Bluetooth protocol stack along with a diagram

The **Bluetooth protocol stack** is a set of protocols that define how Bluetooth devices communicate with each other. It is divided into **three main layers**:

1. **Core Protocols**
2. **Cable Replacement Protocols**
3. **Telephony and Adopted Protocols**

These layers work together to enable Bluetooth’s capabilities such as device discovery, connection management, data exchange, and voice transmission.

---

### 1. Core Protocols

These are mandatory and form the foundation of the Bluetooth stack:

| Protocol                                                 | Function                                               |
| -------------------------------------------------------- | ------------------------------------------------------ |
| **Radio**                                                | Physical layer; defines radio frequency and modulation |
| **Baseband**                                             | Manages physical links, handles packets, and timing    |
| **LMP (Link Manager Protocol)**                          | Establishes and controls links between devices         |
| **L2CAP (Logical Link Control and Adaptation Protocol)** | Adapts upper-layer protocols over Baseband             |
| **HCI (Host Controller Interface)**                      | Interface between software and hardware (driver level) |

---

### 2. Cable Replacement Protocols

These allow serial communication emulation over Bluetooth:

| Protocol                                   | Function                                     |
| ------------------------------------------ | -------------------------------------------- |
| **RFCOMM (Radio Frequency Communication)** | Serial port emulation (like RS-232)          |
| **SDP (Service Discovery Protocol)**       | Helps devices discover each other's services |

---

### 3. Telephony and Adopted Protocols

Support multimedia and telephony features:

| Protocol                                          | Function                                              |
| ------------------------------------------------- | ----------------------------------------------------- |
| **TCS-BIN (Telephony Control Protocol – Binary)** | Call control signaling                                |
| **AT Commands**                                   | Used in modem-related services                        |
| **OBEX (Object Exchange)**                        | For file and object exchange (e.g., contacts, images) |

---

### Bluetooth Protocol Stack – Textual Diagram

![stack](https://www.researchgate.net/profile/Krunalkumar-Kamani/publication/318876473/figure/fig3/AS:667793125019656@1536225696428/Bluetooth-Protocol-Stack.png)

### Working Example:

- When sending a file over Bluetooth:
  - OBEX handles the file transfer.
  - RFCOMM provides a serial link.
  - L2CAP segments the data.
  - LMP and Baseband manage device connection and timing.
  - The Radio layer transmits it wirelessly.

---

---

<br>
<div align='center'>
  <a href='https://github.com/omteja04' target='_blank'>
    <img src='https://img.shields.io/badge/GitHub-omteja04-181717?logo=github' alt='GitHub Profile'>
  </a>
</div>
