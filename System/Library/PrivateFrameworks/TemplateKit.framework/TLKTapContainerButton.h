/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView;

@interface TLKTapContainerButton : UIButton {

	UIView* _containerView;

}

@property (assign,nonatomic,__weak) UIView * containerView;              //@synthesize containerView=_containerView - In the implementation block
-(void)setContainerView:(UIView *)arg1 ;
-(UIView *)containerView;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

