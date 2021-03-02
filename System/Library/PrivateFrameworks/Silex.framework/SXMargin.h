/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXEdgeSpacing.h>

@class NSString;

@interface SXMargin : SXJSONObject <SXEdgeSpacing>

@property (nonatomic,readonly) SXConvertibleValue left; 
@property (nonatomic,readonly) SXConvertibleValue right; 
@property (nonatomic,readonly) SXConvertibleValue top; 
@property (nonatomic,readonly) SXConvertibleValue bottom; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXConvertibleValue)bottom;
-(SXConvertibleValue)top;
-(SXConvertibleValue)right;
-(SXConvertibleValue)left;
@end
