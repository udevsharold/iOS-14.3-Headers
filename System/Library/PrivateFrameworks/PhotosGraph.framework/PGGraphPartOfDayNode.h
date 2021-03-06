/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSString;

@interface PGGraphPartOfDayNode : PGGraphOptimizedNode {

	unsigned long long _partOfDay;

}

@property (readonly) NSString * name; 
@property (readonly) unsigned long long partOfDay;              //@synthesize partOfDay=_partOfDay - In the implementation block
+(id)filter;
+(unsigned long long)partOfDayForPartOfDayName:(id)arg1 ;
+(id)stringValueForPartOfDay:(unsigned long long)arg1 ;
+(id)partOfDayNameForPartOfDay:(unsigned long long)arg1 ;
-(id)init;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(unsigned short)domain;
-(unsigned long long)partOfDay;
-(id)description;
-(void)setLocalProperties:(id)arg1 ;
-(NSString *)name;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)label;
@end

