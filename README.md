# Emerging Technique in Correlation and Integration with Thermal and Vibrational Energy Harvesting

> Final Year ECE project — hybrid energy harvesting prototype for EVs, industrial machinery and self-powered monitoring systems.

## Project Overview

This final-year project develops a **hybrid energy harvesting prototype** that captures two otherwise-wasted energy sources:

- **Mechanical vibrations** using piezoelectric sensors
- **Waste heat / temperature gradients** using thermoelectric modules

The harvested energy is conditioned, monitored and stored in a **12 V rechargeable battery**. An Arduino Uno is used for monitoring and energy-management functions.

The project was completed by **Nithesh S (41130367)** and **Nishanth G (41130365)** in the Department of Electronics and Communication Engineering, Sathyabama Institute of Science and Technology, during January–April 2025.

## Why This Project?

Vehicles and industrial machines continuously produce vibration and heat. A large part of this energy is normally lost to the environment. The objective of this project was to investigate whether part of that waste energy could be recovered and reused as supplementary electrical power.

The long-term vision is not to replace the main EV battery or industrial power source. The idea is to **reduce wasted energy and provide supplementary power for batteries, electronics and sensors**.

## Working Principle

```text
Mechanical Vibration                         Waste Heat
       │                                         │
       ▼                                         ▼
Piezoelectric Sensors                  Thermoelectric Modules
       │                                         │
       ▼                                         ▼
Bridge Rectifier                         DC Output
       │                                         │
       └────────────────┬────────────────────────┘
                        ▼
                Charger Controller
                        │
                        ▼
                  12 V Battery
                        │
             ┌──────────┴──────────┐
             ▼                     ▼
        Auxiliary Load        Monitoring System
                                   │
                           Arduino Uno + Sensor
                                   │
                                16×2 LCD
```

## Prototype Hardware

The project report documents the following major hardware:

| Component | Purpose |
|---|---|
| Arduino Uno | Central monitoring/control unit |
| 10 piezoelectric sensors | Vibration energy harvesting |
| 10 thermoelectric modules | Thermal energy harvesting |
| Bridge rectifier | Converts piezoelectric AC output to DC |
| Charger controller | Stabilizes combined harvested energy and manages charging |
| DC voltage sensor | Real-time voltage monitoring |
| 12 V rechargeable battery | Energy storage |
| 16×2 LCD | Displays voltage, battery status and alerts |
| Heat sinks | Maintains a useful thermal gradient |
| LM7805 regulator | Provides regulated 5 V supply for electronics |

## Prototype Photos

The repository should use the **actual prototype photographs and project-demonstration photographs** supplied by the team. They are the primary visual evidence for this project.

Recommended files:

```text
images/
├── prototype-1.jpg
├── prototype-2.jpg
└── nithesh-with-prototype.jpg
```

> No AI-generated poster is required. The purpose of the images is to document the physical prototype and the work performed during the project.

## Experimental Method

The prototype follows these stages:

1. Position piezoelectric sensors on vibration-prone areas.
2. Position thermoelectric modules on heat-intensive surfaces with heat-sink support.
3. Test each harvesting source individually.
4. Convert piezoelectric AC output through a bridge rectifier.
5. Combine and regulate harvested energy through the charger controller.
6. Store the usable energy in the 12 V battery.
7. Monitor voltage and battery/system status using Arduino and the LCD.
8. Evaluate performance under different vibration and thermal conditions.

## Reported Prototype Results

The final project report records the following results under the reported test conditions:

- Piezoelectric sensor output: **8–15 V per sensor (average range) depending on vibration intensity**
- Thermoelectric module output: **3–5 V per module under the reported thermal conditions**
- Stabilized battery-side output: **12–14 V**
- Reported efficiency: **approximately 77% under optimal conditions**
- Battery full-charge time: **3–4 hours under optimal conditions**
- Backup duration: **up to 6 hours under the reported low-energy test condition**
- Temperature range tested/reported: **40–120 °C**
- Vibration frequency range tested/reported: **10–50 Hz**
- Reported development cost: **₹12,200**

These values describe the **college prototype and its reported test conditions**. They are not claims of commercial EV-charger performance.

## My Contribution

My project contribution covered the hardware-oriented implementation and evaluation of the hybrid harvesting prototype, including sensor integration, energy-harvesting circuitry, Arduino-based monitoring, testing and analysis.

## Applications

### Electric Vehicles

Future EV integration could place piezoelectric harvesting elements in suitable vibration locations such as suspension/chassis structures and thermoelectric modules near useful waste-heat sources. The harvested energy would act as **supplementary power** for the vehicle electrical system or selected low-power loads.

### Industrial Machinery

Industrial motors, conveyors, pumps and other equipment can generate both vibration and heat. A scaled version of this system could recover a portion of that energy to support monitoring electronics, control electronics and low-power auxiliary systems.

### Self-Powered Sensors

One of the strongest future applications is powering wireless sensors from the machine or vehicle itself. Vibration and heat could provide part of the energy needed for sensing, local processing and communication, reducing dependence on disposable batteries.

### Renewable and Remote Systems

The same concept can be explored for equipment exposed to recurring vibration or thermal gradients, including remote monitoring environments and renewable-energy installations.

## Future Development

### 1. Better Harvesting Materials

Use higher-performance piezoelectric materials and more efficient thermoelectric modules to improve harvested power.

### 2. Improved Thermal Management

Design better heat sinks and thermal interfaces to maintain the temperature difference required for thermoelectric generation.

### 3. Smarter Power Management

Introduce improved DC-DC conversion and maximum-power-point style energy-management techniques so each source operates closer to its useful operating region.

### 4. IoT Monitoring

Add **ESP8266/ESP32-class connectivity** for remote monitoring of voltage, battery status, harvested energy and system health.

### 5. AI-Based Predictive Maintenance

Use vibration and temperature history to detect abnormal machine behaviour, predict faults and optimize maintenance schedules.

### 6. EV Integration

Develop a vehicle-oriented architecture that combines vibration harvesting, thermal harvesting and intelligent battery-management systems as a supplementary energy source.

### 7. Wireless Energy Transfer

The project report identifies wireless energy transfer as a possible future enhancement for seamless charging-oriented applications.

## What This Project Demonstrates

This project combines concepts from:

- Electronics & Communication Engineering
- Embedded systems
- Piezoelectric energy harvesting
- Thermoelectric energy harvesting
- Power conversion and regulation
- Battery management
- Sensor integration
- Arduino programming
- Energy monitoring
- IoT and predictive-maintenance concepts

## Interview Explanation

**In 30 seconds:**

> “My final-year project was a hybrid thermal and vibrational energy harvesting system. We used piezoelectric sensors to convert mechanical vibration into electrical energy and thermoelectric modules to recover energy from temperature differences. The outputs were conditioned and stored in a 12-volt battery, while an Arduino system monitored the energy and battery status. The prototype was designed as a proof of concept, with future scope for EVs, industrial machinery and self-powered IoT sensors.”

**Important technical point:**

The project is best presented as a **supplementary energy-recovery system**, not as a replacement for an EV's primary battery or as a standalone commercial EV charger.

## Source

The technical description and reported project results in this repository are based on the team's final-year project report, **“Emerging Technique in Correlation and Integration with Thermal and Vibrational Energy Harvesting”**, submitted to Sathyabama Institute of Science and Technology in April 2025.

## License

MIT License

Copyright (c) 2026 Nithesh S

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files, to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software.
