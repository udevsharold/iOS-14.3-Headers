/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class SFBannerCell, UIStackView, NSArray, UILabel, NSString;

@interface SFStartPageSectionHeader : UICollectionReusableView {

	SFBannerCell* _bannerView;
	UIStackView* _buttonStackView;
	NSArray* _constraintsWithBanner;
	NSArray* _constraintsWithoutBanner;
	UILabel* _titleLabel;
	BOOL _usesBanner;
	NSArray* _actions;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
+(id)reuseIdentifier;
-(void)_tap:(id)arg1 ;
-(void)updateConstraints;
-(NSArray *)actions;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(void)setModel:(id)arg1 resolvingActionsUsingBlock:(/*^block*/id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)_addButtonWithTitle:(id)arg1 actionIndex:(long long)arg2 ;
-(NSString *)title;
@end

