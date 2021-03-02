/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UILabel, NSTimer;

@interface AVTGroupDialCell : UICollectionViewCell {

	NSString* _string;
	UILabel* _label;
	NSTimer* _shimmerTimer;

}

@property (nonatomic,readonly) UILabel * label;                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSTimer * shimmerTimer;              //@synthesize shimmerTimer=_shimmerTimer - In the implementation block
@property (nonatomic,copy) NSString * string;                     //@synthesize string=_string - In the implementation block
+(id)labelFont;
+(id)boldLabelFont;
+(id)cellIdentifier;
-(void)setString:(NSString *)arg1 ;
-(NSString *)string;
-(void)cancelShimmerTimer;
-(void)setShimmerTimer:(NSTimer *)arg1 ;
-(NSTimer *)shimmerTimer;
-(void)shimmerOnceWithCompletion:(/*^block*/id)arg1 ;
-(void)prepareForReuse;
-(void)startShimmering;
-(void)stopShimmeringAnimated:(BOOL)arg1 ;
-(void)setActiveItem:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)label;
@end
