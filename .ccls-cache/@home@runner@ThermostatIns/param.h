#include <stdint.h>

#define HVAC_MODE_COUNT   4
#define HVAC_MODE_STANDBY_MASK  0x02
#define HVAC_MODE_ECONOMY_MASK  0x04

typedef enum
{
  MODE_COMFORT,
  MODE_STANDBY,
  MODE_ECONOMY,
  MODE_PROTECTION,
} EHvacModes;

typedef enum
{
  NO,
  YES
} EYesNo;

typedef enum
{
  COOLING_ONLY,
  HEATING_ONLY,
  BOTH_COOLING_AND_HEATING
} EUsedControlMode;

typedef enum
{
  AUTOMATIC_SWITCHOVER,
  MANUAL_SWITCHOVER,
} EControlModeSwitchType;

typedef enum
{
  PI_CONTROL,
  TWO_POINT_CONTROL,
} EUsedControlType;

typedef enum
{
  BY_ABSOLUTE_VALUE,
  BY_OFFSET_VALUE,
} ESetpointConfiguration;

typedef	struct
{
	uint16_t		u2HeatingTemp[HVAC_MODE_COUNT];
	uint16_t		u2CoolingTemp[HVAC_MODE_COUNT];
} SSetpointByAbsoluteValue;
	
typedef	struct
{
	uint16_t		u2ReferenceTemperature;
	uint8_t			eTemperatureOffset[HVAC_MODE_COUNT-1];
	uint16_t		u2ProtectionHeatingTemp;
	uint16_t		u2ProtectionCoolingTemp;
} SSetpointByRelativeValue;

typedef struct
{
  union
  {
    SSetpointByAbsoluteValue  tSetpointByAbsoluteValue;
    SSetpointByRelativeValue  tSetpointByRelativeValue;
  }; 
} SHeatingCoolingValues;

typedef struct
{
  EYesNo                  eUseAutoSwitchOverHvacModes;
	uint8_t					        uThermoAvailableHvacModes;
  EUsedControlMode        eUsedControlMode;
  EYesNo                  eUseAutoSwitchOverControlModes;
  ESetpointConfiguration  eSetpointConfiguration;
	SHeatingCoolingValues   tHeatingCoolingValues;
  EUsedControlType        eUsedControlType;
  uint8_t                 uHysteresisValue;
} SThermostatChannelParam;