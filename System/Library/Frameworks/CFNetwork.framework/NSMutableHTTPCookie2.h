/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSHTTPCookie2.h>

@class NSString, NSDate;

@interface NSMutableHTTPCookie2 : NSHTTPCookie2

@property (retain) NSString * name; 
@property (retain) NSString * value; 
@property (retain) NSString * domain; 
@property (retain) NSString * path; 
@property (retain) NSDate * expirationDate; 
@property (assign) BOOL secure; 
@property (assign) BOOL httpOnly; 
@property (assign) BOOL hostOnly; 
@property (retain) NSString * partition; 
@property (assign) long long source; 
@property (assign) long long sameSite; 
-(void)setSecure:(BOOL)arg1 ;
-(void)setSameSite:(long long)arg1 ;
-(void)setHttpOnly:(BOOL)arg1 ;
-(void)setHostOnly:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setPartition:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 value:(id)arg2 domain:(id)arg3 ;
-(void)setValue:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setSource:(long long)arg1 ;
@end
