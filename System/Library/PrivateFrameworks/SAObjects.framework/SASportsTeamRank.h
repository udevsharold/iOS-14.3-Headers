/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASportsTeamRank : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * position; 
@property (nonatomic,copy) NSNumber * primary; 
@property (nonatomic,copy) NSString * source; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)teamRankWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)teamRank;
-(id)groupIdentifier;
-(NSNumber *)primary;
-(NSNumber *)position;
-(void)setPrimary:(NSNumber *)arg1 ;
-(NSString *)source;
-(void)setPosition:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(void)setSource:(NSString *)arg1 ;
@end
