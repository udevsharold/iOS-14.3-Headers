/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTranslationResponse_TranslationToken.h>

@class NSString, FTAlignment;

@interface FTMutableTranslationResponse_TranslationToken : FTTranslationResponse_TranslationToken

@property (nonatomic,copy) NSString * token; 
@property (assign,nonatomic) float confidence; 
@property (nonatomic,copy) FTAlignment * mt_alignment; 
@property (assign,nonatomic) BOOL add_space_after; 
-(void)setToken:(NSString *)arg1 ;
-(float)confidence;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAdd_space_after:(BOOL)arg1 ;
-(BOOL)add_space_after;
-(NSString *)token;
-(FTAlignment *)mt_alignment;
-(void)setMt_alignment:(FTAlignment *)arg1 ;
-(void)setConfidence:(float)arg1 ;
@end

