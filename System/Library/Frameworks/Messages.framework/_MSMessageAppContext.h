/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <libobjc.A.dylib/_MSMessageComposeExtensionImplProtocol.h>

@protocol _MSMessageComposeExtensionImplProtocol;
@class MSConversation, UIViewController, NSMapTable, NSString;

@interface _MSMessageAppContext : NSObject <_MSMessageComposeExtensionImplProtocol> {

	id<_MSMessageComposeExtensionImplProtocol> _context;
	id<_MSMessageComposeExtensionImplProtocol> _keepAliveContext;
	NSMapTable* _conversationsByIdentifier;
	id<_MSMessageComposeExtensionImplProtocol> _containingContext;
	MSConversation* _activeConversation;

}

@property (nonatomic,readonly) MSConversation * activeConversation;                                     //@synthesize activeConversation=_activeConversation - In the implementation block
@property (nonatomic,retain) id<_MSMessageComposeHostImplProtocol> hostContext; 
@property (assign,nonatomic) unsigned long long presentationStyle; 
@property (assign,nonatomic) unsigned long long presentationContext; 
@property (nonatomic,__weak,readonly) UIViewController * viewController; 
@property (nonatomic,__weak,readonly) UIViewController * stickerViewController; 
@property (nonatomic,retain) id<_MSMessageComposeExtensionImplProtocol> containingContext;              //@synthesize containingContext=_containingContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activeExtensionContext;
-(void)_resignActive;
-(unsigned long long)presentationStyle;
-(void)setPresentationStyle:(unsigned long long)arg1 ;
-(void)requestPresentationStyleExpanded:(BOOL)arg1 ;
-(void)presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dismissAndPresentPhotosApp;
-(void)beginDisablingUserInteraction;
-(void)endDisablingUserInteraction;
-(void)dismiss;
-(void)stageAssetArchive:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPresentationContext:(unsigned long long)arg1 ;
-(id<_MSMessageComposeHostImplProtocol>)hostContext;
-(void)setHostContext:(id<_MSMessageComposeHostImplProtocol>)arg1 ;
-(unsigned long long)presentationContext;
-(UIViewController *)viewController;
-(id)initWithAppContext:(id)arg1 ;
-(void)requestPresentationStyle:(unsigned long long)arg1 ;
-(void)_remoteViewDidBecomeReadyForDisplay;
-(void)requestResize;
-(void)contentDidLoad;
-(MSConversation *)activeConversation;
-(void)presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_didRemoveAssetArchiveWithIdentifier:(id)arg1 ;
-(void)_prepareForPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_volumeButtonPressed:(BOOL)arg1 ;
-(void)setContainingContext:(id<_MSMessageComposeExtensionImplProtocol>)arg1 ;
-(UIViewController *)stickerViewController;
-(void)stageAppItem:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)stageMediaItem:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)stageRichLink:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeAssetArchiveWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startDragMediaItem:(id)arg1 frameInRemoteView:(CGRect)arg2 fence:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dragMediaItemMoved:(id)arg1 frameInRemoteView:(CGRect)arg2 rotation:(double)arg3 scale:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)dragMediaItemCanceled;
-(id)updatedConversationForConversationState:(id)arg1 ;
-(void)_keepContextAlive;
-(void)_releaseKeepAliveContext;
-(void)_becomeActiveWithConversationState:(id)arg1 presentationState:(id)arg2 ;
-(void)_canSendMessage:(id)arg1 conversationState:(id)arg2 associatedText:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_requestContentSizeThatFits:(id)arg1 presentationStyle:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_conversationDidChangeWithConversationState:(id)arg1 ;
-(void)_presentationWillChangeToPresentationState:(id)arg1 ;
-(void)_presentationDidChangeToPresentationState:(id)arg1 ;
-(void)_didReceiveMessage:(id)arg1 conversationState:(id)arg2 ;
-(void)_didStartSendingMessage:(id)arg1 conversationState:(id)arg2 ;
-(void)_didCancelSendingMessage:(id)arg1 conversationState:(id)arg2 ;
-(void)_requestSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)_hostDidBeginDeferredTeardown;
-(void)_handleTextInputPayload:(id)arg1 withPayloadID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<_MSMessageComposeExtensionImplProtocol>)containingContext;
@end

