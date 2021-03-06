/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIAppDocumentServiceViewController.h>

@class VUIInAppMessagingMessageTargetHandler, _TVStackTemplateController, UIVisualEffectView;

@interface VUICanvasAppDocumentServiceViewController : VUIAppDocumentServiceViewController {

	VUIInAppMessagingMessageTargetHandler* _iamMessageTarget;
	BOOL _iamBannerEnabled;
	BOOL _navBarHidden;
	_TVStackTemplateController* _stackTemplate;
	UIVisualEffectView* _statusBarGradientView;

}

@property (assign,nonatomic,__weak) _TVStackTemplateController * stackTemplate;              //@synthesize stackTemplate=_stackTemplate - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * statusBarGradientView;                     //@synthesize statusBarGradientView=_statusBarGradientView - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setStatusBarGradientView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)statusBarGradientView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewDidLoad;
-(void)documentDidUpdate:(id)arg1 ;
-(id)initWithDocumentServiceRequest:(id)arg1 loadImmediately:(BOOL)arg2 documentRef:(id)arg3 viewControllerIdentifier:(id)arg4 viewControllerDocumentIdentifier:(id)arg5 ;
-(void)_updateNavigationBarWithDocument:(id)arg1 ;
-(void)didCompleteDocumentCreationWithStatus:(long long)arg1 errorDictionary:(id)arg2 ;
-(void)didHostTemplateViewController:(id)arg1 usedTransitions:(BOOL)arg2 ;
-(_TVStackTemplateController *)stackTemplate;
-(void)setStackTemplate:(_TVStackTemplateController *)arg1 ;
@end

