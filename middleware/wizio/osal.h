/*
 *  Created on: 30.08.2018
 *      Author: Georgi Angelov
 */

#ifndef OSAL_H
#define	OSAL_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "FreeRTOS.h"
#include "queue.h"
#include "semphr.h"
#include "task.h"
#include "timers.h"

void * pvPortMalloc(size_t size);
void vPortFree(void * ptr);
void * pvPortRealloc(void * ptr, size_t size);   
size_t xPortWantedSizeAlign(size_t size);
    
#define delay_ticks(_TICKS_)    vTaskDelay( _TICKS_ )
#define delay_ms(_MS_)          vTaskDelay( _MS_ / portTICK_PERIOD_MS )

    
    
#ifdef	__cplusplus
}
#endif

#endif	/* OSAL_H */

