/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBFluidSwitcherGestureExclusionShape.h>

@class NSArray, NSString;

@interface SBFluidSwitcherGestureExclusionCompositeShape : NSObject <SBFluidSwitcherGestureExclusionShape> {

	BOOL _allowHorizontalSwipesInsideShapes;
	NSArray* _rects;
	double _topEdgeY;

}

@property (nonatomic,retain) NSArray * rects;                                     //@synthesize rects=_rects - In the implementation block
@property (assign,nonatomic) BOOL allowHorizontalSwipesInsideShapes;              //@synthesize allowHorizontalSwipesInsideShapes=_allowHorizontalSwipesInsideShapes - In the implementation block
@property (assign,nonatomic) double topEdgeY;                                     //@synthesize topEdgeY=_topEdgeY - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exclusionCompositeShapeWithRects:(id)arg1 allowHorizontalSwipes:(BOOL)arg2 ;
-(NSArray *)rects;
-(id)debugView;
-(void)setRects:(NSArray *)arg1 ;
-(double)topEdgeY;
-(BOOL)shouldBeginGestureAtStartingPoint:(CGPoint)arg1 velocity:(CGPoint)arg2 bounds:(CGRect)arg3 ;
-(void)setAllowHorizontalSwipesInsideShapes:(BOOL)arg1 ;
-(BOOL)allowHorizontalSwipesInsideShapes;
-(void)setTopEdgeY:(double)arg1 ;
@end
