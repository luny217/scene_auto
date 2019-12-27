#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>

#include "hi_scene_inner.h"
#include "hi_scenecomm.h"
#include "hi_scene_setparam.h"
#include "mpi_vpss.h"
#include "mpi_awb.h"
#include "mpi_ae.h"
#include "mpi_isp.h"
#include "mpi_venc.h"

HI_S32 HI_MPI_ISP_QueryExposureInfo(VI_PIPE ViPipe, ISP_EXP_INFO_S *pstExpInfo)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetPubAttr(VI_PIPE ViPipe, ISP_PUB_ATTR_S *pstPubAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_QueryInnerStateInfo(VI_PIPE ViPipe, ISP_INNER_STATE_INFO_S *pstInnerStateInfo)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetAERouteAttrEx(VI_PIPE ViPipe, ISP_AE_ROUTE_EX_S *pstAERouteAttrEx)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetExposureAttr(VI_PIPE ViPipe, const ISP_EXPOSURE_ATTR_S *pstExpAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetExposureAttr(VI_PIPE ViPipe, ISP_EXPOSURE_ATTR_S *pstExpAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetWBAttr(VI_PIPE ViPipe, const ISP_WB_ATTR_S *pstWBAttr)
{
    return 0;
}
HI_S32 HI_MPI_ISP_GetWBAttr(VI_PIPE ViPipe, ISP_WB_ATTR_S *pstWBAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetAWBAttrEx(VI_PIPE ViPipe, ISP_AWB_ATTR_EX_S *pstAWBAttrEx)
{
    return 0;
}
HI_S32 HI_MPI_ISP_GetAWBAttrEx(VI_PIPE ViPipe, ISP_AWB_ATTR_EX_S *pstAWBAttrEx)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetCCMAttr(VI_PIPE ViPipe, const ISP_COLORMATRIX_ATTR_S *pstCCMAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetCCMAttr(VI_PIPE ViPipe, ISP_COLORMATRIX_ATTR_S *pstCCMAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetSaturationAttr(VI_PIPE ViPipe, const ISP_SATURATION_ATTR_S *pstSatAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetSaturationAttr(VI_PIPE ViPipe, ISP_SATURATION_ATTR_S *pstSatAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_QueryWBInfo(VI_PIPE ViPipe, ISP_WB_INFO_S *pstWBInfo)
{
    return 0;
}

HI_S32 HI_MPI_ISP_CalGainByTemp(VI_PIPE ViPipe, const ISP_WB_ATTR_S *pstWBAttr, HI_U16 u16ColorTemp, HI_S16 s16Shift, HI_U16 *pu16AWBGain)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetSpecAwbAttr(VI_PIPE ViPipe, const ISP_SPECAWB_ATTR_S *pstSpecAwbAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetCaaControlAttr(VI_PIPE ViPipe, const ISP_SPECAWB_CAA_CONTROl_S *pstSpecAwbCaaAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetCaaControlAttr(VI_PIPE ViPipe, ISP_SPECAWB_CAA_CONTROl_S *pstSpecAwbCaaAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetSpecAwbAttr(VI_PIPE ViPipe, ISP_SPECAWB_ATTR_S *pstSpecAwbAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetAERouteAttrEx(VI_PIPE ViPipe, const ISP_AE_ROUTE_EX_S *pstAERouteAttrEx)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetWDRExposureAttr(VI_PIPE ViPipe, const ISP_WDR_EXPOSURE_ATTR_S *pstWDRExpAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetWDRExposureAttr(VI_PIPE ViPipe, ISP_WDR_EXPOSURE_ATTR_S *pstWDRExpAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetModParam(const ISP_MOD_PARAM_S *pstModParam)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetModParam(ISP_MOD_PARAM_S *pstModParam)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetCtrlParam(VI_PIPE ViPipe, const ISP_CTRL_PARAM_S *pstIspCtrlParam)
{
    return 0;
}
HI_S32 HI_MPI_ISP_GetCtrlParam(VI_PIPE ViPipe, ISP_CTRL_PARAM_S *pstIspCtrlParam)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetFSWDRAttr(VI_PIPE ViPipe, const ISP_WDR_FS_ATTR_S *pstFSWDRAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetFSWDRAttr(VI_PIPE ViPipe, ISP_WDR_FS_ATTR_S *pstFSWDRAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetDRCAttr(VI_PIPE ViPipe, const ISP_DRC_ATTR_S *pstDRC)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetDRCAttr(VI_PIPE ViPipe, ISP_DRC_ATTR_S *pstDRC)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetDehazeAttr(VI_PIPE ViPipe, const ISP_DEHAZE_ATTR_S *pstDehazeAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetDehazeAttr(VI_PIPE ViPipe, ISP_DEHAZE_ATTR_S *pstDehazeAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetLDCIAttr(VI_PIPE ViPipe, const ISP_LDCI_ATTR_S *pstLDCIAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetLDCIAttr(VI_PIPE ViPipe, ISP_LDCI_ATTR_S *pstLDCIAttr)
{
    return 0;
}


HI_S32 HI_MPI_ISP_SetNRAttr(VI_PIPE ViPipe, const ISP_NR_ATTR_S *pstNRAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetNRAttr(VI_PIPE ViPipe, ISP_NR_ATTR_S *pstNRAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetDEAttr(VI_PIPE ViPipe, const ISP_DE_ATTR_S *pstDEAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetDEAttr(VI_PIPE ViPipe, ISP_DE_ATTR_S *pstDEAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetColorToneAttr(VI_PIPE ViPipe, const ISP_COLOR_TONE_ATTR_S *pstCTAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetColorToneAttr(VI_PIPE ViPipe, ISP_COLOR_TONE_ATTR_S *pstCTAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetGammaAttr(VI_PIPE ViPipe, const ISP_GAMMA_ATTR_S *pstGammaAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetGammaAttr(VI_PIPE ViPipe, ISP_GAMMA_ATTR_S *pstGammaAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetMeshShadingAttr(VI_PIPE ViPipe, const ISP_SHADING_ATTR_S *pstShadingAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetIspSharpenAttr(VI_PIPE ViPipe, const ISP_SHARPEN_ATTR_S *pstIspShpAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetIspSharpenAttr(VI_PIPE ViPipe, ISP_SHARPEN_ATTR_S *pstIspShpAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetStatisticsConfig(VI_PIPE ViPipe, const ISP_STATISTICS_CFG_S *pstStatCfg)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetStatisticsConfig(VI_PIPE ViPipe, ISP_STATISTICS_CFG_S *pstStatCfg)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetMeshShadingAttr(VI_PIPE ViPipe, ISP_SHADING_ATTR_S *pstShadingAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetGlobalCacAttr(VI_PIPE ViPipe, const ISP_GLOBAL_CAC_ATTR_S *pstGlobalCacAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetGlobalCacAttr(VI_PIPE ViPipe, ISP_GLOBAL_CAC_ATTR_S *pstGlobalCacAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_SetDemosaicAttr(VI_PIPE ViPipe, const ISP_DEMOSAIC_ATTR_S *pstDemosaicAttr)
{
    return 0;
}

HI_S32 HI_MPI_ISP_GetDemosaicAttr(VI_PIPE ViPipe, ISP_DEMOSAIC_ATTR_S *pstDemosaicAttr)
{
    return 0;
}

HI_S32 HI_MPI_VI_SetPipeNRXParam(VI_PIPE ViPipe, const VI_PIPE_NRX_PARAM_S *pstNrXParam)
{
    return 0;
}

HI_S32 HI_MPI_VI_GetPipeNRXParam(VI_PIPE ViPipe, VI_PIPE_NRX_PARAM_S *pstNrXParam)
{
    return 0;
}

HI_S32 HI_MPI_VI_SetPipeAttr(VI_PIPE ViPipe, const VI_PIPE_ATTR_S *pstPipeAttr)
{
    return 0;
}

HI_S32 HI_MPI_VI_GetPipeAttr(VI_PIPE ViPipe, VI_PIPE_ATTR_S *pstPipeAttr)
{
    return 0;
}

HI_S32 HI_MPI_VPSS_GetGrpAttr(VPSS_GRP VpssGrp, VPSS_GRP_ATTR_S *pstGrpAttr)
{
    return 0;
}
HI_S32 HI_MPI_VPSS_SetGrpAttr(VPSS_GRP VpssGrp, const VPSS_GRP_ATTR_S *pstGrpAttr)
{
    return 0;
}

HI_S32 HI_MPI_VI_SetChnDISAttr(VI_PIPE ViPipe, VI_CHN ViChn, const DIS_ATTR_S *pstDISAttr)
{
    return 0;
}

HI_S32 HI_MPI_VI_GetChnDISAttr(VI_PIPE ViPipe, VI_CHN ViChn, DIS_ATTR_S *pstDISAttr)
{
    return 0;
}

HI_S32 HI_MPI_VPSS_SetGrpNRXParam(VPSS_GRP VpssGrp, const VPSS_GRP_NRX_PARAM_S *pstNRXParam)
{
    return 0;
}

HI_S32 HI_MPI_VPSS_GetGrpNRXParam(VPSS_GRP VpssGrp, VPSS_GRP_NRX_PARAM_S *pstNRXParam)
{
    return 0;
}

HI_S32 HI_MPI_VENC_QueryStatus(VENC_CHN VeChn, VENC_CHN_STATUS_S *pstStatus)
{
    return 0;
}

HI_S32 HI_MPI_VENC_GetChnAttr(VENC_CHN VeChn, VENC_CHN_ATTR_S *pstChnAttr)
{
    return 0;
}

HI_S32 HI_MPI_VENC_GetRcParam(VENC_CHN VeChn, VENC_RC_PARAM_S *pstRcParam)
{
    return 0;
}

HI_S32 HI_MPI_VENC_SetRcParam(VENC_CHN VeChn, const VENC_RC_PARAM_S *pstRcParam)
{
    return 0;
}
