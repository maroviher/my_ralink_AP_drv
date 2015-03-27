git clone https://github.com/maroviher/my_ralink_AP_drv<br>
cd raspi<br>
# arm-linux-gnueabihf- is a prefix to your cross compiler<br>
cards="2870 3070 5370" ; for card in $cards; do ./cross_compile.sh $card arm-linux-gnueabihf- /path/to/linux/source ; done
ls -la ../os/linux/*.ko<br>
<br>
# to clean all<br>
make clean ; rm -f ap/.* ; rm -f chips/.* ; rm -f common/.* ; rm -f os/linux/\.* ; rm -f os/linux/*.mod.c ; rm -f os/linux/*.ko ; rm -f rate_ctrl/\.* ; rm -f sta/\.* ; rm -f tools/bin2h
