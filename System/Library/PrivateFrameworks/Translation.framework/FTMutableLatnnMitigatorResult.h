/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTLatnnMitigatorResult.h>

@class NSString;

@interface FTMutableLatnnMitigatorResult : FTLatnnMitigatorResult

@property (assign,nonatomic) BOOL processed; 
@property (nonatomic,copy) NSString * version; 
@property (assign,nonatomic) double threshold; 
@property (assign,nonatomic) double score; 
-(void)setProcessed:(BOOL)arg1 ;
-(id)init;
-(double)threshold;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setThreshold:(double)arg1 ;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(double)score;
-(void)setScore:(double)arg1 ;
-(BOOL)processed;
@end

