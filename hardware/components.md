# Hardware Components

| Component | Role |
|---|---|
| Arduino Uno | Monitoring and control |
| Piezoelectric sensors (10) | Convert mechanical vibration into electrical energy |
| Thermoelectric modules (10) | Convert temperature difference into electrical energy |
| Bridge rectifier | Convert piezoelectric AC output to DC |
| Charger controller | Regulate harvested energy and manage battery charging |
| DC voltage sensor | Monitor generated/battery voltage |
| 12 V rechargeable battery | Store harvested energy |
| 16×2 LCD | Display system information |
| Heat sinks | Maintain useful thermal gradient across thermoelectric modules |
| LM7805 | Regulated 5 V supply for electronics |
| Wiring / PCB / passive components | Interconnection and circuit implementation |

## Hardware flow

```text
Vibration → Piezoelectric Sensors → Bridge Rectifier →
                                           ↓
Waste Heat → Thermoelectric Modules → Power Management → 12 V Battery
                                           ↓
                                   Arduino + Voltage Sensor
                                           ↓
                                         LCD
```

The component list follows the final project report. Values and ratings for any commercial redesign must be selected from the actual target power, voltage, thermal conditions and safety requirements.
