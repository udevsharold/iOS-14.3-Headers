/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol _UIKeyboardAnimatorState <NSObject>
@property (nonatomic,retain,readonly) UIView * animatingView; 
@property (assign,nonatomic) BOOL inputViewsHidden; 
@property (nonatomic,readonly) CGRect startFrame; 
@property (nonatomic,readonly) CGRect endFrame; 
@required
-(void)setInputViewsHidden:(BOOL)arg1;
-(CGRect)endFrame;
-(CGRect)startFrame;
-(BOOL)inputViewsHidden;
-(UIView *)animatingView;

@end
