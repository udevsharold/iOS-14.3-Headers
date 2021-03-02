/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSearchGestureObserver <NSObject>
@optional
-(void)searchGesture:(id)arg1 endedGesture:(BOOL)arg2;
-(void)searchGesture:(id)arg1 completedShowing:(BOOL)arg2;
-(void)searchGesture:(id)arg1 resetAnimated:(BOOL)arg2;
-(void)searchGesture:(id)arg1 startedShowing:(BOOL)arg2;

@required
-(void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;

@end
