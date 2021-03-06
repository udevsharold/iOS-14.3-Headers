/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>
#import <libobjc.A.dylib/CKPluginEntryViewController.h>

@protocol CKTranscriptBalloonPluginController;
@class IMBalloonPluginDataSource, UIViewController, CKBalloonView, IMBalloonPlugin, UIContextMenuInteraction, NSString;

@interface CKDefaultPluginEntryViewController : UIViewController <UIContextMenuInteractionDelegate, CKPluginEntryViewController> {

	IMBalloonPluginDataSource* _datasource;
	UIViewController*<CKTranscriptBalloonPluginController> _pluginBubbleViewController;
	CKBalloonView* _balloonView;
	IMBalloonPlugin* _plugin;
	UIContextMenuInteraction* _contextMenuInteraction;

}

@property (nonatomic,retain) IMBalloonPluginDataSource * datasource;                                                         //@synthesize datasource=_datasource - In the implementation block
@property (nonatomic,retain) UIViewController*<CKTranscriptBalloonPluginController> pluginBubbleViewController;              //@synthesize pluginBubbleViewController=_pluginBubbleViewController - In the implementation block
@property (nonatomic,retain) CKBalloonView * balloonView;                                                                    //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,retain) IMBalloonPlugin * plugin;                                                                       //@synthesize plugin=_plugin - In the implementation block
@property (nonatomic,retain) UIContextMenuInteraction * contextMenuInteraction;                                              //@synthesize contextMenuInteraction=_contextMenuInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CKPluginEntryViewControllerDelegate> entryViewDelegate; 
@property (readonly) BOOL wantsClearButton; 
@property (readonly) BOOL wantsEdgeToEdgeLayout; 
@property (readonly) BOOL loadedContentView; 
-(IMBalloonPlugin *)plugin;
-(UIContextMenuInteraction *)contextMenuInteraction;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(IMBalloonPluginDataSource *)datasource;
-(void)setPlugin:(IMBalloonPlugin *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)performHostAppResume;
-(void)performHostAppSuspend;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)payloadWillSend;
-(CKBalloonView *)balloonView;
-(void)setDatasource:(IMBalloonPluginDataSource *)arg1 ;
-(void)_loadBalloonView;
-(UIViewController*<CKTranscriptBalloonPluginController>)pluginBubbleViewController;
-(void)setPluginBubbleViewController:(UIViewController*<CKTranscriptBalloonPluginController>)arg1 ;
-(id)_copyActionForImageBalloonView;
-(id)_saveActionForImageBalloonView;
-(id)_imageBalloon;
-(void)setBalloonView:(CKBalloonView *)arg1 ;
-(void)didFinishAnimatedBoundsChange;
-(id)_transcriptPluginBalloon;
-(id)initWithDataSource:(id)arg1 entryViewDelegate:(id)arg2 ;
-(void)payloadWillClear;
-(BOOL)wantsClearButton;
-(BOOL)wantsEdgeToEdgeLayout;
-(BOOL)loadedContentView;
-(id)initWithDataSource:(id)arg1 entryViewDelegate:(id)arg2 andPlugin:(id)arg3 ;
-(void)setContextMenuInteraction:(UIContextMenuInteraction *)arg1 ;
-(void)loadView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
@end

