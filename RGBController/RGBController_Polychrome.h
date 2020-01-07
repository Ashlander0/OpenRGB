/*-----------------------------------------*\
|  RGBController_Polychrome.h               |
|                                           |
|  Generic RGB Interface for OpenRGB        |
|  ASRock ASR LED and Polychrome RGB Driver |
|                                           |
|  Adam Honse (CalcProgrammer1) 12/15/2019  |
\*-----------------------------------------*/

#pragma once

#include "RGBController.h"
#include "PolychromeController.h"

class RGBController_Polychrome : public RGBController
{
public:
    RGBController_Polychrome(PolychromeController* polychrome_ptr);
    int         GetMode();
    void        SetMode(int mode);
    void        SetCustomMode();
    void        UpdateLEDs();
    void        UpdateZoneLEDs(int zone);
    void        UpdateSingleLED(int led);

private:
    PolychromeController* polychrome;
};
