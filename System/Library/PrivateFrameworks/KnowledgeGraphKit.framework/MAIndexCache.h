/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface MAIndexCache : NSObject {

	NSArray* _labels;
	NSDictionary* _cache;

}

@property (nonatomic,readonly) NSDictionary * cache;               //@synthesize cache=_cache - In the implementation block
@property (nonatomic,copy,readonly) NSArray * labels;              //@synthesize labels=_labels - In the implementation block
-(NSDictionary *)cache;
-(NSArray *)labels;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLabels:(id)arg1 ;
-(long long)indexOfLabel:(id)arg1 ;
@end
