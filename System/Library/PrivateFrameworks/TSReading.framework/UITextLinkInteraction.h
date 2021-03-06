/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextLinkInteraction
@optional
-(BOOL)interactionDidStartWithLinkAtPoint:(CGPoint)arg1;
-(void)_requestTextItemConstrainedToLineAtPoint:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2;

@required
-(BOOL)isInteractingWithLink;
-(void)tapLinkAtPoint:(CGPoint)arg1;
-(BOOL)mightHaveLinks;
-(void)startInteractionWithLinkAtPoint:(CGPoint)arg1;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)arg1;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)arg1;
-(void)cancelInteractionWithLink;
-(void)startLongInteractionWithLinkAtPoint:(CGPoint)arg1;
-(BOOL)willInteractWithLinkAtPoint:(CGPoint)arg1;

@end

