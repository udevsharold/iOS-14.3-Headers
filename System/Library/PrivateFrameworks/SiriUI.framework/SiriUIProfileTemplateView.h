/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUILabelStackTemplateView.h>
#import <SiriUI/SiriUITemplateView.h>

@class UIImageView, NSString;

@interface SiriUIProfileTemplateView : SiriUILabelStackTemplateView <SiriUITemplateView> {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;                                        //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIProfileTemplateModel> dataSource; 
@property (assign,nonatomic,__weak) id<SiriUITemplatedView> templatedSuperview; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataSource:(id)arg1 ;
-(void)reloadData;
-(long long)layoutStyle;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)imageView;
-(void)layoutImage;
@end

