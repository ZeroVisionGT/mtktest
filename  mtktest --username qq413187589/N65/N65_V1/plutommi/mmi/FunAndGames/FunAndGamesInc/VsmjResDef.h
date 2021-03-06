/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/
/*****************************************************************************
*
 * Filename:
 * ---------
 * VsmjDefs.h
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  Game id define Vsmj.
 *
 * Author:
 * -------
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef GAME_VSMJ_DEFS_H
#define GAME_VSMJ_DEFS_H

typedef enum
{
    STR_ID_GX_VSMJ_GAME_NAME = GAME_VSMJ_BASE + 1,

    STR_ID_GX_VSMJ_NEW,
    STR_ID_GX_VSMJ_RESUME,
    STR_ID_GX_VSMJ_LEVEL,
    STR_ID_GX_VSMJ_GRADE,
    STR_ID_GX_VSMJ_HELP,

    STR_ID_GX_VSMJ_LEVEL_NORMAL,
    STR_ID_GX_VSMJ_LEVEL_CPUVSCPU,

    STR_ID_GX_VSMJ_HELP_DESCRIPTION,

    STR_ID_GX_VSMJ_LEVEL1,
    STR_ID_GX_VSMJ_LEVEL2,
    STR_ID_GX_VSMJ_LEVEL3,
    STR_ID_GX_VSMJ_CUR_GAME,

    STR_ID_GX_VSMJ_COUNT    /* no use right now */
} mmi_vsmj_str_id_enum;

/* Image ID */
typedef enum
{

    IMG_ID_GX_VSMJ_GAME_ICON = GAME_VSMJ_BASE + 1,

#ifndef __MMI_GAME_MULTI_LANGUAGE_SUPPORT__
    IMG_ID_GX_VSMJ_GOTEXT,
#endif 
    IMG_ID_GX_VSMJ_GRADESMAP,
    IMG_ID_GX_VSMJ_GOPIC,   /* gameover */

    IMG_ID_GX_VSMJ_BRICK_EAST,
    IMG_ID_GX_VSMJ_BRICK_WEST,
    IMG_ID_GX_VSMJ_BRICK_SOUTH,
    IMG_ID_GX_VSMJ_BRICK_NORTH,
    IMG_ID_GX_VSMJ_BRICK_CHUNG,
    IMG_ID_GX_VSMJ_BRICK_FA,
    IMG_ID_GX_VSMJ_BRICK_BAI,
    IMG_ID_GX_VSMJ_BRICK_1W,
    IMG_ID_GX_VSMJ_BRICK_2W,
    IMG_ID_GX_VSMJ_BRICK_3W,
    IMG_ID_GX_VSMJ_BRICK_4W,
    IMG_ID_GX_VSMJ_BRICK_5W,
    IMG_ID_GX_VSMJ_BRICK_6W,
    IMG_ID_GX_VSMJ_BRICK_7W,
    IMG_ID_GX_VSMJ_BRICK_8W,
    IMG_ID_GX_VSMJ_BRICK_9W,
    IMG_ID_GX_VSMJ_BRICK_1S,
    IMG_ID_GX_VSMJ_BRICK_2S,
    IMG_ID_GX_VSMJ_BRICK_3S,
    IMG_ID_GX_VSMJ_BRICK_4S,
    IMG_ID_GX_VSMJ_BRICK_5S,
    IMG_ID_GX_VSMJ_BRICK_6S,
    IMG_ID_GX_VSMJ_BRICK_7S,
    IMG_ID_GX_VSMJ_BRICK_8S,
    IMG_ID_GX_VSMJ_BRICK_9S,
    IMG_ID_GX_VSMJ_BRICK_1T,
    IMG_ID_GX_VSMJ_BRICK_2T,
    IMG_ID_GX_VSMJ_BRICK_3T,
    IMG_ID_GX_VSMJ_BRICK_4T,
    IMG_ID_GX_VSMJ_BRICK_5T,
    IMG_ID_GX_VSMJ_BRICK_6T,
    IMG_ID_GX_VSMJ_BRICK_7T,
    IMG_ID_GX_VSMJ_BRICK_8T,
    IMG_ID_GX_VSMJ_BRICK_9T,

    IMG_ID_GX_VSMJ_BRICK_SPRING,
    IMG_ID_GX_VSMJ_BRICK_SUMMER,
    IMG_ID_GX_VSMJ_BRICK_AUTUMN,
    IMG_ID_GX_VSMJ_BRICK_WINTER,
    IMG_ID_GX_VSMJ_BRICK_M,
    IMG_ID_GX_VSMJ_BRICK_L,
    IMG_ID_GX_VSMJ_BRICK_Z,
    IMG_ID_GX_VSMJ_BRICK_J,

    IMG_ID_GX_VSMJ_BRICK_TABLE_VER_BACK,
    IMG_ID_GX_VSMJ_BRICK_TABLE_HOR_BACK,
    IMG_ID_GX_VSMJ_BRICK_USER_LEFT_BACK,
    IMG_ID_GX_VSMJ_BRICK_USER_RIGHT_BACK,
    IMG_ID_GX_VSMJ_BRICK_USER_UP_BACK,
    IMG_ID_GX_VSMJ_BRICK_USER_LR_HIDE_BACK,
    IMG_ID_GX_VSMJ_BRICK_USER_UD_HIDE_BACK,

    IMG_ID_GX_VSMJ_SPECIAL_EAT_BASE,
    IMG_ID_GX_VSMJ_SPECIAL_EAT_INVALID,
    IMG_ID_GX_VSMJ_SPECIAL_EAT_HIGHLIGHT,
    IMG_ID_GX_VSMJ_SPECIAL_EAT_0,
    IMG_ID_GX_VSMJ_SPECIAL_EAT_1,
    IMG_ID_GX_VSMJ_SPECIAL_EAT_2,
    IMG_ID_GX_VSMJ_SPECIAL_PON_BASE,
    IMG_ID_GX_VSMJ_SPECIAL_PON_INVALID,
    IMG_ID_GX_VSMJ_SPECIAL_PON_HIGHLIGHT,
    IMG_ID_GX_VSMJ_SPECIAL_GUN_BASE,
    IMG_ID_GX_VSMJ_SPECIAL_GUN_INVALID,
    IMG_ID_GX_VSMJ_SPECIAL_GUN_HIGHLIGHT,
    IMG_ID_GX_VSMJ_SPECIAL_HOU_BASE,
    IMG_ID_GX_VSMJ_SPECIAL_HOU_INVALID,
    IMG_ID_GX_VSMJ_SPECIAL_HOU_HIGHLIGHT,
    IMG_ID_GX_VSMJ_SPECIAL_CANCEL_BASE,
    IMG_ID_GX_VSMJ_SPECIAL_CANCEL_HIGHLIGHT,
    IMG_ID_GX_VSMJ_SPECIAL_LIOU_GU,

    IMG_ID_GX_VSMJ_PEN_CURSOR_OFF,
    IMG_ID_GX_VSMJ_PEN_CURSOR_ON,

    IMG_ID_GX_VSMJ_SCORE_8_FLOWER,
    IMG_ID_GX_VSMJ_SCORE_7_1_FLOWER,
    IMG_ID_GX_VSMJ_SCORE_ZE_MO,
    IMG_ID_GX_VSMJ_SCORE_HUO_BY_GUN,
    IMG_ID_GX_VSMJ_SCORE_MEN_CHIN,
    IMG_ID_GX_VSMJ_SCORE_MENCHIN_ZEMO,
    IMG_ID_GX_VSMJ_SCORE_FLOWER_SEASON_SET,
    IMG_ID_GX_VSMJ_SCORE_FLOWER_PLANT_SET,
    IMG_ID_GX_VSMJ_SCORE_SEA_MOON,
    IMG_ID_GX_VSMJ_SCORE_ALL_ASK,
    IMG_ID_GX_VSMJ_SCORE_BIG_3_YUANG,
    IMG_ID_GX_VSMJ_SCORE_SMALL_3_YUANG,
    IMG_ID_GX_VSMJ_SCORE_CHUNG,
    IMG_ID_GX_VSMJ_SCORE_FA,
    IMG_ID_GX_VSMJ_SCORE_BAI,
    IMG_ID_GX_VSMJ_SCORE_BIG_4_WIND,
    IMG_ID_GX_VSMJ_SCORE_SMALL_4_WIND,
    IMG_ID_GX_VSMJ_SCORE_3_ENKE,
    IMG_ID_GX_VSMJ_SCORE_4_ENKE,
    IMG_ID_GX_VSMJ_SCORE_5_ENKE,
    IMG_ID_GX_VSMJ_SCORE_NUM_1_COLOR,
    IMG_ID_GX_VSMJ_SCORE_MIX_1_COLOR,
    IMG_ID_GX_VSMJ_SCORE_PAIR_PAIR_HOU,
    IMG_ID_GX_VSMJ_NUMBER_0,
    IMG_ID_GX_VSMJ_NUMBER_1,
    IMG_ID_GX_VSMJ_NUMBER_2,
    IMG_ID_GX_VSMJ_NUMBER_3,
    IMG_ID_GX_VSMJ_NUMBER_4,
    IMG_ID_GX_VSMJ_NUMBER_5,
    IMG_ID_GX_VSMJ_NUMBER_6,
    IMG_ID_GX_VSMJ_NUMBER_7,
    IMG_ID_GX_VSMJ_NUMBER_8,
    IMG_ID_GX_VSMJ_NUMBER_9,

    IMG_ID_GX_VSMJ_ARROWHEAD,
    IMG_ID_GX_VSMJ_TOP_SOLID,
    IMG_ID_GX_VSMJ_BOTTOM_SOLID,
    IMG_ID_GX_VSMJ_EATCASE_BG1,
    IMG_ID_GX_VSMJ_EATCASE_BG2,
    IMG_ID_GX_VSMJ_EATCASE_BG3,
    IMG_ID_GX_VSMJ_EATCASE_HIGHLIGHT,
    IMG_ID_GX_VSMJ_GUNCASE_BG1,
    IMG_ID_GX_VSMJ_GUNCASE_BG2,
    IMG_ID_GX_VSMJ_GUNCASE_BG3,
    IMG_ID_GX_VSMJ_GUNCASE_HIGHLIGHT,

#ifdef __MMI_GAME_MULTI_LANGUAGE_SUPPORT__
    //added for multi-language support
    IMG_ID_GX_VSMJ_GOTEXT_LANGUAGE0,
    IMG_ID_GX_VSMJ_GOTEXT_LANGUAGE1,
    IMG_ID_GX_VSMJ_GOTEXT_LANGUAGE2,
    IMG_ID_GX_VSMJ_GOTEXT_LANGUAGE3,
    IMG_ID_GX_VSMJ_GOTEXT_LANGUAGE4,
    IMG_ID_GX_VSMJ_GOTEXT_LANGUAGE5,
    IMG_ID_GX_VSMJ_GOTEXT_LANGUAGE6,
    IMG_ID_GX_VSMJ_GOTEXT_LANGUAGE7,
    IMG_ID_GX_VSMJ_GOTEXT_LANGUAGE8,
    IMG_ID_GX_VSMJ_GOTEXT_LANGUAGE9,
#endif  /* __MMI_GAME_MULTI_LANGUAGE_SUPPORT__ */

    IMG_ID_GX_VSMJ_SCORE_NOTHING
} mmi_vsmj_img_id_enum;

#endif /* GAME_VSMJ_DEFS_H */ 

