/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKScreenshotServiceInterface.h>

@protocol CRKScreenshotServiceInterface;
@class NSTimer;

@interface CRKDeadmanScreenshotServiceProxy : NSObject <CRKScreenshotServiceInterface> {

	id<CRKScreenshotServiceInterface> _underlyingProxy;
	double _timeout;
	unsigned long long _countOfInFlightRequests;
	NSTimer* _timer;

}

@property (nonatomic,readonly) double timeout;                                               //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) id<CRKScreenshotServiceInterface> underlyingProxy;              //@synthesize underlyingProxy=_underlyingProxy - In the implementation block
@property (assign,nonatomic) unsigned long long countOfInFlightRequests;                     //@synthesize countOfInFlightRequests=_countOfInFlightRequests - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                //@synthesize timer=_timer - In the implementation block
-(void)setTimer:(NSTimer *)arg1 ;
-(double)timeout;
-(void)dealloc;
-(id)initWithTimeout:(double)arg1 ;
-(void)stopTimer;
-(void)startTimer;
-(NSTimer *)timer;
-(void)fetchScreenshotDataWithMaximumSizeInPixels:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)countOfInFlightRequests;
-(void)setCountOfInFlightRequests:(unsigned long long)arg1 ;
-(id<CRKScreenshotServiceInterface>)underlyingProxy;
-(void)setUnderlyingProxy:(id<CRKScreenshotServiceInterface>)arg1 ;
@end
