/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class VUISeasonPickerButton, IKViewElement;

@interface VUIEpisodeShelfHeaderView : UICollectionReusableView {

	VUISeasonPickerButton* _button;
	IKViewElement* _viewElement;

}

@property (nonatomic,retain) IKViewElement * viewElement;                   //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,readonly) VUISeasonPickerButton * button;              //@synthesize button=_button - In the implementation block
+(id)configureWithElement:(id)arg1 existingView:(id)arg2 ;
-(VUISeasonPickerButton *)button;
-(void)layoutSubviews;
-(void)setButton:(VUISeasonPickerButton *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(void)switchToIndex:(unsigned long long)arg1 ;
@end

