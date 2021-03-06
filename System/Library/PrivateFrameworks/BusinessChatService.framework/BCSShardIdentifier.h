/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <libobjc.A.dylib/BCSShardItemIdentifying.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BCSShardIdentifier : NSObject <BCSShardItemIdentifying, NSCopying> {

	long long _type;
	long long _startIndex;
	long long _shardCount;

}

@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long startIndex;                  //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) long long shardCount;                  //@synthesize shardCount=_shardCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifierWithType:(long long)arg1 startIndex:(long long)arg2 shardCount:(long long)arg3 ;
+(id)identifierFromShardIdentifying:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(long long)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(long long)startIndex;
-(void)setStartIndex:(long long)arg1 ;
-(id)_initWithType:(long long)arg1 startIndex:(long long)arg2 shardCount:(long long)arg3 ;
-(long long)shardCount;
-(void)setShardCount:(long long)arg1 ;
@end

