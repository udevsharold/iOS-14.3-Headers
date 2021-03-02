/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBMesaUnlockTriggerDelegate;
@interface SBMesaUnlockTrigger : NSObject {

	id<SBMesaUnlockTriggerDelegate> _delegate;
	BOOL _authenticated;

}

@property (assign,nonatomic,__weak) id<SBMesaUnlockTriggerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL authenticated;                                           //@synthesize authenticated=_authenticated - In the implementation block
-(void)screenOff;
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)authenticated;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)lockButtonDown;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)description;
-(id)succinctDescriptionBuilder;
-(void)significantUserInteractionOccurred;
-(BOOL)bioUnlock;
-(void)setDelegate:(id<SBMesaUnlockTriggerDelegate>)arg1 ;
-(void)menuButtonUp;
-(void)menuButtonDown;
-(id<SBMesaUnlockTriggerDelegate>)delegate;
-(void)fingerOn;
-(void)fingerOff;
@end
