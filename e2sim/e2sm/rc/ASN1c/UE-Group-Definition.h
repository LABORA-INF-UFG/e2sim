/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "E2SM-RC-R003-v03.00.asn1"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_UE_Group_Definition_H_
#define	_UE_Group_Definition_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UEGroupDefinitionIdentifier_Item;

/* UE-Group-Definition */
typedef struct UE_Group_Definition {
	struct UE_Group_Definition__ueGroupDefinitionIdentifier_LIST {
		A_SEQUENCE_OF(struct UEGroupDefinitionIdentifier_Item) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ueGroupDefinitionIdentifier_LIST;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Group_Definition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Group_Definition;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_Group_Definition_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_Group_Definition_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Group_Definition_H_ */
#include "asn_internal.h"