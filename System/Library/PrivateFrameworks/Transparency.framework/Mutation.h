/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>

@class NSData;

@interface Mutation : GPBMessage

@property (assign,nonatomic) int version; 
@property (assign,nonatomic) int mutationType; 
@property (assign,nonatomic) unsigned long long mutationMs; 
@property (nonatomic,copy) NSData * uriVrfoutput; 
@property (nonatomic,copy) NSData * accountId; 
@property (nonatomic,copy) NSData * deviceIdVrfoutput; 
@property (nonatomic,copy) NSData * clientDataVrfoutput; 
@property (assign,nonatomic) unsigned long long appVersion; 
+(id)descriptor;
@end
