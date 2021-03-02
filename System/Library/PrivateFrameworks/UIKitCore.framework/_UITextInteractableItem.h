/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UITextItemInteractionHandler, _UITextItemInteracting, _UITextContent;
#import <UIKitCore/UIKitCore-Structs.h>
@class UINotificationFeedbackGenerator, _UIHighlightView, UIView;

@interface _UITextInteractableItem : NSObject {

	UINotificationFeedbackGenerator* _feedbackGenerator;
	_UIHighlightView* _highlightView;
	id<_UITextItemInteractionHandler> _handler;
	UIView*<_UITextItemInteracting> _textItemInteractingView;
	id<_UITextContent> _textContent;
	NSRange _range;
	CGPoint _location;

}

@property (assign,nonatomic) NSRange range;                                                               //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) CGPoint location;                                                            //@synthesize location=_location - In the implementation block
@property (assign,nonatomic,__weak) id<_UITextContent> textContent;                                       //@synthesize textContent=_textContent - In the implementation block
@property (nonatomic,retain) id<_UITextItemInteractionHandler> handler;                                   //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic,__weak) UIView*<_UITextItemInteracting> textItemInteractingView;              //@synthesize textItemInteractingView=_textItemInteractingView - In the implementation block
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) unsigned long long _preferredContextMenuLayout; 
+(id)interactableAttachment:(id)arg1 range:(NSRange)arg2 inTextItemInteractingView:(id)arg3 atLocation:(CGPoint)arg4 ;
+(id)interactableLink:(id)arg1 range:(NSRange)arg2 inTextItemInteractingView:(id)arg3 atLocation:(CGPoint)arg4 ;
+(void)_removeHighlight;
+(id)_sharedHighlightView;
-(NSRange)range;
-(BOOL)isLink;
-(id<_UITextItemInteractionHandler>)handler;
-(void)dealloc;
-(CGRect)bounds;
-(void)highlight;
-(void)setHandler:(id<_UITextItemInteractionHandler>)arg1 ;
-(CGPoint)location;
-(void)unhighlight;
-(id<_UITextContent>)textContent;
-(BOOL)isAttachment;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLocation:(CGPoint)arg1 ;
-(void)setTextItemInteractingView:(UIView*<_UITextItemInteracting>)arg1 ;
-(unsigned long long)_preferredContextMenuLayout;
-(id)contextMenuConfiguration;
-(BOOL)_allowHighlight;
-(void)setTextContent:(id<_UITextContent>)arg1 ;
-(UIView*<_UITextItemInteracting>)textItemInteractingView;
-(BOOL)_allowInteraction:(long long)arg1 ;
-(void)_warnForInvalidAction;
-(void)setRange:(NSRange)arg1 ;
-(BOOL)canInvokeDefaultAction;
-(void)invokeDefaultAction;
@end
