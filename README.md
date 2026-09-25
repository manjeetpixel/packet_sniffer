# Packet Sniffer

A simple beginner-level C project that captures Ethernet packets and prints their raw data in hexadecimal format.

This project is intended for learning purposes and helps understand the basics of packet sniffing, raw socket programming, and low-level network data handling in C.

## Disclaimer

This tool should only be used on networks where you have explicit permission to monitor traffic. Do not use it for unethical, unauthorized, or illegal packet capture on public or private networks.

## What this program does

- Captures Ethernet-level packets
- Reads packet data from the network interface
- Prints the packet contents in hexadecimal format
- Helps beginners understand low-level packet processing in C

## Requirements

- Linux-based system
- GCC compiler
- Root privileges (`sudo`) for packet capture

## Build

```bash
gcc sniffer.c -o sniffer
```

## Run

```bash
sudo ./sniffer
```

## Screenshot

![Packet Sniffer Output](assets/sniffer%20screen%20shot.png)

## Example output

```text
Packet captured:
00 11 22 33 44 55 66 77 88 99 aa bb cc dd ee ff
...
```

## Important notes

- This is a beginner project, not a production-grade packet analyzer.
- Network packet capture may be restricted by local laws, policies, and system permissions.
- Use this only in controlled lab or authorized environments.

## Purpose

This project is suitable for learning:

- raw socket programming
- Ethernet frame basics
- packet capture fundamentals
- C-based network programming
