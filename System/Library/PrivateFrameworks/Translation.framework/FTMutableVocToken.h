/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTVocToken.h>

@class NSString, NSData;

@interface FTMutableVocToken : FTVocToken

@property (nonatomic,copy) NSString * orthography; 
@property (nonatomic,copy) NSData * blob; 
-(NSData *)blob;
-(id)init;
-(void)blob:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)orthography;
-(void)setBlob:(NSData *)arg1 ;
-(void)setOrthography:(NSString *)arg1 ;
@end

