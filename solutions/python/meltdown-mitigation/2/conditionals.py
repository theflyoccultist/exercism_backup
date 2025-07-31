"""Functions to prevent a nuclear meltdown."""

def is_criticality_balanced(temperature, neutrons_emitted):
    return temperature < 800 and neutrons_emitted > 500 and (temperature * neutrons_emitted) < 500000


def reactor_efficiency(voltage, current, theoretical_max_power):
    generated_power = voltage * current
    percent = (generated_power / theoretical_max_power) * 100
    if percent >= 80:
        return 'green'
    elif 60 <= percent <= 80:
        return 'orange'
    elif 30 <= percent <= 60:
        return 'red'
    else:
        return 'black'


def fail_safe(temperature, neutrons_produced_per_second, threshold):
    generated_power = temperature * neutrons_produced_per_second
    percent = (generated_power / threshold) * 100
    if percent < 90:
        return 'LOW'
    elif 90 <= percent <= 110:
        return 'NORMAL'
    else:
        return 'DANGER'
