/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REHistoricSectionDescriptorProperties.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSOrderedSet, RESectionDescriptor, NSArray;

@interface REHistoricSectionDescriptor : NSObject <REHistoricSectionDescriptorProperties, NSCopying> {

	NSOrderedSet* _rules;
	BOOL _invertsRanking;
	long long _maxElementCount;
	RESectionDescriptor* _parentDescriptor;

}

@property (nonatomic,retain) NSArray * orderedRules; 
@property (assign,nonatomic,__weak) RESectionDescriptor * parentDescriptor;              //@synthesize parentDescriptor=_parentDescriptor - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (assign,nonatomic) BOOL invertsRanking;                                        //@synthesize invertsRanking=_invertsRanking - In the implementation block
@property (assign,nonatomic) long long maxElementCount;                                  //@synthesize maxElementCount=_maxElementCount - In the implementation block
@property (nonatomic,copy) NSSet * rules; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)rules;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)setRules:(NSSet *)arg1 ;
-(long long)maxElementCount;
-(void)setMaxElementCount:(long long)arg1 ;
-(NSArray *)orderedRules;
-(BOOL)invertsRanking;
-(void)setInvertsRanking:(BOOL)arg1 ;
-(RESectionDescriptor *)parentDescriptor;
-(void)setParentDescriptor:(RESectionDescriptor *)arg1 ;
-(void)setOrderedRules:(NSArray *)arg1 ;
@end

