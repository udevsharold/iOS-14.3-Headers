/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@interface BWStillImageTimeMachine : NSObject {

	OpaqueFigSimpleMutexRef _timeMachineMutex;
	opaqueCMSampleBuffer* _frames;
	BOOL _suspended;
	int _capacity;

}

@property (nonatomic,readonly) int capacity;              //@synthesize capacity=_capacity - In the implementation block
+(void)initialize;
+(BOOL)afComplete:(opaqueCMSampleBufferRef)arg1 ;
-(int)capacity;
-(int)insertFrame:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMSampleBufferRef)copyBestFrame;
-(void)dealloc;
-(void)_drain;
-(void)suspendAndDrain;
-(void)drain;
-(id)initWithCapacity:(int)arg1 ;
-(void)resume;
@end

