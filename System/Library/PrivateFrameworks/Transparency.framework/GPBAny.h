/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>

@class NSString, NSData;

@interface GPBAny : GPBMessage

@property (nonatomic,copy) NSString * typeURL; 
@property (nonatomic,copy) NSData * value; 
+(id)descriptor;
+(id)anyWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id*)arg3 ;
+(id)anyWithMessage:(id)arg1 error:(id*)arg2 ;
-(id)initWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id*)arg3 ;
-(BOOL)packWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id*)arg3 ;
-(id)initWithMessage:(id)arg1 error:(id*)arg2 ;
-(BOOL)packWithMessage:(id)arg1 error:(id*)arg2 ;
-(id)unpackMessageClass:(Class)arg1 error:(id*)arg2 ;
@end
