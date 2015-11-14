/**
 *  Schulich Delta Host Telemetry
 *  Copyright (C) 2015 University of Calgary Solar Car Team
 *
 *  This file is part of the Schulich Delta Host Telemetry
 *
 *  The Schulich Delta Host Telemetry is free software: 
 *  you can redistribute it and/or modify it under the terms 
 *  of the GNU Affero General Public License as published by 
 *  the Free Software Foundation, either version 3 of the
 *  License, or (at your option) any later version.
 *
 *  The Schulich Delta Host Telemetry is distributed 
 *  in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
 *  without even the implied warranty of MERCHANTABILITY or 
 *  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Affero 
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General 
 *  Public License along with the Schulich Delta Host Telemetry.
 *  If not, see <http://www.gnu.org/licenses/>.
 *
 *  For further contact, email <software@calgarysolarcar.ca>
 */

#pragma once

#include <QObject>

class DisplayPresenter;
class EscapeDialog;
class I_PlaybackUI;

class EscapeDialogView : public QObject
{
   Q_OBJECT
public:
   EscapeDialogView(EscapeDialog& ui, I_PlaybackUI& playbackUi);
   ~EscapeDialogView();


private:
   EscapeDialog& ui_;
   I_PlaybackUI& playbackUi_;

private slots:
   void handleSettingsSelectionPushButtonClicked();
   void handleAboutSelectionPushButtonClicked();
   void handleExitPushButtonClicked();
   void handleOkPushButtonClicked();
   void handleClosePushButtonClicked();
   void saveChanges();
   void handleRequestToOpenPlaybackMode();
};