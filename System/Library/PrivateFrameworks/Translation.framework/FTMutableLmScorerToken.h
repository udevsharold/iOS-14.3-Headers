/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTLmScorerToken.h>

@class NSString;

@interface FTMutableLmScorerToken : FTLmScorerToken

@property (nonatomic,copy) NSString * token_str; 
@property (assign,nonatomic) double log10_score; 
@property (assign,nonatomic) int ngram_used; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)token_str;
-(void)setToken_str:(NSString *)arg1 ;
-(double)log10_score;
-(void)setLog10_score:(double)arg1 ;
-(int)ngram_used;
-(void)setNgram_used:(int)arg1 ;
@end

