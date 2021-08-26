KEIL project
To use the project with KEIL uVision 5 for ARM, please follow the instructions below:

Open the KEIL uVision 5 for ARM and select Project->Open Project menu.
Open the KEIL project C:\{username}-1_2 DK x.x.x\Project\BLE_Examples\BLE_Chat\MDK-ARM\BlueNRG-1\BLE_Chat.uvprojx or C:\{username}-1_2 DK x.x.x\Project\BLE_Examples\BLE_Chat\MDK-ARM\BlueNRG-2\BLE_Chat.uvprojx
Select desired configuration to build
Select Project->Rebuild all target files. This will recompile and link the entire application
To download the binary image, please connect STLink to JTAG connector in your board (if available).
Select Project->Download to download the related binary image.
Alternatively, open the BlueNRG1 Flasher utility and download the built binary image.