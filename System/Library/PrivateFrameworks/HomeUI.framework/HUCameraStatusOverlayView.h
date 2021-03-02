/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIColor, HULegibilityLabel, UIImageView;

@interface HUCameraStatusOverlayView : UIView {

	BOOL _isDisplayingForSingleCamera;
	BOOL _didUpdateConstraints;
	NSString* _statusString;
	UIColor* _statusColor;
	NSString* _statusImageName;
	HULegibilityLabel* _statusLabel;
	UIImageView* _statusIndicatorImageView;
	UIImageView* _alertBadge;

}

@property (nonatomic,retain) HULegibilityLabel * statusLabel;                     //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) UIImageView * statusIndicatorImageView;              //@synthesize statusIndicatorImageView=_statusIndicatorImageView - In the implementation block
@property (assign,nonatomic) BOOL didUpdateConstraints;                           //@synthesize didUpdateConstraints=_didUpdateConstraints - In the implementation block
@property (nonatomic,retain) UIImageView * alertBadge;                            //@synthesize alertBadge=_alertBadge - In the implementation block
@property (nonatomic,copy) NSString * statusString;                               //@synthesize statusString=_statusString - In the implementation block
@property (nonatomic,retain) UIColor * statusColor;                               //@synthesize statusColor=_statusColor - In the implementation block
@property (nonatomic,retain) NSString * statusImageName;                          //@synthesize statusImageName=_statusImageName - In the implementation block
@property (assign,nonatomic) BOOL isDisplayingForSingleCamera;                    //@synthesize isDisplayingForSingleCamera=_isDisplayingForSingleCamera - In the implementation block
-(id)_chevronImage;
-(UIImageView *)statusIndicatorImageView;
-(void)setStatusIndicatorImageView:(UIImageView *)arg1 ;
-(void)setStatusColor:(UIColor *)arg1 ;
-(UIColor *)statusColor;
-(void)setStatusString:(NSString *)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(HULegibilityLabel *)statusLabel;
-(void)setStatusLabel:(HULegibilityLabel *)arg1 ;
-(NSString *)statusString;
-(void)setStatusImageName:(NSString *)arg1 ;
-(void)setIsDisplayingForSingleCamera:(BOOL)arg1 ;
-(void)updateStatusForPlaybackEngine:(id)arg1 ;
-(UIImageView *)alertBadge;
-(void)updateStatusLabelBounds;
-(void)setBadgeStatus:(unsigned long long)arg1 ;
-(BOOL)isDisplayingForSingleCamera;
-(id)_exclamationImage;
-(NSString *)statusImageName;
-(BOOL)didUpdateConstraints;
-(void)setDidUpdateConstraints:(BOOL)arg1 ;
-(void)setAlertBadge:(UIImageView *)arg1 ;
@end
