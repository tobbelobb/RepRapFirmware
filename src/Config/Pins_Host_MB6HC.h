#pragma once

#include <cstddef>
#include <cstdint>
#include <CoreTypes.h>
#include <PinDescription.h>
#include <Duet3Common.h>

enum class TcOutput : uint8_t
{
	none = 0,
};

enum class PwmOutput : uint8_t
{
	none = 0,
};

// --- Minimal board descriptors expected by Platform/RepRap ---
#define BOARD_SHORT_NAME        "MB6HC_HOST"
#define BOARD_NAME              "Duet 3 MB6HC (host)"
#define DEFAULT_BOARD_TYPE      BoardType::Auto
#define FIRMWARE_NAME           "RepRapFirmware for Duet 3 (host)"
#define IAP_FIRMWARE_FILE       "Duet3Firmware_MB6HC_host.bin"
#define IAP_UPDATE_FILE         "Duet3_SDiap_host.bin"
#define IAP_UPDATE_FILE_SBC     "Duet3_SBCiap_host.bin"
#define IAP_CAN_LOADER_FILE     "Duet3_CANiap_host.bin"
#define USART_SPI                1
constexpr uint32_t IAP_IMAGE_START = 0;

constexpr std::size_t NumDirectDrivers = 6;
constexpr std::size_t NumDriversOnMainBoard = 6;
constexpr std::size_t NumFans = 0;
constexpr std::size_t MaxSmartDrivers = NumDirectDrivers;
constexpr std::size_t MaxCanDrivers = 30;
constexpr std::size_t MaxCanBoards = 20;
constexpr float MaxTmc5160Current = 6300.0f;
constexpr float Tmc5160SenseResistor = 0.050f;

constexpr std::size_t MaxPortsPerHeater = 3;

constexpr std::size_t MaxBedHeaters = 12;
constexpr std::size_t MaxChamberHeaters = 8;
constexpr int8_t DefaultE0Heater = 1;

constexpr std::size_t NumThermistorInputs = 4;
constexpr std::size_t NumTmcDriversSenseChannels = 1;

constexpr std::size_t MinAxes = 3;
constexpr std::size_t MaxAxes = 30;
constexpr std::size_t MaxDriversPerAxis = 8;
constexpr std::size_t MaxExtruders = 8;
constexpr std::size_t MaxAxesPlusExtruders = 12;
constexpr std::size_t MaxHeatersPerTool = 20;
constexpr std::size_t MaxExtrudersPerTool = 12;
constexpr unsigned int MaxTriggers = 32;

constexpr unsigned int NumSerialChannels = 3;
constexpr unsigned int FirstAuxChannel = 1;
constexpr unsigned int NumAuxChannels = NumSerialChannels - FirstAuxChannel;

inline constexpr Pin STEP_PINS[NumDirectDrivers] = { NoPin, NoPin, NoPin, NoPin, NoPin, NoPin };
inline constexpr Pin DIRECTION_PINS[NumDirectDrivers] = { NoPin, NoPin, NoPin, NoPin, NoPin, NoPin };
inline constexpr Pin ENABLE_PINS[NumDirectDrivers] = { NoPin, NoPin, NoPin, NoPin, NoPin, NoPin };
inline constexpr Pin TmcCsPins[NumDirectDrivers] = { NoPin, NoPin, NoPin, NoPin, NoPin, NoPin };

inline constexpr Pin SpiSdCsPin = NoPin;
inline constexpr Pin DiagPins[NumDirectDrivers] = { NoPin, NoPin, NoPin, NoPin, NoPin, NoPin };
inline constexpr Pin EndstopPins[6] = { NoPin, NoPin, NoPin, NoPin, NoPin, NoPin };

constexpr std::size_t NumNamedPins = 1;
inline constexpr Pin PinTable[NumNamedPins] = { NoPin };

constexpr std::size_t NumSdCards = 2;
inline constexpr Pin SdCardDetectPins[NumSdCards] = { NoPin, NoPin };
inline constexpr Pin SdSpiCsPins[NumSdCards] = { NoPin, NoPin };
inline constexpr Pin TEMP_SENSE_PINS[NumThermistorInputs] = { NoPin, NoPin, NoPin, NoPin };
inline constexpr Pin VssaSensePin = NoPin;
inline constexpr Pin VrefSensePin = NoPin;
inline constexpr Pin PowerMonitorVinDetectPin = NoPin;
inline constexpr Pin PowerMonitorV12DetectPin = NoPin;

inline constexpr Pin GlobalTmc51xxEnablePin = NoPin;
inline constexpr Pin GlobalTmc51xxCSPin = NoPin;
inline constexpr Pin EspEnablePin = NoPin;
inline constexpr Pin ModbusTxPin = NoPin;

inline constexpr Pin SpiTempSensorCsPins[] = { NoPin, NoPin, NoPin, NoPin };

inline constexpr Pin APIN_USART_SSPI_SCK = NoPin;
inline constexpr Pin APIN_USART_SSPI_MOSI = NoPin;
inline constexpr Pin APIN_USART_SSPI_MISO = NoPin;
inline constexpr GpioPinFunction USARTSPIMosiPeriphMode = GpioPinFunction::A;
inline constexpr GpioPinFunction USARTSPIMisoPeriphMode = GpioPinFunction::A;
inline constexpr GpioPinFunction USARTSPISckPeriphMode = GpioPinFunction::A;

inline constexpr Pin TMC51xxMosiPin = NoPin;
inline constexpr Pin TMC51xxMisoPin = NoPin;
inline constexpr Pin TMC51xxSclkPin = NoPin;
inline constexpr GpioPinFunction TMC51xxMosiPinPeriphMode = GpioPinFunction::A;
inline constexpr GpioPinFunction TMC51xxMisoPinPeriphMode = GpioPinFunction::A;
inline constexpr GpioPinFunction TMC51xxSclkPinPeriphMode = GpioPinFunction::A;

inline constexpr Pin DiagPinPre102 = NoPin;
inline constexpr bool DiagOnPolarityPre102 = false;
inline constexpr Pin ActLedPinPre102 = NoPin;

inline constexpr Pin DiagPin102 = NoPin;
inline constexpr bool DiagOnPolarity102 = false;
inline constexpr Pin ActLedPin102 = NoPin;
inline constexpr bool ActOnPolarity = false;

inline constexpr float PowerMonitorVoltageRange_v102 = 0.0f;
inline constexpr float PowerMonitorVoltageRange_v101 = 0.0f;

inline constexpr Pin UsbVBusPin = NoPin;

#define SERIAL_MAIN_DEVICE serialUSB
#define SERIAL_AUX_DEVICE serialUart1
#define SERIAL_AUX2_DEVICE serialUart2
