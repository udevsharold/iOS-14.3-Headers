/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBFluidSwitcherItemContainerDelegate <NSObject>
@required
-(void)didSelectContainer:(id)arg1;
-(long long)switcherInterfaceOrientation;
-(void)killContainer:(id)arg1 forReason:(long long)arg2;
-(long long)homeScreenInterfaceOrientation;
-(void)scrollViewKillingProgressUpdated:(double)arg1 ofContainer:(id)arg2;
-(CGRect*)frameForPageViewOfContainer:(id)arg1 fullyPresented:(BOOL)arg2;
-(BOOL)canSelectContainer:(id)arg1 numberOfTaps:(long long)arg2;

@end
