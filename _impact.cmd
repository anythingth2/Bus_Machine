setMode -bs
setMode -bs
setMode -bs
setMode -bs
setCable -port svf -file "C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Bus_Machine/Bus_Machine.svf"
addDevice -p 1 -file "C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Bus_Machine/bus_machine.bit"
Program -p 1 
setMode -pff
setMode -pff
addConfigDevice  -name "bus_prom" -path "C:\Users\ChiChaChai\Documents\CE-KMITL\AdvDigital\Bus_Machine"
setSubmode -pffserial
setAttribute -configdevice -attr multibootBpiType -value ""
addDesign -version 0 -name "0"
setAttribute -configdevice -attr compressed -value "FALSE"
setAttribute -configdevice -attr compressed -value "FALSE"
setAttribute -configdevice -attr autoSize -value "FALSE"
setAttribute -configdevice -attr fileFormat -value "mcs"
setAttribute -configdevice -attr fillValue -value "FF"
setAttribute -configdevice -attr swapBit -value "FALSE"
setAttribute -configdevice -attr dir -value "UP"
setAttribute -configdevice -attr multiboot -value "FALSE"
setAttribute -configdevice -attr multiboot -value "FALSE"
setAttribute -configdevice -attr spiSelected -value "FALSE"
setAttribute -configdevice -attr spiSelected -value "FALSE"
addPromDevice -p 1 -size 0 -name xcf01s
setMode -bs
setMode -bs
setMode -bs
setMode -pff
setMode -pff
setSubmode -pffserial
setMode -pff
addDeviceChain -index 0
setMode -pff
setMode -pff
setMode -pff
addDeviceChain -index 0
addDevice -p 1 -file "C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Bus_Machine/bus_machine.bit"
setMode -pff
setSubmode -pffserial
generate
assignFile -p 1 -file "C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Lab/Lab2/lab2.bit"
setAttribute -position 1 -attr devicePartName -value "xc3s400"
setMode -pff
setSubmode -pffserial
generate
setMode -pff
setSubmode -pffserial
generate
addPromDevice -p 2 -size 0 -name xc1704l
deletePromDevice -position 1
setMode -pff
setSubmode -pffserial
generate
setCurrentDesign -version 0
assignFile -p 1 -file "C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Bus_Machine/bus_machine.bit"
setAttribute -position 1 -attr devicePartName -value "xc6slx9"
setMode -pff
setSubmode -pffserial
generate
setCurrentDesign -version 0
addPromDevice -p 2 -size 0 -name xc1701
deletePromDevice -position 1
setMode -pff
setSubmode -pffserial
generate
addPromDevice -p 2 -size 0 -name xc1704l
deletePromDevice -position 1
setMode -pff
setSubmode -pffserial
generate
setCurrentDesign -version 0
setMode -pff
setMode -bs
setMode -ss
setMode -sm
setMode -hw140
setMode -spi
setMode -acecf
setMode -acempm
setMode -pff
setMode -pff
saveProjectFile -file "C:\Xilinx\14.7\ISE_DS\\auto_project.ipf"
setMode -bs
deleteDevice -position 1
setMode -bs
setMode -ss
setMode -sm
setMode -hw140
setMode -spi
setMode -acecf
setMode -acempm
setMode -pff
setMode -bs
setMode -bs
setMode -bs
setMode -pff
setMode -pff
setMode -pff
deletePromDevice -position 1
setCurrentDesign -version 0
deleteDevice -position 1
deleteDesign -version 0
setCurrentDesign -version -1
setMode -bs
setMode -bs
setMode -bs
setCable -port svf -file "C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Bus_Machine/bus_prom2.svf"
addDevice -p 1 -sprom "xcf32p" -file "C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Bus_Machine/bus_prom.mcs"
setAttribute -position 1 -attr packageName -value ""
Program -p 1 -e -defaultVersion 0 
setMode -pff
setMode -pff
addConfigDevice  -name "bus_prom3" -path "C:\Users\ChiChaChai\Documents"
setSubmode -pffspi
setAttribute -configdevice -attr multibootBpiType -value ""
addDesign -version 0 -name "0"
setMode -pff
addDeviceChain -index 0
setMode -pff
addDeviceChain -index 0
setAttribute -configdevice -attr compressed -value "FALSE"
setAttribute -configdevice -attr compressed -value "FALSE"
setAttribute -configdevice -attr autoSize -value "FALSE"
setAttribute -configdevice -attr fileFormat -value "mcs"
setAttribute -configdevice -attr fillValue -value "FF"
setAttribute -configdevice -attr swapBit -value "FALSE"
setAttribute -configdevice -attr dir -value "UP"
setAttribute -configdevice -attr multiboot -value "FALSE"
setAttribute -configdevice -attr multiboot -value "FALSE"
setAttribute -configdevice -attr spiSelected -value "TRUE"
setAttribute -configdevice -attr spiSelected -value "TRUE"
addPromDevice -p 1 -size 1024 -name 1M
setMode -pff
setMode -pff
setMode -pff
setMode -pff
addDeviceChain -index 0
setMode -pff
addDeviceChain -index 0
setSubmode -pffspi
setMode -pff
setAttribute -design -attr name -value "0000"
addDevice -p 1 -file "C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Bus_Machine/bus_machine.bit"
setMode -pff
setSubmode -pffspi
generate
setCurrentDesign -version 0
setMode -pff
setMode -bs
setMode -ss
setMode -sm
setMode -hw140
setMode -spi
setMode -acecf
setMode -acempm
setMode -pff
setMode -pff
saveProjectFile -file "C:\Xilinx\14.7\ISE_DS\\auto_project.ipf"
setMode -bs
deleteDevice -position 1
setMode -bs
setMode -ss
setMode -sm
setMode -hw140
setMode -spi
setMode -acecf
setMode -acempm
setMode -pff
setMode -bs
setMode -bs
setMode -bs
setMode -pff
setMode -pff
setMode -pff
deletePromDevice -position 1
setCurrentDesign -version 0
deleteDevice -position 1
deleteDesign -version 0
setCurrentDesign -version -1
setMode -bs
setMode -bs
setMode -bs
setCable -port svf -file "C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Bus_Machine/bus_3.svf"
addDevice -p 1 -file "C:/Xilinx/14.7/ISE_DS/ISE/spartan6/data/xc6slx9.bsd"
attachflash -position 1 -spi "M25P80"
assignfiletoattachedflash -position 1 -file "C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Bus_Machine/bus_prom.mcs"
Program -p 1 -dataWidth 1 -spionly -e -loadfpga 
setCable -port auto
setCable -port auto
setCable -port auto
setCable -port auto
setMode -pff
setMode -pff
addConfigDevice  -name "BUS_PROM" -path "C:\Users\ChiChaChai\Documents\CE-KMITL\AdvDigital\Bus_Machine"
setSubmode -pffspi
setAttribute -configdevice -attr multibootBpiType -value ""
addDesign -version 0 -name "0"
setMode -pff
addDeviceChain -index 0
setMode -pff
addDeviceChain -index 0
setAttribute -configdevice -attr compressed -value "FALSE"
setAttribute -configdevice -attr compressed -value "FALSE"
setAttribute -configdevice -attr autoSize -value "FALSE"
setAttribute -configdevice -attr fileFormat -value "mcs"
setAttribute -configdevice -attr fillValue -value "FF"
setAttribute -configdevice -attr swapBit -value "FALSE"
setAttribute -configdevice -attr dir -value "UP"
setAttribute -configdevice -attr multiboot -value "FALSE"
setAttribute -configdevice -attr multiboot -value "FALSE"
setAttribute -configdevice -attr spiSelected -value "TRUE"
setAttribute -configdevice -attr spiSelected -value "TRUE"
addPromDevice -p 1 -size 1024 -name 1M
setMode -pff
setMode -pff
setMode -pff
setMode -pff
addDeviceChain -index 0
setMode -pff
addDeviceChain -index 0
setSubmode -pffspi
setMode -pff
setAttribute -design -attr name -value "0000"
addDevice -p 1 -file "C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Bus_Machine/bus_machine.bit"
setMode -pff
setSubmode -pffspi
generate
setCurrentDesign -version 0
setMode -pff
setMode -bs
setMode -ss
setMode -sm
setMode -hw140
setMode -spi
setMode -acecf
setMode -acempm
setMode -pff
setMode -pff
saveProjectFile -file "C:\Xilinx\14.7\ISE_DS\\auto_project.ipf"
setMode -bs
deleteDevice -position 1
setMode -bs
setMode -ss
setMode -sm
setMode -hw140
setMode -spi
setMode -acecf
setMode -acempm
setMode -pff
setMode -bs
setMode -bs
setMode -bs
setMode -pff
setMode -pff
setMode -pff
deletePromDevice -position 1
setCurrentDesign -version 0
deleteDevice -position 1
deleteDesign -version 0
setCurrentDesign -version -1
setMode -bs
setMode -bs
setMode -bs
setCable -port svf -file "C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Bus_Machine/BUS_PROM.svf"
addDevice -p 1 -file "C:/Xilinx/14.7/ISE_DS/ISE/spartan6/data/xc6slx9.bsd"
attachflash -position 1 -spi "M25P80"
assignfiletoattachedflash -position 1 -file "C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Bus_Machine/bus_prom.mcs"
Program -p 1 -dataWidth 1 -spionly -e -loadfpga 
setMode -pff
setMode -pff
addConfigDevice  -name "bus_prom" -path "C:\Xilinx\14.7\ISE_DS\"
setSubmode -pffserial
setAttribute -configdevice -attr multibootBpiType -value ""
addDesign -version 0 -name "0"
setAttribute -configdevice -attr compressed -value "FALSE"
setAttribute -configdevice -attr compressed -value "FALSE"
setAttribute -configdevice -attr autoSize -value "FALSE"
setAttribute -configdevice -attr fileFormat -value "mcs"
setAttribute -configdevice -attr fillValue -value "FF"
setAttribute -configdevice -attr swapBit -value "FALSE"
setAttribute -configdevice -attr dir -value "UP"
setAttribute -configdevice -attr multiboot -value "FALSE"
setAttribute -configdevice -attr multiboot -value "FALSE"
setAttribute -configdevice -attr spiSelected -value "FALSE"
setAttribute -configdevice -attr spiSelected -value "FALSE"
addPromDevice -p 1 -size 0 -name xcf01s
setMode -pff
setMode -pff
setSubmode -pffserial
setMode -pff
addDeviceChain -index 0
setMode -pff
setMode -pff
setMode -pff
addDeviceChain -index 0
addDevice -p 1 -file "C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Bus_Machine/bus_machine.bit"
setMode -pff
setSubmode -pffserial
generate
deletePromDevice -position 1
setCurrentDesign -version 0
deleteDevice -position 1
deleteDesign -version 0
setCurrentDesign -version -1
setMode -pff
setMode -pff
addConfigDevice  -name "bus_prom1" -path "C:\Xilinx\14.7\ISE_DS\"
setSubmode -pffserial
setAttribute -configdevice -attr multibootBpiType -value ""
addDesign -version 0 -name "0"
setAttribute -configdevice -attr compressed -value "FALSE"
setAttribute -configdevice -attr compressed -value "FALSE"
setAttribute -configdevice -attr autoSize -value "FALSE"
setAttribute -configdevice -attr fileFormat -value "mcs"
setAttribute -configdevice -attr fillValue -value "FF"
setAttribute -configdevice -attr swapBit -value "FALSE"
setAttribute -configdevice -attr dir -value "UP"
setAttribute -configdevice -attr multiboot -value "FALSE"
setAttribute -configdevice -attr multiboot -value "FALSE"
setAttribute -configdevice -attr spiSelected -value "FALSE"
setAttribute -configdevice -attr spiSelected -value "FALSE"
addPromDevice -p 1 -size 0 -name xcf04s
setMode -pff
setMode -pff
setSubmode -pffserial
setMode -pff
addDeviceChain -index 0
setMode -pff
setMode -pff
setMode -pff
addDeviceChain -index 0
addDevice -p 1 -file "C:/Users/ChiChaChai/Documents/CE-KMITL/AdvDigital/Bus_Machine/bus_machine.bit"
setMode -pff
setSubmode -pffserial
generate
setCurrentDesign -version 0
setMode -pff
setMode -bs
setMode -ss
setMode -sm
setMode -hw140
setMode -spi
setMode -acecf
setMode -acempm
setMode -pff
setMode -pff
saveProjectFile -file "C:\Xilinx\14.7\ISE_DS\\auto_project.ipf"
setMode -bs
setMode -ss
setMode -sm
setMode -hw140
setMode -spi
setMode -acecf
setMode -acempm
setMode -pff
deletePromDevice -position 1
setCurrentDesign -version 0
deleteDevice -position 1
deleteDesign -version 0
setCurrentDesign -version -1
attachflash -position 1 -spi "M25P80"
setMode -bs
setMode -bs
setMode -bs
setCable -port svf -file "C:/Xilinx/14.7/ISE_DS/bus_prom.svf"
deleteDevice -position 1
addDevice -p 1 -sprom "xc18v04" -file "C:/Xilinx/14.7/ISE_DS/bus_prom1.mcs"
setAttribute -position 1 -attr packageName -value ""
Program -p 1 -e -v 
Program -p 1 -e -v 
deleteDevice -position 1
addDevice -p 1 -sprom "xcf04s" -file "C:/Xilinx/14.7/ISE_DS/bus_prom.mcs"
setAttribute -position 1 -attr packageName -value ""
setCable -port auto
setCable -port auto
setCable -port auto
setCable -port auto
assignFile -p 1 -file "C:/Xilinx/14.7/ISE_DS/bus_prom.mcs"
setAttribute -position 1 -attr packageName -value ""
setCable -port auto
setCable -port auto
setCable -port auto
setCable -port auto
setCable -port auto
deleteDevice -position 1
addDevice -p 1 -sprom "xc18v04" -file "C:/Xilinx/14.7/ISE_DS/bus_prom.mcs"
setAttribute -position 1 -attr packageName -value ""
setCable -port auto
deleteDevice -position 1
addDevice -p 1 -sprom "xcf04s" -file "C:/Xilinx/14.7/ISE_DS/bus_prom.mcs"
setAttribute -position 1 -attr packageName -value ""
setCable -port auto
setCable -port auto
setCable -port auto
assignFile -p 1 -file "C:/Xilinx/14.7/ISE_DS/bus_prom1.mcs"
setAttribute -position 1 -attr packageName -value ""
setCable -port auto
setMode -bs
setMode -bs
setMode -ss
setMode -sm
setMode -hw140
setMode -spi
setMode -acecf
setMode -acempm
setMode -pff
setMode -bs
saveProjectFile -file "C:\Xilinx\14.7\ISE_DS\\auto_project.ipf"
setMode -bs
setMode -bs
deleteDevice -position 1
setMode -bs
setMode -ss
setMode -sm
setMode -hw140
setMode -spi
setMode -acecf
setMode -acempm
setMode -pff
