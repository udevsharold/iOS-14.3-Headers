/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface UIWebDragDotView : UIView {

	UIColor* m_selectionBarColor;
	long long m_orientation;
	CGRect m_stickFrame;
	CGRect m_dotFrame;

}
-(BOOL)isVertical;
-(id)initWithEdge:(CGRect)arg1 container:(id)arg2 orientation:(long long)arg3 ;
-(CGRect)stickFrameForEdge:(CGRect)arg1 withOverlap:(double)arg2 ;
-(void)dealloc;
-(void)setEdge:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isPointedDown;
-(BOOL)isPointedRight;
-(BOOL)isPointedLeft;
-(BOOL)isPointedUp;
@end
