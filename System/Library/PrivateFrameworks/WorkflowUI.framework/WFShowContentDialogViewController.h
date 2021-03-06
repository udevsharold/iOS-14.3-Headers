/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFCompactDialogViewController.h>
#import <libobjc.A.dylib/WFCompactContentPreviewViewControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>

@class WFCompactHighlightedView, WFCompactContentPreviewViewController, WFContentCollection, NSString;

@interface WFShowContentDialogViewController : WFCompactDialogViewController <WFCompactContentPreviewViewControllerDelegate, QLPreviewControllerDelegate> {

	WFCompactHighlightedView* _highlightView;
	WFCompactContentPreviewViewController* _previewViewController;
	WFContentCollection* _dataSource;
	/*^block*/id _installThumbnailHandler;

}

@property (assign,nonatomic,__weak) WFCompactHighlightedView * highlightView;                            //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) WFCompactContentPreviewViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (nonatomic,retain) WFContentCollection * dataSource;                                           //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) id installThumbnailHandler;                                                   //@synthesize installThumbnailHandler=_installThumbnailHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHighlightView:(WFCompactHighlightedView *)arg1 ;
-(WFCompactHighlightedView *)highlightView;
-(void)setDataSource:(WFContentCollection *)arg1 ;
-(void)prepareForPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(WFContentCollection *)dataSource;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)loadView;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 ;
-(void)setPreviewViewController:(WFCompactContentPreviewViewController *)arg1 ;
-(WFCompactContentPreviewViewController *)previewViewController;
-(void)handleTapGesture:(id)arg1 ;
-(id)sourceViewForQuickLook;
-(double)contentHeightForWidth:(double)arg1 withMaximumVisibleHeight:(double)arg2 ;
-(double)targetHeightForAnimatingPreviewViewController:(id)arg1 toProposedHeight:(double)arg2 ;
-(void)previewViewControllerDidInvalidateSize:(id)arg1 ;
-(double)contentHeightWithPreferredHeight:(double)arg1 maxVisibleHeight:(double)arg2 ;
-(void)updateActions;
-(void)presentFullScreenPreview;
-(id)installThumbnailHandler;
-(void)setInstallThumbnailHandler:(id)arg1 ;
@end

