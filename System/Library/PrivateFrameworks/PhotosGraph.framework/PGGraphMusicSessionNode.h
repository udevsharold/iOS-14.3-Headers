/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSDate, NSSet;

@interface PGGraphMusicSessionNode : PGGraphOptimizedNode {

	NSDate* _localStartDate;
	NSDate* _localEndDate;

}

@property (nonatomic,readonly) NSDate * localStartDate;              //@synthesize localStartDate=_localStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * localEndDate;                //@synthesize localEndDate=_localEndDate - In the implementation block
@property (nonatomic,readonly) NSSet * momentNodes; 
@property (nonatomic,readonly) NSSet * trackNodes; 
+(id)musicSessionDateSortDescriptors;
-(NSDate *)localEndDate;
-(id)init;
-(NSDate *)localStartDate;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(unsigned short)domain;
-(id)description;
-(NSSet *)momentNodes;
-(void)setLocalProperties:(id)arg1 ;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)label;
-(NSSet *)trackNodes;
-(void)enumerateMusicTrackNodesUsingBlock:(/*^block*/id)arg1 ;
@end
