/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphPropertylessNode.h>

@class NSString;

@interface PGGraphMobilityNode : PGGraphPropertylessNode {

	NSString* _label;

}

@property (nonatomic,readonly) unsigned long long mobilityType; 
+(unsigned long long)mobilityTypeForMobilityLabel:(id)arg1 ;
-(unsigned long long)mobilityType;
-(id)initWithLabel:(id)arg1 ;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(unsigned short)domain;
-(id)label;
@end

