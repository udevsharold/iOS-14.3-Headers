/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SAMPSearch : SADomainCommand

@property (nonatomic,copy) NSArray * constraints; 
@property (assign,nonatomic) long long maxResults; 
@property (nonatomic,copy) NSArray * searchTypes; 
@property (assign,nonatomic) BOOL strict; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setConstraints:(NSArray *)arg1 ;
-(long long)maxResults;
-(BOOL)strict;
-(NSArray *)constraints;
-(NSArray *)searchTypes;
-(void)setStrict:(BOOL)arg1 ;
-(void)setSearchTypes:(NSArray *)arg1 ;
-(BOOL)mutatingCommand;
-(void)setMaxResults:(long long)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end
