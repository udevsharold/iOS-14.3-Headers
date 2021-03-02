/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ARKitCore/ARKitCore-Structs.h>
@class ARPointCloud;

@interface ARKeyFrame : NSObject {

	ARPointCloud* _featurePoints;
	SCD_Struct_AR25 _cameraIntrinsics;
	SCD_Struct_AR1 _transform;

}

@property (nonatomic,readonly) SCD_Struct_AR1 transform;                    //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) ARPointCloud * featurePoints;                //@synthesize featurePoints=_featurePoints - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR25 cameraIntrinsics;              //@synthesize cameraIntrinsics=_cameraIntrinsics - In the implementation block
-(SCD_Struct_AR1)transform;
-(id)description;
-(SCD_Struct_AR25)cameraIntrinsics;
-(void)setCameraIntrinsics:(SCD_Struct_AR25)arg1 ;
-(ARPointCloud *)featurePoints;
-(id)initWithKeyframeData:(SCD_Struct_AR56*)arg1 featurePoints:(id)arg2 referenceOriginTransform:(SCD_Struct_AR1)arg3 ;
@end
