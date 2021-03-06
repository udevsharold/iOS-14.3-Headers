/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIDragInteraction;


@protocol UITextDraggable <UITextInput>
@property (assign,nonatomic,__weak) id<UITextDragDelegate> textDragDelegate; 
@property (nonatomic,readonly) UIDragInteraction * textDragInteraction; 
@property (getter=isTextDragActive,nonatomic,readonly) BOOL textDragActive; 
@property (assign,nonatomic) long long textDragOptions; 
@required
-(long long)textDragOptions;
-(id<UITextDragDelegate>)textDragDelegate;
-(void)setTextDragDelegate:(id)arg1;
-(UIDragInteraction *)textDragInteraction;
-(BOOL)isTextDragActive;
-(void)setTextDragOptions:(long long)arg1;

@end

