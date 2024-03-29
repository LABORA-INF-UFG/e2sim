
/*****************************************************************************
#                                                                            *
# Copyright 2020 AT&T Intellectual Property                                  *
# Copyright (c) 2020 Samsung Electronics Co., Ltd. All Rights Reserved.      *
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

#ifndef ENCODE_E2AP_HPP
#define ENCODE_E2AP_HPP

#include <vector>
#include "logger.h"

extern "C" {
  #include "E2AP-PDU.h"
  #include "OCTET_STRING.h"
  #include "RANfunctionOID.h"
  #include "RICindicationType.h"
  #include "Cause.h"
  #include "CriticalityDiagnostics.h"
  #include "BIT_STRING.h"
  #include "PLMN-Identity.h"
}

namespace encoding {

  struct ran_func_info {
    long ranFunctionId;
    OCTET_STRING_t *ranFunctionDesc;
    long ranFunctionRev;
    RANfunctionOID_t *ranFunctionOId;
  };

  long get_function_id_from_subscription(E2AP_PDU_t *e2ap_pdu);

  long get_function_id_from_subscription_delete(E2AP_PDU_t *e2ap_pdu);

  long get_function_id_from_control(E2AP_PDU_t *e2ap_pdu);

  void generate_e2ap_setup_request_parameterized(E2AP_PDU_t *setup_req_pdu, const std::vector<ran_func_info>& all_funcs, PLMN_Identity_t *plmn_id, BIT_STRING_t *gnb_id);

  void generate_e2ap_setup_response(E2AP_PDU_t *setup_resp_pdu);

  void generate_e2ap_subscription_request(E2AP_PDU_t *sub_req_pdu);

  void generate_e2ap_subscription_response(E2AP_PDU_t *sub_resp_pdu, E2AP_PDU_t *sub_req_pdu);

  void generate_e2ap_subscription_response_success(E2AP_PDU *e2ap_pdu, long reqActionIdsAccepted[], long reqActionIdsRejected[], int accept_size, int reject_size, long reqRequestorId, long reqInstanceId);

  void generate_e2ap_subscription_response_failure(E2AP_PDU *e2ap_pdu, long reqRequestorId, long reqInstanceId, long func_id, Cause_t *cause, CriticalityDiagnostics_t *crit_diagnostics);

  void generate_e2ap_subscription_delete_response_success(E2AP_PDU *e2ap_pdu, long ranFunctionId, long reqRequestorId, long reqInstanceId);

  void generate_e2ap_indication_request_parameterized(E2AP_PDU *e2ap_pdu, e_RICindicationType indicationType, long requestorId, long instanceId, long ranFunctionId, long actionId, long seqNum, uint8_t *ind_header_buf, int header_length, uint8_t *ind_message_buf, int message_length);

  void generate_e2ap_indication_request_parameterized(E2AP_PDU *e2ap_pdu, e_RICindicationType indicationType, long requestorId, long instanceId, long ranFunctionId, long actionId, uint16_t seqNum, uint8_t *ind_header_buf, int header_length, uint8_t *ind_message_buf, int message_length, OCTET_STRING_t *call_proc_id);

  void generate_e2ap_service_update(E2AP_PDU_t *e2ap_pdu, std::vector<ran_func_info> all_funcs);

  void generate_e2ap_config_update(E2AP_PDU_t *e2ap_edu);

  void generate_e2ap_removal_request(E2AP_PDU_t *e2ap_pdu);

  PLMN_Identity_t *encodePlmnId(const char *mcc, const char *mnc);
}

#endif
