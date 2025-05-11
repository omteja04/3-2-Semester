---
markmap:
  colorFreezeLevel: 0
  maxWidth: 400
  initialExpandLevel: -1
  pan: true
  zoom: true
---

# UNIT III: Wireless LAN

## BRAN (Broadband Radio Access Networks)

- Developed by ETSI (European Telecommunications Standards Institute)
- High-speed wireless networks for Europe
- Includes:
  - HIPERLAN (LAN-level)
  - HIPERACCESS (Broadband Access)
  - HIPERLINK (High-cap. point-to-point)
- Competes with WiMAX

---

## HIPERLAN (High Performance Radio LAN)

### HIPERLAN/1

- Data rate: 20 Mbps
- MAC: EY-NPMA (Elimination-Yield Non-Preemptive Multiple Access)
- Layers:
  - Physical: 5 GHz band
  - Data Link Control (DLC): Handles medium access (EY-NPMA)
  - Convergence Layer: Maps upper-layer protocols (e.g., IP, ATM)

### HIPERLAN/2

- Data rate: up to 54 Mbps
- QoS & multimedia support
- Uses dynamic TDMA
- Centralized control via AP

#### Layers in HIPERLAN/2

- Physical Layer
  - OFDM at 5 GHz
- DLC (Data Link Control)
  - MAC (handles scheduling and error control)
- Convergence Layer
  - Interfaces with upper layers like:
    - Ethernet
    - ATM
    - IP

### Features

- Supports ATM, IP, Ethernet
- QoS, security, mobility
- Indoor wireless communications

### Pros

- High throughput
- Flexible protocol support (IP, ATM, Ethernet)

### Cons

- Limited to Europe
- Not widely adopted globally

---

## WATM (Wireless Asynchronous Transfer Mode)

- Wireless extension of ATM
- Supports mobility + QoS
- Uses small 53-byte fixed cells

### Challenges

- High handover complexity
- Real-time delay constraints

---

## Wireless LAN Technologies

### Infrared Transmission

- IR light, LoS
- Range: ~1–2 m

**Pros:** Secure, no interference  
**Cons:** Requires line of sight

### Radio Transmission

- 2.4 GHz / 5 GHz
- Omnidirectional

**Pros:** Longer range, non-LoS  
**Cons:** Susceptible to interference

---

## WLAN Modes

### Infrastructure Mode

- Requires Access Point (AP)
- Centralized management

### Ad hoc Mode

- Peer-to-peer
- No AP

---

## IEEE 802.11 Standards

- 802.11a: 5 GHz, 54 Mbps
- 802.11b: 2.4 GHz, 11 Mbps
- 802.11g: 2.4 GHz, 54 Mbps
- 802.11n: 2.4/5 GHz, up to 600 Mbps, MIMO
- 802.11ac: 5 GHz, high speed
- 802.11ax (Wi-Fi 6): OFDMA, MU-MIMO, power saving
- OFDMA: Efficient subcarrier allocation
- MU-MIMO: Multi-user data streams

---

## WLAN Architecture

- Components: STA (Stations), AP (Access Point), DS (Distribution System)
- Topologies: BSS, ESS
- Services: Association, Authentication, Roaming
- **Design Goals**: High throughput, backward compatibility, better range

---

## Bluetooth

### Applications: Audio, file transfer, input devices

### Pros: Low power, short range

### Cons: Limited data rate, range (~10m)

### Architecture

#### Piconet

- Small Bluetooth network
- 1 master, up to 7 slaves
- Temporary connection

- **Advantages**:

  - Efficient for short-range,
  - low-power communication

- **Limitations**:

  - Not scalable
  - Limited number of devices

#### Scatternet

- Combination of multiple piconets
- Devices can participate in multiple piconets

- **Advantages**:

  - Scalable Bluetooth networks
  - Increased coverage

- **Drawbacks**:
  - Complex coordination
  - Latency issues

### Bluetooth Protocol Stack

#### 1. Core Protocols

- Radio: Defines radio frequency and modulation
- Baseband: Connection setup, time slots
- LMP (Link Manager Protocol): Establishes and controls links between devices
- L2CAP: Segmentation, multiplexing, Adapts upper layers
- HCI: Interface between host & controller

#### 2. Cable Replacement Protocols

- RFCOMM: Provides Serial interface with OBEX and WAP
- TCS-BIN: It provides telephony services
- SDP: Allows to discover the services available on other Bluetooth enabled devices

#### 3. Adopted Protocols

- AT Commands: Control modems/headsets
- OBEX: Object Exchange (vCards, images)
- PPP: Internet via Bluetooth
- WAP/WAE: Web access protocols

#### ![Image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgsmvhnHayA_LvQ1aAmIAoCeSmXU1nO9Y4I3WNcoEARYXkXc5N08DiZC3BvWh1NByPh6f5T1GzqA4VUnFkOdSflsz3VSxUgsLZrjTe4-x3Vqylm1ZAdOZO6jg9zjXP4cuwWh232v3XVPDi4qMYkJfxtom6EW0MYLP6BQ5wnaJnoqOj5u1xzSgct4bAp/s1280/Bluetooth%20Protocol%20Stack%20Layer.png)

---
