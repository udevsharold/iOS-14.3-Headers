/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTLanguageDetected.h>

@class NSString, NSArray;

@interface FTMutableLanguageDetected : FTLanguageDetected

@property (nonatomic,copy) NSString * detected_locale; 
@property (nonatomic,copy) NSArray * predictions; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)predictions;
-(NSString *)detected_locale;
-(void)setDetected_locale:(NSString *)arg1 ;
-(void)setPredictions:(NSArray *)arg1 ;
@end
