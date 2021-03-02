/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTShortcutFuzzyMatchResponse.h>

@class NSString, NSArray;

@interface FTMutableShortcutFuzzyMatchResponse : FTShortcutFuzzyMatchResponse

@property (nonatomic,copy) NSString * utterance; 
@property (nonatomic,copy) NSArray * shortcut_score_pairs; 
@property (assign,nonatomic) int return_code; 
-(NSString *)utterance;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUtterance:(NSString *)arg1 ;
-(NSArray *)shortcut_score_pairs;
-(void)setShortcut_score_pairs:(NSArray *)arg1 ;
-(void)setReturn_code:(int)arg1 ;
-(int)return_code;
@end
