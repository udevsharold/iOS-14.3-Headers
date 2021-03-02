/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <UIKit/UIKeyboardMediaHostProtocol.h>

@protocol UIKeyboardMediaServiceRemoteViewControllerDelegate;
@class NSString;

@interface UIKeyboardMediaServiceRemoteViewController : _UIRemoteViewController <UIKeyboardMediaHostProtocol> {

	id<UIKeyboardMediaServiceRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UIKeyboardMediaServiceRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(BOOL)__shouldHostRemoteTextEffectsWindow;
+(id)requestInlineViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
+(id)requestCardViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(void)presentCard;
-(void)dismissCard;
-(void)requestInsertionPointCompletion:(/*^block*/id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)draggedStickerToPoint:(CGPoint)arg1 ;
-(void)stageStickerWithFileHandle:(id)arg1 url:(id)arg2 accessibilityLabel:(id)arg3 ;
-(void)pasteImageAtFileHandle:(id)arg1 ;
-(void)setDelegate:(id<UIKeyboardMediaServiceRemoteViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id<UIKeyboardMediaServiceRemoteViewControllerDelegate>)delegate;
@end
