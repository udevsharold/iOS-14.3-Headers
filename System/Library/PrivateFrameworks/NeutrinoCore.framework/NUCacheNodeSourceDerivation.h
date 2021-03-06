/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUSourceDerivation.h>

@interface NUCacheNodeSourceDerivation : NSObject <NUSourceDerivation> {

	long long _subsampleFactor;

}
-(id)init;
-(SCD_Struct_NU7)scaleFromOriginalSize:(SCD_Struct_NU7)arg1 derivativeSize:(SCD_Struct_NU7)arg2 ;
-(long long)orientationFromOriginal:(long long)arg1 derivativeOrientation:(long long)arg2 ;
-(id)initWithSubsampleFactor:(long long)arg1 ;
@end

