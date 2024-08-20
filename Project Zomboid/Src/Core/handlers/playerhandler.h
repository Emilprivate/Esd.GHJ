#pragma once
void PlayerHandler() {
    if (config.boolSettings[20]) {
        int currentAmmo = GetCurrentAmmoCount();
        int maxAmmo = GetMaxAmmo();
        if (currentAmmo < maxAmmo) {
            LegitMaxAmmo();
        }
    }
}