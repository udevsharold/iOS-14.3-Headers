/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIToolbarButton.h>

@class NSString, NSSet;

@interface UIToolbarTextButton : UIToolbarButton {

	NSString* _title;
	NSString* _pressedTitle;
	NSSet* _possibleTitles;

}
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)initWithTitle:(id)arg1 pressedTitle:(id)arg2 withFont:(id)arg3 withBarStyle:(long long)arg4 withStyle:(long long)arg5 withTitleWidth:(double)arg6 possibleTitles:(id)arg7 withToolbarTintColor:(id)arg8 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_setPressed:(BOOL)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

