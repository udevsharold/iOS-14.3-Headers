/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UIDragInteractionDelegate.h>
#import <UIKit/UIDragInteractionDelegate_Private.h>

@protocol _SFQuickLookDocumentViewDelegate;
@class UIView, _SFQuickLookDocumentInfoView, NSArray, UIStackView, NSLayoutConstraint, NSString;

@interface _SFQuickLookDocumentView : UIScrollView <UIDragInteractionDelegate, UIDragInteractionDelegate_Private> {

	UIView* _wrapperView;
	UIView* _contentView;
	_SFQuickLookDocumentInfoView* _documentInfoView;
	NSArray* _actionButtons;
	UIStackView* _actionButtonsView;
	NSLayoutConstraint* _documentInfoViewBottomAnchorConstraint;
	id<_SFQuickLookDocumentViewDelegate> _quickLookDocumentViewDelegate;

}

@property (assign,nonatomic,__weak) id<_SFQuickLookDocumentViewDelegate> quickLookDocumentViewDelegate;              //@synthesize quickLookDocumentViewDelegate=_quickLookDocumentViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(void)_actionButtonTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)setQuickLookDocumentViewDelegate:(id<_SFQuickLookDocumentViewDelegate>)arg1 ;
-(void)updateDocumentIcon:(id)arg1 ;
-(void)updateDocumentFileName:(id)arg1 ;
-(void)updateDocumentFileType:(id)arg1 ;
-(void)updateDocumentFileSize:(id)arg1 ;
-(void)updateActionTitles:(id)arg1 ;
-(CGRect)frameForButtonAtIndex:(unsigned long long)arg1 ;
-(void)_setUpLayoutConstraints;
-(void)_updatePropertiesDefinedByContentSizeCategory;
-(void)_configureOrientationBasedConstraints:(long long)arg1 ;
-(id<_SFQuickLookDocumentViewDelegate>)quickLookDocumentViewDelegate;
@end

