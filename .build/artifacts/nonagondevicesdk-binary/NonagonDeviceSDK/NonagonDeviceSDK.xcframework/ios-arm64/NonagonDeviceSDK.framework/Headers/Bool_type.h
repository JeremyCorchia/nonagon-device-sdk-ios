//
//  Bool_type.h
//  MHD-SDK
//
//  Created by Medix software on 02/09/2021.
//  Copyright © 2021 Medix Software. All rights reserved.


#ifndef __BOOL_TYPES_H__
#define __BOOL_TYPES_H__
typedef unsigned char boolean_TT;
/* Logical type definitions */
#if !defined(__cplusplus) && !defined(__true_false_are_keywords)
#  ifndef false
#   define false (0U)
#  endif
#  ifndef true
#   define true (1U)
#  endif
#endif

#endif

