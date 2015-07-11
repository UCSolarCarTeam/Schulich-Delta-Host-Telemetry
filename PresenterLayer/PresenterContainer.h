#pragma once

#include <QScopedPointer>

class DataContainer;
class CommunicationContainer;
class CommunicationPresenter;
class BusinessContainer;
class DisplayPresenter;
class BatteryPresenter;
class VehiclePresenter;
class MpptPresenter;
class PowerPresenter;
class FaultsPresenter;
class PowerGraphsPresenter;

class PresenterContainer
{
public:
   PresenterContainer(DataContainer& dataContainer,
         CommunicationContainer& communicationContainer,
         BusinessContainer& businessContainer);
   ~PresenterContainer();

   BatteryPresenter& batteryPresenter();
   CommunicationPresenter& communicationPresenter();
   VehiclePresenter& vehiclePresenter();
   MpptPresenter& mpptPresenter();
   PowerPresenter& powerPresenter();
   FaultsPresenter& faultsPresenter();
   PowerGraphsPresenter& powerGraphsPresenter();

private:
   QScopedPointer<BatteryPresenter> batteryPresenter_;
   QScopedPointer<CommunicationPresenter> communicationPresenter_;
   QScopedPointer<VehiclePresenter> vehiclePresenter_;
   QScopedPointer<MpptPresenter> mpptPresenter_;
   QScopedPointer<PowerPresenter> powerPresenter_;
   QScopedPointer<FaultsPresenter> faultsPresenter_;
   QScopedPointer<PowerGraphsPresenter> powerGraphsPresenter_;
};
