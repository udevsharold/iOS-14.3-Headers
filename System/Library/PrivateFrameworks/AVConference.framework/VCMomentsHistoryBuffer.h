/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray, NSMutableDictionary;

@interface VCMomentsHistoryBuffer : NSObject {

	id _delegate;
	int _bufferLength;
	NSMutableArray* _timestampQueue;
	NSMutableDictionary* _sampleMap;
	unsigned _lastTimestamp;

}
-(void)dealloc;
-(void)flushBuffer;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 bufferLength:(int)arg2 dispatchQueue:(id)arg3 ;
-(int)getCount;
-(opaqueCMSampleBufferRef)getClosestSampleForTimestamp:(unsigned)arg1 ;
-(void)updateBufferWithSample:(opaqueCMSampleBufferRef)arg1 timestamp:(unsigned)arg2 ;
-(void)dequeueOneFrame;
-(unsigned)getUpdatedTimestampWithTimestamp:(unsigned)arg1 ;
-(void)enqueueWithSample:(opaqueCMSampleBufferRef)arg1 timestamp:(unsigned)arg2 ;
@end

