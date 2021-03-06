/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSReading/TSDGroupRep.h>
#import <TSDrawables/TSDPlayableRep.h>

@class NSCache, NSString;

@interface TSDFreehandDrawingRep : TSDGroupRep <TSDPlayableRep> {

	NSCache* _cachedClusteredShapeRepsForAnimationExport;

}

@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPlayable;
-(double)opacity;
-(void)willBeRemoved;
-(CGRect)clipRect;
-(BOOL)isAccessibilityElement;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(id)textureForDescription:(id)arg1 ;
-(void)recursivelyDrawChildrenInContext:(CGContextRef)arg1 keepingChildrenPassingTest:(/*^block*/id)arg2 ;
-(id)p_shapeChildrenForDrawingRecursively;
-(BOOL)p_shouldDrawShapeRep:(id)arg1 withOtherShapeRep:(id)arg2 ;
-(void)p_drawChildShapeReps:(id)arg1 togetherInContext:(CGContextRef)arg2 ;
-(id)p_childrenToExcludeFromFlattenedDrawing;
-(id)p_freehandDrawingLayout;
-(id)p_freehandDrawingInfo;
-(id)tsaxChildren;
-(BOOL)tsaxAllowedToEditChildren;
@end

