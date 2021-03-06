/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, CAReplicatorLayer, UIColor;

@interface ASCStarRow : UIView {

	double _numberOfStarsInRow;
	UIImageView* _starImageView;
	double _maxNumberOfStars;
	CAReplicatorLayer* _starLayer;
	long long _starSize;
	UIColor* _starColor;

}

@property (assign,nonatomic) double numberOfStarsInRow;                    //@synthesize numberOfStarsInRow=_numberOfStarsInRow - In the implementation block
@property (nonatomic,readonly) UIImageView * starImageView;                //@synthesize starImageView=_starImageView - In the implementation block
@property (nonatomic,readonly) double maxNumberOfStars;                    //@synthesize maxNumberOfStars=_maxNumberOfStars - In the implementation block
@property (nonatomic,readonly) CAReplicatorLayer * starLayer;              //@synthesize starLayer=_starLayer - In the implementation block
@property (nonatomic,readonly) long long starSize;                         //@synthesize starSize=_starSize - In the implementation block
@property (nonatomic,readonly) UIColor * starColor;                        //@synthesize starColor=_starColor - In the implementation block
+(CGSize)sizeForStarRowWithSizeOfStar:(long long)arg1 andNumberOfStars:(double)arg2 ;
+(id)starForSize:(long long)arg1 withFill:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithStarSize:(long long)arg1 fill:(BOOL)arg2 starColor:(id)arg3 andMaxNumberOfStars:(double)arg4 ;
-(void)setNumberOfStarsInRow:(double)arg1 ;
-(double)maxNumberOfStars;
-(long long)starSize;
-(UIColor *)starColor;
-(CGRect)frameForCurrentRating:(double)arg1 andStarSize:(long long)arg2 ;
-(void)modifyStarLayerRectToHideOuterPaddingUsing:(id)arg1 ;
-(double)numberOfStarsInRow;
-(UIImageView *)starImageView;
-(CAReplicatorLayer *)starLayer;
@end

