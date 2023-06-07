#ifndef _BLE_H
#define _BLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern bool flagble;

/* Attributes State Machine */
enum
{
    IDX_SVC,
    IDX_CHAR_A,
    IDX_CHAR_VAL_A,
    IDX_CHAR_CFG_A,

    IDX_CHAR_B,
    IDX_CHAR_VAL_B,
    IDX_CHAR_CFG_B,

    IDX_CHAR_C,
    IDX_CHAR_VAL_C,
    IDX_CHAR_CFG_C,
    IDX_CHAR_CFG_C_2,

    HRS_IDX_NB,
};
void BLE_start(void);
void BLE_stop(void);
#endif