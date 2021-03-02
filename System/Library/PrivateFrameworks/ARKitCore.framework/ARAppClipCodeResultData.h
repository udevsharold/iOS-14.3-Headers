/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARResultData.h>

@class NSDictionary, NSString;

@interface ARAppClipCodeResultData : NSObject <ARResultData> {

	NSDictionary* _trackedAppClipCodes;

}

@property (nonatomic,copy) NSDictionary * trackedAppClipCodes;              //@synthesize trackedAppClipCodes=_trackedAppClipCodes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)anchorsForCameraWithTransform:(SCD_Struct_AR1)arg1 referenceOriginTransform:(SCD_Struct_AR1)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4 ;
-(void)setTrackedAppClipCodes:(NSDictionary *)arg1 ;
-(NSDictionary *)trackedAppClipCodes;
@end
