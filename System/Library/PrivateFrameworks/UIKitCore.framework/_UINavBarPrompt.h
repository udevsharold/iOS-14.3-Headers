/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UINavigationBar, NSString;

@interface _UINavBarPrompt : UIView {

	UILabel* _label;
	UINavigationBar* _navBar;

}

@property (nonatomic,copy) NSString * prompt; 
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(CGSize)_updateLabelTextColorAndFontReturningShadowOffset;
-(CGRect)_labelFrame;
-(void)layoutSubviews;
-(CGRect)promptBounds;
-(id)initWithNavBar:(id)arg1 ;
@end

