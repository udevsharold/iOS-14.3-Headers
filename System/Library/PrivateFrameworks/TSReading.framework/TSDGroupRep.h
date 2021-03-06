/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDContainerRep.h>
#import <TSReading/TSDMagicMoveMatching.h>

@interface TSDGroupRep : TSDContainerRep <TSDMagicMoveMatching>
+(double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 ;
-(void)setNeedsDisplay;
-(void)drawInContext:(CGContextRef)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(CGRect)clipRect;
-(Class)layerClass;
-(CGColorRef)selectionHighlightColor;
-(BOOL)isDraggable;
-(BOOL)directlyManagesLayerContent;
-(CGPoint)convertNaturalPointFromUnscaledCanvas:(CGPoint)arg1 ;
-(CGRect)frameInUnscaledCanvas;
-(void)processChangedProperty:(int)arg1 ;
-(BOOL)wantsToHandleTapsWhenLocked;
-(BOOL)handleSingleTapAtPoint:(CGPoint)arg1 ;
-(BOOL)handleDoubleTapAtPoint:(CGPoint)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 withSlop:(CGSize)arg2 ;
-(void)recursivelyDrawInContext:(CGContextRef)arg1 ;
-(BOOL)shouldShowCommentHighlight;
-(BOOL)shouldShowSelectionHighlight;
-(BOOL)intersectsUnscaledRect:(CGRect)arg1 ;
-(id)allRepsContainedInGroup;
@end

