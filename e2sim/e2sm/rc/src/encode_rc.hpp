/*****************************************************************************
#                                                                            *
# Copyright 2020 AT&T Intellectual Property                                  *
# Copyright 2022 Alexandre Huff                                              *
#                                                                            *
# Licensed under the Apache License, Version 2.0 (the "License");            *
# you may not use this file except in compliance with the License.           *
# You may obtain a copy of the License at                                    *
#                                                                            *
#      http://www.apache.org/licenses/LICENSE-2.0                            *
#                                                                            *
# Unless required by applicable law or agreed to in writing, software        *
# distributed under the License is distributed on an "AS IS" BASIS,          *
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   *
# See the License for the specific language governing permissions and        *
# limitations under the License.                                             *
#                                                                            *
******************************************************************************/

#ifndef ENCODE_RC_HPP
#define ENCODE_RC_HPP

extern "C" {
    #include "OCTET_STRING.h"
    #include "asn_application.h"
    #include "E2SM-RC-IndicationMessage.h"
    #include "E2SM-RC-IndicationHeader.h"
    #include "E2SM-RC-RANFunctionDefinition.h"
    #include "RANFunctionDefinition-EventTrigger.h"
    #include "RANFunctionDefinition-EventTrigger-Style-Item.h"
    #include "RANFunctionDefinition-Insert.h"
    #include "RANFunctionDefinition-Insert-Item.h"
    #include "RANFunctionDefinition-Control.h"
    #include "RANFunctionDefinition-Control-Item.h"
    #include "RANFunctionDefinition-Control-Action-Item.h"
    #include "RIC-Format-Type.h"
    #include "E2SM-RC-IndicationMessage-Format5.h"
    #include "E2SM-RC-IndicationMessage-Format5-Item.h"
    #include "RANParameter-ValueType-Choice-ElementFalse.h"
    #include "RANParameter-ValueType-Choice-Structure.h"
    #include "RANParameter-STRUCTURE.h"
    #include "RANParameter-STRUCTURE-Item.h"
    #include "RANParameter-Value.h"
    #include "NR-CGI.h"
    #include "E2SM-RC-IndicationHeader-Format2.h"
    #include "UEID-GNB.h"
    #include "GUAMI.h"
}

// void encode_kpm(E2SM_KPM_IndicationMessage_t* indicationmessage);

// void encode_kpm_bak(E2SM_KPM_IndicationMessage_t* indicationmessage);

void encode_rc_function_definition(E2SM_RC_RANFunctionDefinition_t* ranfunc_def);

void encode_rc_indication_message(E2SM_RC_IndicationMessage_t *ind_msg, PLMNIdentity_t *plmn_id, BIT_STRING_t *gnb_id);

void encode_rc_indication_header(E2SM_RC_IndicationHeader_t *ind_header, PLMNIdentity_t *plmn_id);

// void encode_kpm_report_style5(E2SM_KPM_IndicationMessage_t* indicationmessage);

// void encode_kpm_odu_user_level(RAN_Container_t *ranco);

// void encode_kpm_ocucp_user_level(RAN_Container_t *ranco);

// void encode_e2sm_kpm_indication_header(E2SM_KPM_IndicationHeader_t *ihead, uint8_t *plmnid_buf, uint8_t *sst_buf, uint8_t *sd_buf, long fqival, long qcival, uint8_t *nrcellid_buf, uint8_t *gnbid_buf, int gnbid_unused, uint8_t *cuupid_buf, uint8_t *duid_buf, uint8_t *cuupname_buf);

// void encode_kpm_ocuup_user_level(RAN_Container_t *ranco);

// void encode_kpm_report_rancontainer_du(E2SM_KPM_IndicationMessage_t *indMsg);

// void encode_kpm_report_rancontainer_cucp(E2SM_KPM_IndicationMessage_t *indMsg);

// void encode_kpm_report_rancontainer_cuup(E2SM_KPM_IndicationMessage_t *indMsg);

// void encode_kpm_report_style1(E2SM_KPM_IndicationMessage_t* indicationmessage);

// void encode_kpm_report_rancontainer_du_parameterized(E2SM_KPM_IndicationMessage_t *indMsg, uint8_t *plmnid_buf, uint8_t *nrcellid_buf, uint8_t *crnti_buf, long prb_usage_dl, long prb_usage_ul);

// void encode_kpm_report_rancontainer_cucp_parameterized(E2SM_KPM_IndicationMessage_t* indicationmessage,uint8_t *plmnid_buf,uint8_t *nrcellid_buf,uint8_t *crnti_buf,const uint8_t *serving_buf, const uint8_t *neighbor_buf);

// void encode_kpm_report_rancontainer_cuup_parameterized(E2SM_KPM_IndicationMessage_t* indicationmessage, uint8_t *plmnid_buf, uint8_t *nrcellid_buf, uint8_t *crnti_buf,int pdcp_bytesdl, int pdcp_bytesul);

// void encode_kpm_report_style1_parameterized(E2SM_KPM_IndicationMessage_t* indicationmessage, long fiveqi, long dl_prb_usage, long ul_prb_usage, uint8_t* sst_buf, uint8_t* sd_buf, uint8_t* plmnid_buf, uint8_t* nrcellid_buf, long *dl_prbs, long *ul_prbs);

// void encode_kpm_report_style5_parameterized(E2SM_KPM_IndicationMessage_t* indicationmessage, uint8_t *gnbcuupname_buf, int bytes_dl,int bytes_ul, uint8_t *sst_buf, uint8_t *sd_buf, uint8_t *plmnid_buf);


#endif
