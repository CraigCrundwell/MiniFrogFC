# MiniFrogFC
A Flight Controller For Brushed Motor Quadcopters

## About
This is a personal project to develop a custom PCB flight controller designed in Altium.

## Major Components

**STM32F303CCT6:** F3 microcontroller <br />
**CC2510F32RHHR:** RF microcontroller for integrated FrSky receiver <br />
**MPU-6050:** Gyroscope and accelerometer IC <br />

## FrSky Compatability
The built in FrSky compatable receiver is based off the [uSky](https://github.com/fishpepper/uSKY) receiver design 
running [OpenSky](https://github.com/fishpepper/OpenSky) firmware developed by [fishpepper.](https://github.com/fishpepper) <br />
Thanks to fishpepper for publishing the design under an opensource license! 

## BetaFlight Compatability

This flight controller is designed to be compatable with a popular open source FC software program called [BetaFlight.](https://github.com/betaflight) 
I have developed a new target for this custom flight controller here: [MiniFrogFC_Betaflight](https://github.com/CraigCrundwell/MiniFrogFC_Betaflight) <br />
Thanks to the BetaFlight team for their incredible work! <br />

**Note:** BetaFlight 4.0.6 is the last version that supports F3 based flight controllers. This custom target can not be built on newer versions! <br />

## The MiniFrogFC Name
I think frogs are neat... <br />
Other flight controllers have creative names much better than my original "Brushed Quadcopter FC." <br />
This name is one of a few I thought of in 5 minutes that didn't return strange results when entered on Google. <br />
Meh, we are just going to roll with it. 

## Progress

As of September 2021, subsystems of the design have been tested but the full system has not been fully tested yet.
