/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class SKUIStarRatingControl;

@interface SKUIReviewInAppRatingControlViewController : UIViewController {

	SKUIStarRatingControl* _ratingControl;

}

@property (nonatomic,retain) SKUIStarRatingControl * ratingControl;              //@synthesize ratingControl=_ratingControl - In the implementation block
-(void)commonInit;
-(CGSize)preferredContentSize;
-(id)initWithCoder:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(SKUIStarRatingControl *)ratingControl;
-(id)_repeatedTemplateImageForImage:(id)arg1 ;
-(void)setRatingControl:(SKUIStarRatingControl *)arg1 ;
@end
