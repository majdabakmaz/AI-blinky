
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "speech_commands_action.h"
#include "led.h"

void speech_commands_action(int command_id)
{
    printf("Commands ID: %d.\n", command_id);
    switch (command_id)
    {
    case 0:
        printf("\n-TURN ON-\n");
        led_on();
        break;
    case 1:
        printf("\n-TURN OFF-\n");
        led_off();
        break;
    case 2:
        printf("\n-PALIM LEDICU-\n");
        led_on();
        break;
    case 3:
        printf("\n-GASIM LEDICU-\n");
        led_off();
        break;
    default:
        break;
    }
}
