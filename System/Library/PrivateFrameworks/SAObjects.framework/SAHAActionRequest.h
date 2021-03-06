/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, SAHAFilter;

@interface SAHAActionRequest : SADomainObject

@property (nonatomic,copy) NSArray * actions; 
@property (assign,nonatomic) long long executionOrder; 
@property (nonatomic,retain) SAHAFilter * filter; 
+(id)actionRequest;
+(id)actionRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setFilter:(SAHAFilter *)arg1 ;
-(SAHAFilter *)filter;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(long long)executionOrder;
-(void)setExecutionOrder:(long long)arg1 ;
-(id)encodedClassName;
@end

