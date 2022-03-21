#include <stdint.h>

typedef struct
{
  uint8_t    uCurrentHvacMode;
  uint8_t    uCurrentWorkingMode;
  uint8_t    uCurrentModeSetpointAdj;
  uint16_t   uCurrentRoomTemperature;
} SThermoObjects;

typedef struct
{
  uint8_t    uWorkingMode;
  uint16_t   u2GoalSetpoint;
  uint8_t    uHysteresis;
} SThermoControl;

typedef struct
{
  SThermoControl tThermostatObjects;
  SThermoObjects tThermoObjects;
} SThermostatChannelApp;