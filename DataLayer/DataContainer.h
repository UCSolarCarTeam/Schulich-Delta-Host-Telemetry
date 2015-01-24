#pragma once

#include <QSerialPort>
#include <QScopedPointer>

class DataParser;
class DataPopulator;
class I_ConnectionService;
class ArrayData;
class VehicleData;
class PowerData;
class BatteryData;

class DataContainer
{
public:
 	explicit DataContainer();
    ~DataContainer();

private:
    QScopedPointer<QSerialPort> port_;
    QScopedPointer<I_ConnectionService> connectionService_;
	QScopedPointer<DataParser> dataParser_;
	QScopedPointer<DataPopulator> dataPopulator_;
	QScopedPointer<ArrayData> arrayData_;
	QScopedPointer<VehicleData> vehicleData_; 
	QScopedPointer<PowerData> powerData_;
	QScopedPointer<BatteryData> batteryData_;

};

