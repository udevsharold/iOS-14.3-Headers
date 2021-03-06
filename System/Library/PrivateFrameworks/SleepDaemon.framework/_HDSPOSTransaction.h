/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/HDSPAssertion.h>

@protocol OS_os_transaction, OS_dispatch_source;
@class NSString, NSObject;

@interface _HDSPOSTransaction : NSObject <BSDescriptionProviding, HDSPAssertion> {

	os_unfair_lock_s _transactionLock;
	NSString* _identifier;
	unsigned long long _signpost_id;
	NSObject*<OS_os_transaction> _transaction;
	NSObject*<OS_dispatch_source> _timer;

}

@property (nonatomic,readonly) unsigned long long signpost_id;                        //@synthesize signpost_id=_signpost_id - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s transactionLock;                      //@synthesize transactionLock=_transactionLock - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> timer;                   //@synthesize timer=_timer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
+(id)assertionWithIdentifier:(id)arg1 ;
+(id)assertionWithIdentifier:(id)arg1 timeout:(double)arg2 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 timeout:(double)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)dealloc;
-(id)succinctDescription;
-(void)releaseAssertion;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)description;
-(os_unfair_lock_s)transactionLock;
-(id)succinctDescriptionBuilder;
-(unsigned long long)signpost_id;
-(NSObject*<OS_os_transaction>)transaction;
-(void)_locked_release;
-(NSObject*<OS_dispatch_source>)timer;
@end

