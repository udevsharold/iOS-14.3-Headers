/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIVideoReframer.h>

@class NSMutableArray;

@interface PIVideoReframerV1 : PIVideoReframer {

	const Session* v1Session;
	NSMutableArray* debugSceneSegments;
	NSMutableArray* debugReframeSegments;
	NSMutableArray* debugKeyframes;

}
-(long long)revision;
-(id)initWithEncodedPixelSize:(SCD_Struct_PI5)arg1 orientation:(long long)arg2 clapRect:(SCD_Struct_PI6)arg3 viewRect:(SCD_Struct_PI6)arg4 config:(const /*function pointer*/void**)arg5 ;
-(id)debugSceneSegments;
-(id)debugReframeSegments;
-(id)debugKeyframes;
-(id)debugSubjectsAtTime:(SCD_Struct_PI7)arg1 ;
-(CGVector)debugCameraMotionAtTime:(SCD_Struct_PI7)arg1 ;
@end
