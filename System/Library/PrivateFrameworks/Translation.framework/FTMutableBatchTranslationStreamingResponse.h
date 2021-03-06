/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTBatchTranslationStreamingResponse.h>

@class FTBatchTranslationResponse, FTFinalBlazarResponse;

@interface FTMutableBatchTranslationStreamingResponse : FTBatchTranslationStreamingResponse

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) FTBatchTranslationResponse * contentAsFTBatchTranslationResponse; 
@property (nonatomic,copy) FTFinalBlazarResponse * contentAsFTFinalBlazarResponse; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContentAsFTFinalBlazarResponse:(FTFinalBlazarResponse *)arg1 ;
-(void)setContentAsFTBatchTranslationResponse:(FTBatchTranslationResponse *)arg1 ;
-(long long)content_type;
-(FTBatchTranslationResponse *)contentAsFTBatchTranslationResponse;
-(FTFinalBlazarResponse *)contentAsFTFinalBlazarResponse;
-(void)setContent_type:(long long)arg1 ;
@end

