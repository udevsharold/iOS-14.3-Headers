/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <AvatarUI/AVTAttributeValueView.h>

@class UIView, NSArray;

@interface AVTColorWheelView : AVTAttributeValueView {

	UIView* _containerView;
	NSArray* _circleViews;

}

@property (nonatomic,retain) UIView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSArray * circleViews;               //@synthesize circleViews=_circleViews - In the implementation block
+(id)buildCircleViewWithDiameter:(double)arg1 ;
+(BOOL)colorItems:(id)arg1 containColorItem:(id)arg2 ;
+(id)colorItemsFrom:(id)arg1 excluding:(id)arg2 ;
-(void)setContainerView:(UIView *)arg1 ;
-(UIView *)containerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)buildAllCircleViews;
-(void)setCircleViews:(NSArray *)arg1 ;
-(NSArray *)circleViews;
-(CGPoint)rotatePoint:(CGPoint)arg1 aroundCenter:(CGPoint)arg2 withAngle:(double)arg3 ;
-(void)updateWithPrimaryItems:(id)arg1 extendedItems:(id)arg2 ;
@end

