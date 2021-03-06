/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBFUserAuthenticationModel <NSObject>
@property (assign,nonatomic) id<SBFUserAuthenticationModelDelegate> delegate; 
@property (getter=isTemporarilyBlocked,nonatomic,readonly) BOOL temporarilyBlocked; 
@property (getter=isPermanentlyBlocked,nonatomic,readonly) BOOL permanentlyBlocked; 
@property (nonatomic,readonly) double timeUntilUnblockedSinceReferenceDate; 
@optional
-(void)noteNewMkbDeviceLockState:(id)arg1;
-(void)refreshBlockedState;
-(void)clearBlockedState;

@required
-(BOOL)isPermanentlyBlocked;
-(void)synchronize;
-(void)notePasscodeEntryBegan;
-(void)notePasscodeEntryCancelled;
-(BOOL)isTemporarilyBlocked;
-(void)performPasswordTest:(/*^block*/id)arg1;
-(void)setDelegate:(id)arg1;
-(double)timeUntilUnblockedSinceReferenceDate;
-(void)notePasscodeUnlockFailedWithError:(id)arg1;
-(void)notePasscodeUnlockSucceeded;
-(id<SBFUserAuthenticationModelDelegate>)delegate;

@end

