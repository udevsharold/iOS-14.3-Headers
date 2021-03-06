/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKScribbleInteractionWrapperProvider.h>
#import <UIKit/UIInteraction.h>

@protocol UIIndirectScribbleInteractionDelegate;
@class UIView, NSString;

@interface UIIndirectScribbleInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction> {

	BOOL _handlingWriting;
	BOOL __defaultSystemInteraction;
	id<UIIndirectScribbleInteractionDelegate> _delegate;
	UIView* _view;

}

@property (assign,nonatomic,__weak) UIView * view;                                                             //@synthesize view=_view - In the implementation block
@property (getter=_isDefaultSystemInteraction,nonatomic,readonly) BOOL _defaultSystemInteraction;              //@synthesize _defaultSystemInteraction=__defaultSystemInteraction - In the implementation block
@property (nonatomic,__weak,readonly) id<UIIndirectScribbleInteractionDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (getter=isHandlingWriting,nonatomic,readonly) BOOL handlingWriting;                                  //@synthesize handlingWriting=_handlingWriting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(void)_setHandlingWriting:(BOOL)arg1 ;
-(UIView *)view;
-(BOOL)isHandlingWriting;
-(void)_setDefaultSystemInteraction:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(BOOL)_isDefaultSystemInteraction;
-(id)scribbleInteractionWrapper;
-(id<UIIndirectScribbleInteractionDelegate>)delegate;
@end

