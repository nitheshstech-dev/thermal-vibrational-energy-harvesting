# Working Principle

## Vibrational harvesting

Piezoelectric elements are positioned at vibration-prone locations. Mechanical stress produces an electrical signal. The generated AC is passed through a bridge rectifier to obtain DC.

## Thermal harvesting

Thermoelectric modules are placed where a useful temperature difference exists. The Seebeck effect produces electrical voltage across the module. Heat sinks are used to improve thermal management.

## Power conditioning

The harvested sources are processed through the charging/power-management stage so that the energy can be used safely for storage and low-power loads.

## Storage

A 12 V rechargeable battery stores the recovered energy.

## Monitoring

An Arduino Uno reads voltage information and displays system/battery information on a 16×2 LCD.

## Prototype methodology

1. Position and calibrate each harvesting source.
2. Measure the sources independently.
3. Integrate the sources through the conditioning stage.
4. Monitor voltage and battery behaviour.
5. Test under different thermal and vibration conditions.
6. Compare harvested and stored energy.
