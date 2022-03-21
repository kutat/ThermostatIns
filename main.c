#include "app.h"
#include "param.h"
#include <stdio.h>

SThermostatChannelParam tThermostatChannelParam;

void thermoFunc_assingValues(void );
void thermoFunc_sentValues(void );
void thermoFunc_setValues(uint8_t  uCurrentHvacMode, 
                          uint8_t  uCurrentWorkingMode,
                          uint16_t u2GoalSetPoint);
int main(void )
{
  
  
  return 0;
}

void thermoFunc_sentValues()
{
  
}

void thermoFunc_setValues(uint8_t  uCurrentHvacMode, 
                          uint8_t  uCurrentWorkingMode,
                          uint16_t u2GoalSetPoint)
{
  
}

void thermoFunc_assingValues()
{  
  tThermostatChannelParam.uThermoAvailableHvacModes = 0x0F;
  
  tThermostatChannelParam.eUsedControlMode = BOTH_COOLING_AND_HEATING;
  if(tThermostatChannelParam.eUsedControlMode == BOTH_COOLING_AND_HEATING)
    tThermostatChannelParam.eUseAutoSwitchOverControlModes = NO;
  
  tThermostatChannelParam.eSetpointConfiguration = BY_ABSOLUTE_VALUE;
  if(tThermostatChannelParam.eSetpointConfiguration == BY_ABSOLUTE_VALUE)
  { 
    tThermostatChannelParam.tHeatingCoolingValues.tSetpointByAbsoluteValue.u2HeatingTemp[MODE_COMFORT] = ;
    tThermostatChannelParam.tHeatingCoolingValues.tSetpointByAbsoluteValue.u2CoolingTemp[MODE_COMFORT] = ;

    if(tThermostatChannelParam.uThermoAvailableHvacModes & HVAC_MODE_STANDBY_MASK)
    {
      tThermostatChannelParam.tHeatingCoolingValues.tSetpointByAbsoluteValue.u2HeatingTemp[MODE_STANDBY] = ;
      tThermostatChannelParam.tHeatingCoolingValues.tSetpointByAbsoluteValue.u2CoolingTemp[MODE_STANDBY] = ;
    }

    if(tThermostatChannelParam.uThermoAvailableHvacModes & HVAC_MODE_ECONOMY_MASK)
    {
      tThermostatChannelParam.tHeatingCoolingValues.tSetpointByAbsoluteValue.u2HeatingTemp[MODE_ECONOMY] = ;
      tThermostatChannelParam.tHeatingCoolingValues.tSetpointByAbsoluteValue.u2CoolingTemp[MODE_ECONOMY] = ;
    }
    
    tThermostatChannelParam.tHeatingCoolingValues.tSetpointByAbsoluteValue.u2HeatingTemp[MODE_PROTECTION] = ;
    tThermostatChannelParam.tHeatingCoolingValues.tSetpointByAbsoluteValue.u2CoolingTemp[MODE_PROTECTION] = ;
  } 

  tThermostatChannelParam.eUsedControlType = PI_CONTROL;
  if(tThermostatChannelParam.eUsedControlType == TWO_POINT_CONTROL)
  {
   tThermostatChannelParam.uHysteresisValue =;
  }
}