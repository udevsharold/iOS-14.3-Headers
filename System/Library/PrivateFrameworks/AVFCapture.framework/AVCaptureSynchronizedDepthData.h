/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedDepthDataInternal, AVDepthData;

@interface AVCaptureSynchronizedDepthData : AVCaptureSynchronizedData {

	AVCaptureSynchronizedDepthDataInternal* _internal;

}

@property (readonly) AVDepthData * depthData; 
@property (readonly) BOOL depthDataWasDropped; 
@property (readonly) long long droppedReason; 
+(void)initialize;
-(void)dealloc;
-(AVDepthData *)depthData;
-(id)description;
-(long long)droppedReason;
-(BOOL)depthDataWasDropped;
-(id)debugDescription;
-(id)_initWithDepthData:(id)arg1 timestamp:(SCD_Struct_AV0)arg2 depthDataWasDropped:(BOOL)arg3 droppedReason:(long long)arg4 ;
@end
