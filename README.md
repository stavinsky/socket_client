# socket_client
C++ winapi socket client based on WSAWaitForMultipleEvents and 
thread safe queue to simplify getting and sending data

## why
I need some possibility to send data from MT4 Terminal to different server app. 
This is the way I choose to get it. 

So it very simple lib, may be with some bugs. Feel free to use, commit and contact me.
Let's make world easier.

## depencies 
I will use few different libs like safe queue and logger from separate folders. 
Also in mtsocketclient project you will find how to put it all together. 
