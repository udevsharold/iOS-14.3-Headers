/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _UIStatusBarAction, UIView;


@protocol _UIStatusBarActionable <NSObject>
@property (nonatomic,retain) _UIStatusBarAction * action; 
@property (nonatomic,retain) _UIStatusBarAction * hoverAction; 
@property (nonatomic,readonly) UIView * hoverView; 
@property (nonatomic,readonly) CGRect absoluteHoverFrame; 
@property (nonatomic,readonly) BOOL hoverHighlightsAsRegion; 
@property (assign,nonatomic) NSDirectionalEdgeInsets extendedHoverInsets; 
@property (assign,nonatomic) UIEdgeInsets actionInsets; 
@property (nonatomic,readonly) id<UILayoutItem> layoutItem; 
@required
-(NSDirectionalEdgeInsets)extendedHoverInsets;
-(BOOL)hoverHighlightsAsRegion;
-(void)setExtendedHoverInsets:(NSDirectionalEdgeInsets)arg1;
-(void)setActionInsets:(UIEdgeInsets)arg1;
-(UIView *)hoverView;
-(id<UILayoutItem>)layoutItem;
-(_UIStatusBarAction *)hoverAction;
-(void)setHoverAction:(id)arg1;
-(CGRect)absoluteHoverFrame;
-(UIEdgeInsets)actionInsets;
-(void)setAction:(id)arg1;
-(_UIStatusBarAction *)action;

@end
