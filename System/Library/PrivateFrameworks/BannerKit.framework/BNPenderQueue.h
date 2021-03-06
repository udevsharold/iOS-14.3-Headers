/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BNPresentableQueueDelegate.h>
#import <libobjc.A.dylib/BNPending.h>

@class NSMutableArray, NSMutableSet, BNSuspensionController, NSString, NSSet;

@interface BNPenderQueue : NSObject <BNPresentableQueueDelegate, BNPending> {

	NSMutableArray* _penderQueue;
	NSMutableSet* _suspendedPenders;
	BNSuspensionController* _suspensionController;
	NSString* _penderIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * penderIdentifier;                           //@synthesize penderIdentifier=_penderIdentifier - In the implementation block
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (nonatomic,copy,readonly) NSSet * activeSuspensionReasons; 
-(NSString *)penderIdentifier;
-(BOOL)setPenderSuspended:(BOOL)arg1 forRequesterWithIdentifier:(id)arg2 reason:(id)arg3 ;
-(void)presentableQueue:(id)arg1 didDequeuePresentableWithPendingIdentifier:(id)arg2 ;
-(BOOL)isSuspended;
-(id)peekPresentable;
-(id)pullPresentablesWithIdentification:(id)arg1 ;
-(void)enqueuePresentable:(id)arg1 withOptions:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(NSSet *)activeSuspensionReasons;
-(BOOL)setSuspended:(BOOL)arg1 forReason:(id)arg2 ;
-(void)setPenderIdentifier:(NSString *)arg1 ;
-(id)_penderForRequesterWithIdentifier:(id)arg1 creatingIfNecessary:(BOOL)arg2 ;
@end

