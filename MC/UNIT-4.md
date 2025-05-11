---
markmap:
  colorFreezeLevel: 0
  maxWidth: 400
  initialExpandLevel: -1
  pan: true
  zoom: true
---

<!--
  Author: omteja04
  Created on: 09-05-2025 19:54:42
  Description: UNIT-4
-->

# Unit 4

## Overview of Mobile Networking & Transport Techniques

These concepts improve:

- Network mobility
- Efficient communication
- Reliable data transfer in mobile/wireless environments

---

### Mobile IP

- Maintains same IP while moving across networks
- Uses Home Agent (HA) and Foreign Agent (FA)
- Ensures location transparency and session continuity
- **Abbreviations**:
  - **MN**: Mobile Node
  - **HN**: Home Node
  - **HA**: Home Agent
  - **FA**: Foreign Agent
  - **FN**: Foreign Network
  - **CoA**: Care-of Address
  - **CN**: Correspondent Node

**Advantages**:

- Ensures **continuous connectivity** while mobile devices move across different networks.
- Allows **transparent communication** without disrupting ongoing sessions.
- Supports **seamless mobility** for applications requiring consistent connectivity.

**Disadvantages**:

- **Latency** can increase due to packet forwarding through HA and FA.
- Requires **extra overhead** for packet encapsulation.
- **Increased complexity** in network configuration and management.

### DHCP

- Assigns IP addresses dynamically
- Offers temporary or permanent leases
- Supports plug-and-play connectivity
- Uses the DORA process:
  - **Discover**: Client broadcasts a request for IP configuration
  - **Offer**: Server responds with available IP and configuration
  - **Request**: Client requests offered IP
  - **Acknowledge**: Server confirms assignment

**Advantages**:

- Simplifies **IP address management** and reduces manual configuration.
- Supports **dynamic addressing** for mobile and wireless devices.
- Easy **plug-and-play** connectivity for users.

**Disadvantages**:

- **Address conflicts** can occur if DHCP servers aren't managed properly.
- **Temporary leases** may lead to issues if the lease expires during critical operations.
- **Security vulnerabilities** exist if DHCP traffic isn't secured.

### Mobile Transport Layer

- Enhancements in TCP for mobility
- Handles handoffs, signal loss, latency
- Focus on end-to-end reliability and congestion control

**Advantages**:

- Provides **reliable transport** over mobile networks.
- Aims to **improve performance** during mobility-related disruptions.
- Optimized to handle **higher latency and packet loss** inherent in wireless environments.

**Disadvantages**:

- **Complex implementation** in standard TCP protocols.
- Potential **inefficiency** when used in networks with minimal mobility.
- May add **overhead** to existing transport layers, reducing performance in certain situations.

### Traditional TCP

- Designed for stable, wired networks
- Mistakes mobility-induced loss as congestion
- Poor recovery from disconnections
- Lacks wireless optimizations

**Advantages**:

- **Well-established** and widely used in wired networks.
- Provides reliable **end-to-end communication** and congestion control.

**Disadvantages**:

- **Not optimized** for mobility or wireless networks.
- Mistakes **packet loss due to mobility** for congestion, leading to poor performance.
- Poor handling of **network disconnections** in mobile environments.

---

## Encapsulation Methods

### IP in IP

- Encapsulates the original IP packet inside a new IP header.
- **Used for**: Mobile IP, to maintain communication as mobile nodes change IPs.
- **How it works**: Home Agent encapsulates the packet destined for the mobile node,<br> which is sent to its Care-of Address (CoA).

**Advantages**:

- Maintains **transparent communication** for mobile nodes.
- Facilitates **easy transition** between different network environments.

**Disadvantages**:

- **Encapsulation adds overhead** due to the extra headers.
- **Packet loss** during encapsulation can cause more significant delays in mobile environments.

### Minimal Encapsulation

- Adds a simpler header with less overhead.
- **Used for**: Transporting packets with minimal efficiency loss.
- **How it works**: A small header is added to the original IP packet,<br> mainly for routing, with reduced overhead.

**Advantages**:

- **Minimal overhead**, making it more efficient than traditional encapsulation.
- **Quick data transmission** with reduced size and complexity.

**Disadvantages**:

- **Limited flexibility** when handling more complex scenarios.
- May not provide sufficient support for **advanced security features**.

### GRE (Generic Routing Encapsulation)

- Tunneling protocol for encapsulating packets.
- **Used for**: Private tunnels over public networks.
- **How it works**: GRE encapsulates Layer 3 packets (e.g., IP) inside an IP packet <br> to traverse public networks, commonly used in VPNs.

**Advantages**:

- **Efficient tunneling** over public networks, supporting various protocols.
- Allows for **VPN setup** and secure communication over unsecured networks.

**Disadvantages**:

- **No encryption** by default; additional security mechanisms are required.
- **Overhead** due to the encapsulation, reducing the overall network efficiency.

---

## TCP Enhancements and Mobility Adaptations

### Indirect TCP (I-TCP)

- Splits connection at base station
- Optimized protocol on mobile side
- Breaks end-to-end semantics

**Advantages**:

- **Improves mobile network performance** by separating mobile and fixed parts.
- Optimizes the **mobile side** to handle mobility-related issues.

**Disadvantages**:

- **Breaks end-to-end semantics**, leading to potential inconsistencies.
- **Increased complexity** in the network setup.

### Snooping TCP

- Base station monitors TCP packets
- Handles local retransmissions
- Maintains end-to-end semantics

**Advantages**:

- **Improves performance** by handling retransmissions locally.
- **Maintains end-to-end semantics** without breaking connections.

**Disadvantages**:

- **Snooping** introduces additional overhead on base stations.
- **Increased complexity** in managing the base station’s role in the network.

### Mobile TCP (M-TCP)

- Splits TCP connection like I-TCP
- Maintains end-to-end semantics
- Freezes transmission during disconnection

**Advantages**:

- **Maintains end-to-end semantics** while improving performance.
- Reduces unnecessary **retransmissions** during disconnections.

**Disadvantages**:

- **Split connection** adds complexity to the transport layer.
- May cause **delay** in some situations due to disconnection-awareness.

---

## TCP Performance Improvements

### Fast Retransmit / Fast Recovery

- Detects loss via duplicate ACKs
- Retransmits quickly, avoids slow start
- Reduces latency and bandwidth waste

**Advantages**:

- **Reduces retransmission time**, improving overall efficiency.
- **Prevents congestion** and reduces the risk of slow start.

**Disadvantages**:

- **Duplicate ACKs** can increase overhead in specific network conditions.
- **Delayed response** in certain cases due to fast recovery methods.

### Transmission / Timeout Freezing

- Sender notified of disconnection
- Freezes timers to avoid unnecessary retransmissions
- Resumes after reconnection

**Advantages**:

- **Prevents redundant retransmissions** during temporary disconnections.
- Ensures more **efficient reconnection** once the connection is restored.

**Disadvantages**:

- **Freezing the timer** may delay certain network responses.
- **Temporary disconnection** handling may not be ideal in all environments.

### Selective Retransmission (SACK)

- Retransmits only lost packets
- Acknowledges non-contiguous data
- Efficient in lossy networks

**Advantages**:

- **Efficient retransmission** of only lost packets.
- **Reduces network overhead** and congestion in lossy environments.

**Disadvantages**:

- **Additional complexity** in maintaining SACK support in both ends of the connection.
- **Limited support** on some older network devices.

### Transaction-Oriented TCP (T/TCP)

- Optimized for short requests (HTTP, DNS)
- Combines connection setup with data
- Reduces overhead for single-request transfers

**Advantages**:

- **Reduces connection overhead**, making it faster for short transactions.
- **Improves response times** for quick interactions.

**Disadvantages**:

- **Not suitable** for long-running or large transfers.
- **Limited compatibility** with certain network configurations.

---

## Connect

- [![GitHub](https://img.shields.io/badge/GitHub-omteja04-181717?logo=github)](https://github.com/omteja04)
