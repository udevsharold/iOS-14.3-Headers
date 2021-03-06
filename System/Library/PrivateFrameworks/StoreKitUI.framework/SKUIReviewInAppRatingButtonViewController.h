/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class NSString, UILabel;

@interface SKUIReviewInAppRatingButtonViewController : UIViewController {

	BOOL _enabled;
	NSString* _titleString;
	unsigned long long _style;
	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSString * titleString;                       //@synthesize titleString=_titleString - In the implementation block
@property (assign,nonatomic) unsigned long long style;                   //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(id)initWithTitle:(id)arg1 style:(unsigned long long)arg2 ;
-(BOOL)isEnabled;
-(unsigned long long)style;
-(UILabel *)titleLabel;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTitleString:(NSString *)arg1 ;
-(NSString *)titleString;
-(void)setEnabled:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

