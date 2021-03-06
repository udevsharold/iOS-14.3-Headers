/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARMLImageProcessingTechnique.h>

@class NSString;

@interface AR3DSkeletonLiftingTechnique : ARMLImageProcessingTechnique {

	NSString* _inputTensorName;

}
+(BOOL)_adjustBoneLength:(1*)arg1 count:(unsigned long long)arg2 ;
+(void)_transformRelativeToHip:(1*)arg1 count:(unsigned long long)arg2 ;
-(id)init;
-(double)requiredTimeInterval;
-(void)_startLoadingMLModelSignpost;
-(void)_endLoadingMLModelSignpost;
-(void)_startMLProcessingSignpostWithTimestamp:(double)arg1 ;
-(void)_endMLProcessingSignpostWithTimestamp:(double)arg1 ;
-(void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1 ;
-(void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1 ;
-(void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(CGSize)arg3 ;
-(void)_endMLCreateResultSignpostWithTimestamp:(double)arg1 ;
-(void)changeEspressoConfig:(id)arg1 ;
-(unsigned long long)requiredSensorDataTypes;
-(id)processEspressoTensor:(id)arg1 ;
@end

