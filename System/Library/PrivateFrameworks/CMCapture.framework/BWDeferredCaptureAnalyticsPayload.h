/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSString;

@interface BWDeferredCaptureAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	int _error;
	int _processingType;
	BOOL _fileBacked;
	unsigned _commitDurationInMilliseconds;
	unsigned _flushDurationInMilliseconds;

}

@property (assign,nonatomic) int error;                                          //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) int processingType;                                 //@synthesize processingType=_processingType - In the implementation block
@property (assign,nonatomic) BOOL fileBacked;                                    //@synthesize fileBacked=_fileBacked - In the implementation block
@property (assign,nonatomic) unsigned commitDurationInMilliseconds;              //@synthesize commitDurationInMilliseconds=_commitDurationInMilliseconds - In the implementation block
@property (assign,nonatomic) unsigned flushDurationInMilliseconds;               //@synthesize flushDurationInMilliseconds=_flushDurationInMilliseconds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)eventName;
-(int)error;
-(id)init;
-(void)reset;
-(void)dealloc;
-(id)eventDictionary;
-(void)setCommitDurationInMilliseconds:(unsigned)arg1 ;
-(void)setFlushDurationInMilliseconds:(unsigned)arg1 ;
-(void)setError:(int)arg1 ;
-(BOOL)fileBacked;
-(unsigned)commitDurationInMilliseconds;
-(unsigned)flushDurationInMilliseconds;
-(int)processingType;
-(void)setProcessingType:(int)arg1 ;
-(void)setFileBacked:(BOOL)arg1 ;
@end

