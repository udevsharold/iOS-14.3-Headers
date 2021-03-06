/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

@interface SBApplication32BitDeprecationAlertItem : SBAlertItem {

	SBApplication* _associatedDisplay;

}

@property (assign,nonatomic,__weak) SBApplication * associatedDisplay;              //@synthesize associatedDisplay=_associatedDisplay - In the implementation block
-(id)initWithApplication:(id)arg1 ;
-(id)_message;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(SBApplication *)associatedDisplay;
-(void)setAssociatedDisplay:(SBApplication *)arg1 ;
-(BOOL)shouldShowInLockScreen;
-(BOOL)dismissOnLock;
-(id)_title;
-(BOOL)forcesModalAlertAppearance;
@end

