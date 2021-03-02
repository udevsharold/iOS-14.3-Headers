/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSDrawables/TSDrawables-Structs.h>
@interface TSDHobbyPathGenerator : NSObject {

	BOOL mClosed;
	vector<CGPoint, std::__1::allocator<CGPoint> >* mPoints;
	vector<CGPoint, std::__1::allocator<CGPoint> >* mMorphedPoints;

}
-(id)init;
-(void)dealloc;
-(void)calculateClosings;
-(void)adjustNodeTypes:(id)arg1 ;
-(void)adjustStraightenUp:(id)arg1 ;
-(void)adjustRemoveStraightNodes:(id)arg1 ;
-(void)morphPointsTo:(id)arg1 ;
-(void)adjustStraightEdges:(id)arg1 ;
-(void)adjustRatio:(id)arg1 ;
-(void)adjustRotationalSymmetry:(id)arg1 ;
-(double)distanceForSegment:(unsigned long long)arg1 overRange:(NSRange)arg2 furthestNode:(unsigned long long*)arg3 inSubpath:(id)arg4 ;
-(BOOL)pathWillClose:(id)arg1 ;
-(id)hobbyPathFrom:(id)arg1 morphedPath:(id*)arg2 ;
-(id)calculateHobbyPath;
@end
