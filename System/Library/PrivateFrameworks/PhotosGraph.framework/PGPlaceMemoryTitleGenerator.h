/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGTitleGenerator.h>

@class PGGraphNode;

@interface PGPlaceMemoryTitleGenerator : PGTitleGenerator {

	PGGraphNode* _placeNode;

}

@property (nonatomic,retain) PGGraphNode * placeNode;              //@synthesize placeNode=_placeNode - In the implementation block
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)initWithMomentNodes:(id)arg1 placeNode:(id)arg2 ;
-(id)_placeTitle;
-(PGGraphNode *)placeNode;
-(void)setPlaceNode:(PGGraphNode *)arg1 ;
@end

