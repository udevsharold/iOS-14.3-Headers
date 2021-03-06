/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface NFTimer : NSObject {

	NSObject*<OS_dispatch_source> _src;
	unsigned long long _popTimeInSeconds;
	BOOL _monotonic;

}
-(id)initSleepTimerWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)startTimer:(double)arg1 ;
-(void)dealloc;
-(id)description;
-(void)stopTimer;
-(void)startTimer:(double)arg1 leeway:(double)arg2 ;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
@end

