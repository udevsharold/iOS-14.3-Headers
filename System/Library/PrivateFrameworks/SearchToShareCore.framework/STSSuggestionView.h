/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol STSSuggestionViewDelegate;
@class STSSuggestionFooter, UITableView, UIView;

@interface STSSuggestionView : UIView {

	STSSuggestionFooter* _footerView;
	UITableView* _tableView;
	UIView* _overlayView;
	id<STSSuggestionViewDelegate> _delegate;
	CGPoint _footerOffset;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,readonly) UITableView * tableView;                                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                       //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                  //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) CGPoint footerOffset;                                       //@synthesize footerOffset=_footerOffset - In the implementation block
@property (assign,getter=isShowingFooter,nonatomic) BOOL showingFooter; 
@property (assign,nonatomic,__weak) id<STSSuggestionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_updateContentInsets;
-(id)init;
-(CGSize)footerSize;
-(UIView *)overlayView;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)layoutSubviews;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)setDelegate:(id<STSSuggestionViewDelegate>)arg1 ;
-(id<STSSuggestionViewDelegate>)delegate;
-(UITableView *)tableView;
-(void)_handleLogoTap:(id)arg1 ;
-(void)_updateFooterOrigin;
-(void)setOverlayView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setFooterOffset:(CGPoint)arg1 ;
-(BOOL)isShowingFooter;
-(void)setShowingFooter:(BOOL)arg1 ;
-(void)updateFooterImage:(id)arg1 ;
-(CGPoint)footerOffset;
@end

