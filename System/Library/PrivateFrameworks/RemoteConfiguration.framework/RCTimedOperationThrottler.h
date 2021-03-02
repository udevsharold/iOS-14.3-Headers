/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RCOperationThrottlerDelegate.h>
#import <libobjc.A.dylib/RCOperationThrottler.h>

@protocol RCOperationThrottlerDelegate;
@class RCOperationThrottler, NSString;

@interface RCTimedOperationThrottler : NSObject <RCOperationThrottlerDelegate, RCOperationThrottler> {

	double _cooldownTime;
	RCOperationThrottler* _operationThrottler;
	id<RCOperationThrottlerDelegate> _delegate;

}

@property (nonatomic,retain) RCOperationThrottler * operationThrottler;                     //@synthesize operationThrottler=_operationThrottler - In the implementation block
@property (assign,nonatomic,__weak) id<RCOperationThrottlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) double cooldownTime;                                                     //@synthesize cooldownTime=_cooldownTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL suspended; 
-(void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(/*^block*/id)arg2 ;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(id)init;
-(void)setOperationThrottler:(RCOperationThrottler *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setCooldownTime:(double)arg1 ;
-(RCOperationThrottler *)operationThrottler;
-(void)setDelegate:(id<RCOperationThrottlerDelegate>)arg1 ;
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(void)tickle;
-(id<RCOperationThrottlerDelegate>)delegate;
-(double)cooldownTime;
@end
