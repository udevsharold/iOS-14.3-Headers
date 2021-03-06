/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSNumber;

@interface SFAnalyticsActivityTracker : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _name;
	Class _clientClass;
	unsigned long long _start;
	BOOL _canceled;
	NSNumber* _measurement;

}

@property (retain) NSNumber * measurement;              //@synthesize measurement=_measurement - In the implementation block
-(void)dealloc;
-(id)initWithName:(id)arg1 clientClass:(Class)arg2 ;
-(NSNumber *)measurement;
-(void)stopWithEvent:(id)arg1 result:(id)arg2 ;
-(void)setMeasurement:(NSNumber *)arg1 ;
-(void)performAction:(/*^block*/id)arg1 ;
-(void)cancel;
-(void)start;
-(void)stop;
@end

