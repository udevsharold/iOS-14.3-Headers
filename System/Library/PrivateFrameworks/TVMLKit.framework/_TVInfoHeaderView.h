/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class UIView, NSString;

@interface _TVInfoHeaderView : UIView <TVAppTemplateImpressionable> {

	UIView* _headerView;

}

@property (nonatomic,retain) UIView * headerView;                   //@synthesize headerView=_headerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)infoHeaderViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(UIView *)headerView;
-(void)layoutSubviews;
-(void)setHeaderView:(UIView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
@end
