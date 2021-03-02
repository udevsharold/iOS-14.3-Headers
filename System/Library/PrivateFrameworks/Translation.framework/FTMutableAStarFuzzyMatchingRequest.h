/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTAStarFuzzyMatchingRequest.h>

@class NSString, FTAStarFuzzyMatchingConfig;

@interface FTMutableAStarFuzzyMatchingRequest : FTAStarFuzzyMatchingRequest

@property (nonatomic,copy) NSString * matcher_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSString * target; 
@property (nonatomic,copy) FTAStarFuzzyMatchingConfig * config; 
-(id)init;
-(void)setQuery:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)query;
-(NSString *)target;
-(void)setTarget:(NSString *)arg1 ;
-(void)setConfig:(FTAStarFuzzyMatchingConfig *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(FTAStarFuzzyMatchingConfig *)config;
-(NSString *)matcher_id;
-(void)setMatcher_id:(NSString *)arg1 ;
@end
