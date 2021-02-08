By: cools 
9:00 PM 7/10/2006

This is a custom luaplayer which adds the some of the functions
from Lua Player .17dk_2 and youresam's netlib version, with all
the functions from Lua Player .20 except module loading.

Functions Added:
System Functions:
System.Quit() --Will quit to the Game Menu on 1.5 and to eLoader on 2.XX
System.setCpuSpeedVHigh() --Sets CPU to 333* Mhz
System.setCpuSpeedHigh() --Sets CPU to 300 Mhz
System.setCpuSpeedMed() --Sets CPU to 266 Mhz
System.setCpuSpeedReg() --Sets CPU to 222 Mhz
System.setCpuSpeedLow() --Sets CPU to 200 Mhz
System.setCpuSpeedVLow() --Sets CPU to 100 Mhz

* = It has actually slowed SOME of my games down, so check to see what it does first...

I am hoping to actually let the CPU be set like this: System.setCpuClock(333,333,166) but
that might not happen...

Netlib 2.0 UDP functions:
Socket.udpConnect(host,port)
udpSocket:udpSend(string)
udpSocket:close()
udpSocket:recv()

For the Rest of the Netlib functions please use the netlib.lua file (the
functions netget(id), netclose(), etc. might be included soon...)


All in all this is just something that was a copy and paste project (well with some
minor modifications). Also Serial I/O MIGHT have been disabled.


The only Non-Module Lua Player .20 with System Over/Under Clocking/Quitting Features with Netlib 2.0 Support!


That's All Folks!