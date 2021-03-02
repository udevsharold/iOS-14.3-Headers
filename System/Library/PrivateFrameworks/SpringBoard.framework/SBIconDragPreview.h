/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SBIcon;


@protocol SBIconDragPreview
@property (assign,nonatomic) unsigned long long dragState; 
@property (assign,getter=isFlocked,nonatomic) BOOL flocked; 
@property (assign,nonatomic) BOOL iconAllowsLabelArea; 
@property (assign,nonatomic) BOOL iconCanShowCloseBox; 
@property (assign,nonatomic) double iconContentScale; 
@property (assign,nonatomic) BOOL iconIsEditing; 
@property (nonatomic,retain) SBIcon * icon; 
@required
-(double)iconContentScale;
-(void)setIconCanShowCloseBox:(BOOL)arg1;
-(void)setIconContentScale:(double)arg1;
-(SBIcon *)icon;
-(unsigned long long)dragState;
-(void)setFlocked:(BOOL)arg1;
-(void)setDragState:(unsigned long long)arg1;
-(void)setIcon:(id)arg1;
-(void)updateDestinationIconLocation:(id)arg1 allowsLabelArea:(BOOL)arg2 animated:(BOOL)arg3;
-(void)dropDestinationAnimationCompleted;
-(void)draggingSourceCancelAnimationCompleted;
-(void)draggingSourceDroppedWithOperation:(unsigned long long)arg1;
-(void)setIconAllowsLabelArea:(BOOL)arg1;
-(void)setIconIsEditing:(BOOL)arg1 animated:(BOOL)arg2;
-(BOOL)isFlocked;
-(BOOL)iconAllowsLabelArea;
-(BOOL)iconCanShowCloseBox;
-(BOOL)iconIsEditing;
-(void)setIconIsEditing:(BOOL)arg1;

@end
