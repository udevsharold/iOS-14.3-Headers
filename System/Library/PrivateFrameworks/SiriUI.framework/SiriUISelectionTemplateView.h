/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUISettingTemplateView.h>

@class UIImageView, UIButton;

@interface SiriUISelectionTemplateView : SiriUISettingTemplateView {

	UIImageView* _checkmarkImageView;
	UIButton* _selectionButton;

}

@property (assign,nonatomic,__weak) id<SiriUISelectionTemplateModel> dataSource; 
-(id)initWithDataSource:(id)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(void)addTargetForSelectionEvent:(id)arg1 action:(SEL)arg2 ;
-(void)removeTargetForSelectionEvent:(id)arg1 action:(SEL)arg2 ;
@end

