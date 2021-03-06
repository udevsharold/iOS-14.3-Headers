/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CSStopRecordingOptions : NSObject {

	unsigned long long _stopRecordingReason;
	unsigned long long _expectedStopHostTime;

}

@property (assign,nonatomic) unsigned long long stopRecordingReason;               //@synthesize stopRecordingReason=_stopRecordingReason - In the implementation block
@property (assign,nonatomic) unsigned long long expectedStopHostTime;              //@synthesize expectedStopHostTime=_expectedStopHostTime - In the implementation block
-(id)description;
-(unsigned long long)stopRecordingReason;
-(void)setStopRecordingReason:(unsigned long long)arg1 ;
-(unsigned long long)expectedStopHostTime;
-(void)setExpectedStopHostTime:(unsigned long long)arg1 ;
@end

