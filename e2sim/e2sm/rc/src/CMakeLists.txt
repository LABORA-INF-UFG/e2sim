#==================================================================================
#	Copyright (c) 2020 AT&T Intellectual Property.
#
#   Licensed under the Apache License, Version 2.0 (the "License"),
#   you may not use this file except in compliance with the License.
#   You may obtain a copy of the License at
#
#       http://www.apache.org/licenses/LICENSE-2.0
#
#   Unless required by applicable law or agreed to in writing, software
#   distributed under the License is distributed on an "AS IS" BASIS,
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#   See the License for the specific language governing permissions and
#   limitations under the License.
#==================================================================================
#

add_library( rc_objects OBJECT encode_rc.cpp rc_callbacks.cpp )

target_link_libraries( rc_objects PRIVATE e2ap_asn1_objects
                                        e2sm_rc_asn1_objects
                                        logger_objects
                                        base_objects
                                        def_objects
                                        encoding_objects )

target_include_directories (rc_objects PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
    PRIVATE ../../../src/
    )

if( DEV_PKG )
    install( FILES
        encode_rc.hpp
        rc_callbacks.hpp
        DESTINATION ${install_inc}
    )
endif()
