#include <stdint.h>
typedef union
{
	struct
	{
		uint16_t				u2ComfortHeatingTemp;
		uint16_t				u2ComfortCoolingTemp;
		uint16_t				u2StandbyHeatingTemp;
		uint16_t				u2StandbyCoolingTemp;
		uint16_t				u2EconomyHeatingTemp;
		uint16_t				u2EconomyCoolingTemp;
	};
	
	struct
	{
		uint16_t				u2ReferenceTemperature;
		uint8_t					eComfortOffset;
		uint8_t					eStandbyOffset;	
		uint8_t					eEconomyOffset;	
	};
	
	uint16_t				u2ProtectionHeatingTemp;
	uint16_t				u2ProtectionCoolingTemp;
	
} UHeatingCoolingValues;

typedef struct
{
	uint8_t					uThermoWorkModes;
	UHeatingCoolingValues	uHeatingCoolingValues;
} SThermostatChannel;