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

#include "MpptUI.h"
#include "ui_MpptUI.h"

MpptUI::MpptUI()
: ui(new Ui::MpptUI)
{  
   ui->setupUi(this);
}

MpptUI::~MpptUI()
{  
   delete ui;
} 

void MpptUI::hideHeaderBar()
{  
   ui->mpptTitleBar->hide();
}

QLabel& MpptUI::setMppt1PowerIn()
{  
   return *ui->mppt1PowerIn;  
}
QLabel& MpptUI::setMppt1VoltageIn()
{  
   return *ui->mppt1VoltageIn;   
}
QLabel& MpptUI::setMppt1CurrentIn()
{  
   return *ui->mppt1CurrentIn;   
}
QLabel& MpptUI::setMppt1PowerOut()
{  
   return *ui->mppt1PowerOut; 
}
QLabel& MpptUI::setMppt1VoltageOut()
{  
   return *ui->mppt1VoltageOut;  
}
QLabel& MpptUI::setMppt1CurrentOut()
{  
   return *ui->mppt1CurrentOut;  
}
QLabel& MpptUI::setMppt1Efficiency()
{  
   return *ui->mppt1Efficiency;  
}
QLabel& MpptUI::setMppt1Type()
{
   return *ui->mppt1Type;
}
QLabel& MpptUI::setMppt1Mode()
{
   return *ui->mppt1Mode;
}

QLabel& MpptUI::setMppt2PowerIn()
{  
   return *ui->mppt2PowerIn;  
}
QLabel& MpptUI::setMppt2VoltageIn()
{  
   return *ui->mppt2VoltageIn;   
}
QLabel& MpptUI::setMppt2CurrentIn()
{  
   return *ui->mppt2CurrentIn;   
}
QLabel& MpptUI::setMppt2PowerOut()
{  
   return *ui->mppt2PowerOut; 
}
QLabel& MpptUI::setMppt2VoltageOut()
{  
   return *ui->mppt2VoltageOut;  
}
QLabel& MpptUI::setMppt2CurrentOut()
{  
   return *ui->mppt2CurrentOut;  
}
QLabel& MpptUI::setMppt2Efficiency()
{  
   return *ui->mppt2Efficiency;  
}
QLabel& MpptUI::setMppt2Type()
{
   return *ui->mppt2Type;
}
QLabel& MpptUI::setMppt2Mode()
{
   return *ui->mppt2Mode;
}

QLabel& MpptUI::setMppt3PowerIn()
{  
   return *ui->mppt3PowerIn;  
}
QLabel& MpptUI::setMppt3VoltageIn()
{  
   return *ui->mppt3VoltageIn;   
}
QLabel& MpptUI::setMppt3CurrentIn()
{  
   return *ui->mppt3CurrentIn;   
}
QLabel& MpptUI::setMppt3PowerOut()
{  
   return *ui->mppt3PowerOut; 
}
QLabel& MpptUI::setMppt3VoltageOut()
{  
   return *ui->mppt3VoltageOut;  
}
QLabel& MpptUI::setMppt3CurrentOut()
{  
   return *ui->mppt3CurrentOut;  
}
QLabel& MpptUI::setMppt3Efficiency()
{  
   return *ui->mppt3Efficiency;  
}
QLabel& MpptUI::setMppt3Type()
{
   return *ui->mppt3Type;
}
QLabel& MpptUI::setMppt3Mode()
{
   return *ui->mppt3Mode;
}

QLabel& MpptUI::setMppt4PowerIn()
{  
   return *ui->mppt4PowerIn;  
}
QLabel& MpptUI::setMppt4VoltageIn()
{  
   return *ui->mppt4VoltageIn;   
}
QLabel& MpptUI::setMppt4CurrentIn()
{  
   return *ui->mppt4CurrentIn;   
}
QLabel& MpptUI::setMppt4PowerOut()
{  
   return *ui->mppt4PowerOut; 
}
QLabel& MpptUI::setMppt4VoltageOut()
{  
   return *ui->mppt4VoltageOut;  
}
QLabel& MpptUI::setMppt4CurrentOut()
{  
   return *ui->mppt4CurrentOut;  
}
QLabel& MpptUI::setMppt4Efficiency()
{  
   return *ui->mppt4Efficiency;  
}
QLabel& MpptUI::setMppt4Type()
{
   return *ui->mppt4Type;
}
QLabel& MpptUI::setMppt4Mode()
{
   return *ui->mppt4Mode;
}

QLabel& MpptUI::setMppt5PowerIn()
{  
   return *ui->mppt5PowerIn;  
}
QLabel& MpptUI::setMppt5VoltageIn()
{  
   return *ui->mppt5VoltageIn;   
}
QLabel& MpptUI::setMppt5CurrentIn()
{  
   return *ui->mppt5CurrentIn;   
}
QLabel& MpptUI::setMppt5PowerOut()
{  
   return *ui->mppt5PowerOut; 
}
QLabel& MpptUI::setMppt5VoltageOut()
{  
   return *ui->mppt5VoltageOut;  
}
QLabel& MpptUI::setMppt5CurrentOut()
{  
   return *ui->mppt5CurrentOut;  
}
QLabel& MpptUI::setMppt5Efficiency()
{  
   return *ui->mppt5Efficiency;  
}
QLabel& MpptUI::setMppt5Type()
{
   return *ui->mppt5Type;
}
QLabel& MpptUI::setMppt5Mode()
{
   return *ui->mppt5Mode;
}

QLabel& MpptUI::setMppt6PowerIn()
{  
   return *ui->mppt6PowerIn;  
}
QLabel& MpptUI::setMppt6VoltageIn()
{  
   return *ui->mppt6VoltageIn;   
}
QLabel& MpptUI::setMppt6CurrentIn()
{  
   return *ui->mppt6CurrentIn;   
}
QLabel& MpptUI::setMppt6PowerOut()
{  
   return *ui->mppt6PowerOut; 
}
QLabel& MpptUI::setMppt6VoltageOut()
{  
   return *ui->mppt6VoltageOut;  
}
QLabel& MpptUI::setMppt6CurrentOut()
{  
   return *ui->mppt6CurrentOut;  
}
QLabel& MpptUI::setMppt6Efficiency()
{  
   return *ui->mppt6Efficiency;  
}
QLabel& MpptUI::setMppt6Type()
{
   return *ui->mppt6Type;
}
QLabel& MpptUI::setMppt6Mode()
{
   return *ui->mppt6Mode;
}

QLabel& MpptUI::setMppt7PowerIn()
{  
   return *ui->mppt7PowerIn;  
}
QLabel& MpptUI::setMppt7VoltageIn()
{  
   return *ui->mppt7VoltageIn;   
}
QLabel& MpptUI::setMppt7CurrentIn()
{  
   return *ui->mppt7CurrentIn;   
}
QLabel& MpptUI::setMppt7PowerOut()
{  
   return *ui->mppt7PowerOut; 
}
QLabel& MpptUI::setMppt7VoltageOut()
{  
   return *ui->mppt7VoltageOut;  
}
QLabel& MpptUI::setMppt7CurrentOut()
{  
   return *ui->mppt7CurrentOut;  
}
QLabel& MpptUI::setMppt7Efficiency()
{  
   return *ui->mppt7Efficiency;  
}
QLabel& MpptUI::setMppt7Type()
{
   return *ui->mppt7Type;
}
QLabel& MpptUI::setMppt7Mode()
{
   return *ui->mppt7Mode;
}