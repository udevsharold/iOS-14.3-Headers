/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKSelectionRenderingDelegate
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> selectionHullQueue; 
@required
-(BOOL)isRTL;
-(CGColorRef)selectionColor;
-(CGAffineTransform*)transformFromStrokeSpaceToViewInDrawing:(id)arg1;
-(CGRect*)selectedStrokesViewClipRectForDrawing:(id)arg1;
-(double)scaleForDrawing:(id)arg1;
-(id)_firstStrokesInStrokes:(id)arg1;
-(id)_lastStrokesInStrokes:(id)arg1;
-(long long)currentIntersectionAlgorithm;
-(NSObject*<OS_dispatch_queue>)selectionHullQueue;
-(void)setSelectionHullQueue:(id)arg1;

@end

