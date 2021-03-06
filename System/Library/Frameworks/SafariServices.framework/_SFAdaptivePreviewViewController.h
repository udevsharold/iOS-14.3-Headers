/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_SFLinkPreviewHeaderDelegate.h>

@protocol _SFAdaptivePreviewViewControllerDelegate;
@class _SFURLTextPreviewViewController, UIViewController, NSArray, _WKActivatedElementInfo, NSURL, NSString;

@interface _SFAdaptivePreviewViewController : UIViewController <_SFLinkPreviewHeaderDelegate> {

	_SFURLTextPreviewViewController* _textPreviewViewController;
	UIViewController* _linkPreviewViewController;
	id<_SFAdaptivePreviewViewControllerDelegate> _delegate;
	NSArray* _linkActions;
	_WKActivatedElementInfo* _activatedElementInfo;
	NSURL* _URL;
	CGSize _preferredDocumentContentSize;

}

@property (assign,nonatomic,__weak) id<_SFAdaptivePreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * linkActions;                                                     //@synthesize linkActions=_linkActions - In the implementation block
@property (nonatomic,retain) _WKActivatedElementInfo * activatedElementInfo;                            //@synthesize activatedElementInfo=_activatedElementInfo - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) UIViewController * contentViewController; 
@property (nonatomic,readonly) BOOL showingLinkPreview; 
@property (assign,nonatomic) CGSize preferredDocumentContentSize;                                       //@synthesize preferredDocumentContentSize=_preferredDocumentContentSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_removeViewController:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSArray *)linkActions;
-(id)initWithURL:(id)arg1 ;
-(UIViewController *)contentViewController;
-(BOOL)_allowsUserInteractionWhenPreviewedInContextMenu;
-(BOOL)showingLinkPreview;
-(void)setLinkPreviewEnabled:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDelegate:(id<_SFAdaptivePreviewViewControllerDelegate>)arg1 ;
-(void)_setUpLinkPreviewViewControllerIfNeeded;
-(void)_setUpTextPreviewViewControllerIfNeeded;
-(void)_addViewFromViewController:(id)arg1 ;
-(void)linkPreviewHeader:(id)arg1 didEnableLinkPreview:(BOOL)arg2 ;
-(void)linkPreviewHeaderBoundsDidChange:(id)arg1 ;
-(void)setPreferredDocumentContentSize:(CGSize)arg1 ;
-(void)setLinkActions:(NSArray *)arg1 ;
-(_WKActivatedElementInfo *)activatedElementInfo;
-(void)setActivatedElementInfo:(_WKActivatedElementInfo *)arg1 ;
-(CGSize)preferredDocumentContentSize;
-(NSURL *)URL;
-(id<_SFAdaptivePreviewViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)_updatePreferredContentSize;
@end

