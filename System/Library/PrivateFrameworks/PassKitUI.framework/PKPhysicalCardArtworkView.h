/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface PKPhysicalCardArtworkView : UIView {

	UIImageView* _artworkImageView;
	UILabel* _nameLabel;
	UIImage* _artworkImage;
	NSString* _nameOnCard;

}

@property (nonatomic,retain) UIImage * artworkImage;              //@synthesize artworkImage=_artworkImage - In the implementation block
@property (nonatomic,copy) NSString * nameOnCard;                 //@synthesize nameOnCard=_nameOnCard - In the implementation block
-(UIImage *)artworkImage;
-(void)setNameOnCard:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)nameOnCard;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
