/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class ACUILinkButton;

@interface ACUILinkButtonFooterView : UIView <PSHeaderFooterView> {

	ACUILinkButton* _linkButton;
	long long _desiredTextAlignment;

}

@property (assign,nonatomic) long long alignment;              //@synthesize desiredTextAlignment=_desiredTextAlignment - In the implementation block
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)layoutSubviews;
-(id)initWithSpecifier:(id)arg1 ;
-(id)initWithButton:(id)arg1 ;
@end
