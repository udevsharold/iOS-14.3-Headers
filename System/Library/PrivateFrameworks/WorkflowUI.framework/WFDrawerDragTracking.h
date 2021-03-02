/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFDrawerDragTracking <NSObject>
@property (readonly) double minTranslationY; 
@property (readonly) double maxTranslationY; 
@required
-(void)beginDragging;
-(void)endDraggingWithAnimation:(id)arg1;
-(void)endDragging;
-(void)updateDragForVerticalTranslation:(double)arg1;
-(double)minTranslationY;
-(double)maxTranslationY;

@end
