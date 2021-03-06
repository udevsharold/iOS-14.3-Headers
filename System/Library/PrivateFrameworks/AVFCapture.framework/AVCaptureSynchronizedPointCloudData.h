/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureSynchronizedData.h>

@class AVPointCloudData;

@interface AVCaptureSynchronizedPointCloudData : AVCaptureSynchronizedData {

	AVPointCloudData* _pointCloudData;
	BOOL _pointCloudDataWasDropped;
	long long _droppedReason;

}

@property (readonly) AVPointCloudData * pointCloudData; 
@property (readonly) BOOL pointCloudDataWasDropped; 
@property (readonly) long long droppedReason; 
-(AVPointCloudData *)pointCloudData;
-(void)dealloc;
-(long long)droppedReason;
-(BOOL)pointCloudDataWasDropped;
-(id)_initWithPointCloudDataBuffer:(id)arg1 timestamp:(SCD_Struct_AV0)arg2 pointCloudDataWasDropped:(BOOL)arg3 droppedReason:(long long)arg4 ;
@end

