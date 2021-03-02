/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSReading/TSDContainerLayout.h>
#import <TSDrawables/TSDWrappableParent.h>

@class TSDLayoutGeometry, TSDBezierPath;

@interface TSDGroupLayout : TSDContainerLayout <TSDWrappableParent> {

	TSDLayoutGeometry* mDynamicLayoutGeometry;
	CGRect mBoundsForStandardKnobs;
	TSDBezierPath* mCachedWrapPath;
	TSDBezierPath* mCachedExternalWrapPath;

}

@property (nonatomic,readonly) int wrapContainerMode; 
-(CGSize)minimumSize;
-(void)setGeometry:(id)arg1 ;
-(BOOL)canFlip;
-(void)dealloc;
-(void)dragBy:(CGPoint)arg1 ;
-(BOOL)supportsRotation;
-(void)invalidate;
-(id)computeLayoutGeometry;
-(id)layoutGeometryFromInfo;
-(id)descendentWrappables;
-(int)wrapContainerMode;
-(id)i_computeWrapPath;
-(id)i_wrapPath;
-(void)invalidateExteriorWrap;
-(void)processChangedProperty:(int)arg1 ;
-(id)i_externalWrapPath;
-(BOOL)allowsConnections;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(CGRect)boundsForStandardKnobs;
-(CGRect)alignmentFrame;
-(void)setDynamicGeometry:(id)arg1 ;
-(id)additionalDependenciesForChildLayout:(id)arg1 ;
-(void)takeRotationFromTracker:(id)arg1 ;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(id)computeInfoGeometryDuringResize;
-(id)reliedOnLayouts;
-(CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1 ;
-(BOOL)providesGuidesForChildLayouts;
-(id)visibleGeometries;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(BOOL)supportsParentRotation;
-(BOOL)supportsFlipping;
-(void)p_createDynamicCopies;
-(void)p_destroyDynamicCopies;
-(void)p_invalidateParentForWrap;
-(void)p_invalidateDescendentWrapPaths;
-(id)p_childWrapPathsFrom:(id)arg1 ;
-(void)wrappableChildInvalidated;
@end
