/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIButton, UILabel, NSArray, NSString;

@interface SFBannerCell : UICollectionViewCell {

	UIButton* _dismissButton;
	UILabel* _messageLabel;
	NSArray* _minimalLayoutConstraints;
	NSArray* _prominentLayoutConstraints;
	UILabel* _titleLabel;
	/*^block*/id _dismissHandler;
	long long _bannerStyle;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * message; 
@property (nonatomic,copy) id dismissHandler;                    //@synthesize dismissHandler=_dismissHandler - In the implementation block
@property (assign,nonatomic) long long bannerStyle;              //@synthesize bannerStyle=_bannerStyle - In the implementation block
+(id)reuseIdentifier;
-(void)updateConstraints;
-(NSString *)message;
-(void)setModel:(id)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dismissHandler;
-(long long)bannerStyle;
-(void)_dismiss:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBannerStyle:(long long)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setDismissHandler:(id)arg1 ;
@end

