/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NUTitleView, NUPageStyle;

@interface NUArticleContainerTitleView : UIView {

	NUTitleView* _titleView;
	NUPageStyle* _pageStyle;

}

@property (nonatomic,readonly) NUTitleView * titleView;              //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) NUPageStyle * pageStyle;                //@synthesize pageStyle=_pageStyle - In the implementation block
-(NUTitleView *)titleView;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(NUPageStyle *)pageStyle;
-(void)setPageStyle:(NUPageStyle *)arg1 ;
-(void)applyPageStyle:(id)arg1 ;
@end

