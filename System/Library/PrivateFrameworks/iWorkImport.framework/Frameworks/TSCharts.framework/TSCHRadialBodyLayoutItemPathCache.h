/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class NSArray, NSNumber;

@interface TSCHRadialBodyLayoutItemPathCache : NSObject {

	unsigned long long seriesIndex;
	CGPathRef pathLayoutRelative;
	CGPathRef pathTransformRelative;
	NSArray* pathSelectionKnobs;
	NSNumber* innerRadius;
	CGPoint wedgeCenterPoint;
	CGRect rootedLayoutRect;

}

@property (nonatomic,readonly) unsigned long long seriesIndex; 
@property (nonatomic,readonly) CGRect rootedLayoutRect; 
@property (nonatomic,readonly) CGPoint wedgeCenterPoint; 
@property (nonatomic,readonly) CGPathRef pathLayoutRelative; 
@property (nonatomic,readonly) CGPathRef pathTransformRelative; 
@property (nonatomic,copy,readonly) NSArray * pathSelectionKnobs; 
@property (nonatomic,copy,readonly) NSNumber * innerRadius; 
-(void)dealloc;
-(unsigned long long)seriesIndex;
-(NSNumber *)innerRadius;
-(CGRect)rootedLayoutRect;
-(CGPathRef)pathLayoutRelative;
-(CGPathRef)pathTransformRelative;
-(CGPoint)wedgeCenterPoint;
-(NSArray *)pathSelectionKnobs;
-(id)initWithSeriesIndex:(unsigned long long)arg1 rootedLayoutRect:(CGRect)arg2 wedgeCenterPoint:(CGPoint)arg3 pathLayoutRelative:(CGPathRef)arg4 pathTransformRelative:(CGPathRef)arg5 pathSelectionKnobs:(id)arg6 innerRadius:(id)arg7 ;
@end
