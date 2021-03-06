/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UIActivityIndicatorView, UILabel, PSSpecifier;

@interface VUISpinnerHeaderView : UIView <PSHeaderFooterView> {

	UIActivityIndicatorView* _spinner;
	UILabel* _text;
	PSSpecifier* _specifier;

}
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)layoutSubviews;
-(void)hideSpinner;
-(void)hideText;
-(id)initWithSpecifier:(id)arg1 ;
-(void)showSpinner;
-(void)showText;
@end

