/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARResultData.h>
#import <ARKitCore/ARDaemonSecureCoding.h>

@class ARLocationData, NSString;

@interface ARGeoTrackingData : NSObject <ARResultData, ARDaemonSecureCoding> {

	ARLocationData* _enuOrigin;
	SCD_Struct_AR1 _vioFromENU;

}

@property (nonatomic,readonly) ARLocationData * enuOrigin;              //@synthesize enuOrigin=_enuOrigin - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR1 vioFromENU;               //@synthesize vioFromENU=_vioFromENU - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)anchorsForCameraWithTransform:(SCD_Struct_AR1)arg1 referenceOriginTransform:(SCD_Struct_AR1)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4 ;
-(id)initWithENUOrigin:(id)arg1 vioFromENU:(SCD_Struct_AR1)arg2 ;
-(ARLocationData *)enuOrigin;
-(SCD_Struct_AR1)vioFromENU;
@end
