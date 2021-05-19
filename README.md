Access Point Linux kernel driver for old Ralink chipsets. Better connection speed and less CPU utilization than the kernel tree driver. Compiles on modern kernels (tested until 5.8)<br><br>

compile for all supported cards:<br>
make<br>

compile for a certain chip:<br>
#5572 3573 3572 2870 5370 3070<br>
make CHIPSET=2870<br><br>

include/os/rt_linux.h<br>
#change path to config file (AP_PROFILE_PATH) if you want<br>
#then copy and edit the config file: cp RTAP.dat /etc/Wireless/RTAP.dat<br>

