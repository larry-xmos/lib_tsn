// Copyright (c) 2015, XMOS Ltd, All rights reserved
#ifndef _SIMPLE_DEMO_CONTROLLER_h_
#define _SIMPLE_DEMO_CONTROLLER_h_

void simple_demo_controller(REFERENCE_PARAM(int, change_stream), REFERENCE_PARAM(int, enable_remote), CLIENT_INTERFACE(ethernet_tx_if, i_eth));

#endif