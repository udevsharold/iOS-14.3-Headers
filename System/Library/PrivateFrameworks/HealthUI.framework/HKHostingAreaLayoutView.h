/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface HKHostingAreaLayoutView : UIView {

	UIView* _hostedView;

}

@property (nonatomic,retain) UIView * hostedView;              //@synthesize hostedView=_hostedView - In the implementation block
+(id)viewHostingView:(id)arg1 ;
+(id)colorBackgroundViewHostingView:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHostedView:(UIView *)arg1 ;
-(BOOL)translatesAutoresizingMaskIntoConstraints;
-(UIView *)hostedView;
@end
