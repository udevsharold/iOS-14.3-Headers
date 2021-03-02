/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARSkeleton.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ARCoreRESkeletonResult;

@interface ARSkeleton3D : ARSkeleton <NSSecureCoding> {

	ARCoreRESkeletonResult* _skeleton;

}

@property (nonatomic,readonly) ARCoreRESkeletonResult * coreRESkeleton; 
@property (nonatomic,readonly) const SCD_Struct_AR1* jointModelTransforms; 
@property (nonatomic,readonly) const SCD_Struct_AR1* jointLocalTransforms; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)definition;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)jointCount;
-(BOOL)isJointTracked:(long long)arg1 ;
-(const SCD_Struct_AR1*)jointModelTransforms;
-(ARCoreRESkeletonResult *)coreRESkeleton;
-(const SCD_Struct_AR1*)jointLocalTransforms;
-(id)initWithCoreRESkeletonResult:(id)arg1 ;
-(SCD_Struct_AR1)modelTransformForJointName:(id)arg1 ;
-(SCD_Struct_AR1)localTransformForJointName:(id)arg1 ;
@end
