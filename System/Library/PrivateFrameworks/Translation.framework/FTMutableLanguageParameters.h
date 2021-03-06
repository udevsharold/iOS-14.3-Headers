/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTLanguageParameters.h>

@class NSString;

@interface FTMutableLanguageParameters : FTLanguageParameters

@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * request_locale; 
@property (nonatomic,copy) NSString * fork_id; 
-(void)setLanguage:(NSString *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)fork_id;
-(NSString *)request_locale;
-(void)setRequest_locale:(NSString *)arg1 ;
-(NSString *)language;
-(void)setFork_id:(NSString *)arg1 ;
@end

