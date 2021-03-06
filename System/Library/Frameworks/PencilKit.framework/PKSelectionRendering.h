/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKSelectionRendering <NSObject>
@required
-(id)_accessibilityUserTestingChildren;
-(void)_setupSelectionAdornment;
-(id)lassoPath;
-(CGPoint*)editMenuLocation;
-(void)_didEndDraggingSelection;
-(void)_didBeginDraggingSelection;
-(id)initWithStrokeSelection:(id)arg1 renderingDelegate:(id)arg2;
-(id)initForLiveSelectionWithRenderingDelegate:(id)arg1;
-(id)adornmentLayer;
-(void)_renderLiveSelectionPath:(const CGPathRef)arg1 forStrokes:(id)arg2 inDrawing:(id)arg3 liveScrollOffset:(CGPoint)arg4;

@end

