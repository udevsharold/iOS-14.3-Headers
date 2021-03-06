/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class EFProcessTransaction, BKSProcessAssertion, NSObject;

@interface MFTaskAssertion : NSObject {

	EFProcessTransaction* _transaction;
	BKSProcessAssertion* _assertion;
	NSObject*<OS_dispatch_source> _timer;

}
+(id)log;
-(id)initWithName:(id)arg1 expiration:(double)arg2 preventIdleSleep:(BOOL)arg3 ;
-(id)initWithName:(id)arg1 preventIdleSleep:(BOOL)arg2 ;
-(void)dealloc;
-(BOOL)isValid;
-(void)cancelTimer;
-(id)initWithName:(id)arg1 ;
-(void)invalidate;
@end

