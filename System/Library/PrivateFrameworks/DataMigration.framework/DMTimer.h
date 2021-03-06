/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface DMTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _fireBlock;
	unsigned long long _secondsBeforeFirstFire;
	unsigned long long _secondsOfLeeway;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                    //@synthesize timer=_timer - In the implementation block
@property (nonatomic,copy) id fireBlock;                                             //@synthesize fireBlock=_fireBlock - In the implementation block
@property (assign,nonatomic) unsigned long long secondsBeforeFirstFire;              //@synthesize secondsBeforeFirstFire=_secondsBeforeFirstFire - In the implementation block
@property (assign,nonatomic) unsigned long long secondsOfLeeway;                     //@synthesize secondsOfLeeway=_secondsOfLeeway - In the implementation block
-(id)fireBlock;
-(void)setFireBlock:(id)arg1 ;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)cancel;
-(void)setSecondsBeforeFirstFire:(unsigned long long)arg1 ;
-(unsigned long long)secondsOfLeeway;
-(void)setSecondsOfLeeway:(unsigned long long)arg1 ;
-(unsigned long long)secondsBeforeFirstFire;
-(id)initWithSecondsBeforeFirstFire:(unsigned long long)arg1 secondsOfLeeway:(unsigned long long)arg2 fireBlock:(/*^block*/id)arg3 ;
-(void)cancelSynchronously;
-(NSObject*<OS_dispatch_source>)timer;
-(void)resume;
@end

