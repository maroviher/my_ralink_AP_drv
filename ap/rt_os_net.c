#include "../include/rtmp_type.h"
#include "../include/rtmp_comm.h"
#include "../include/os/rt_linux.h"
#include "../include/rt_os_net.h"
#include "../include/rtmp_cmd.h"
#include "../include/rtmp_os.h"

INT VIRTUAL_IF_UP(VOID *pAd)
{
	RT_CMD_INF_UP_DOWN InfConf = { rt28xx_open, rt28xx_close };
	if (RTMP_COM_IoctlHandle(pAd, NULL, CMD_RTPRIV_IOCTL_VIRTUAL_INF_UP,
						0, &InfConf, 0) != NDIS_STATUS_SUCCESS)
		return -1;
	return 0;
}

VOID VIRTUAL_IF_DOWN(VOID *pAd)
{
	RT_CMD_INF_UP_DOWN InfConf = { rt28xx_open, rt28xx_close };
	RTMP_COM_IoctlHandle(pAd, NULL, CMD_RTPRIV_IOCTL_VIRTUAL_INF_DOWN,
						0, &InfConf, 0);
	return;
}