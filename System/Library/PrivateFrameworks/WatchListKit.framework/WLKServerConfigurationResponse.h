/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WatchListKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSDate, NSString, NSURL, NSNumber;

@interface WLKServerConfigurationResponse : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _responseDictionary;
	NSDate* _expirationDate;
	unsigned long long _environmentHash;
	NSDictionary* _endpointsDictionary;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;                                  //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) unsigned long long environmentHash;                                 //@synthesize environmentHash=_environmentHash - In the implementation block
@property (nonatomic,readonly) NSDictionary * endpointsDictionary;                                 //@synthesize endpointsDictionary=_endpointsDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * requiredRequestKeyValuePairsDictionary; 
@property (nonatomic,readonly) NSString * vppaStatusString; 
@property (nonatomic,readonly) long long vppaStatus; 
@property (nonatomic,readonly) NSURL * playActivityURL; 
@property (nonatomic,readonly) NSDictionary * features; 
@property (nonatomic,copy,readonly) NSString * utsk; 
@property (getter=isActiveUser,nonatomic,readonly) BOOL activeUser; 
@property (nonatomic,copy,readonly) NSNumber * vppaSessionDurationInMillis; 
+(BOOL)supportsSecureCoding;
-(NSString *)utsk;
-(NSDictionary *)features;
-(id)utsc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(BOOL)isValid;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)responseDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)vppaStatus;
-(NSString *)vppaStatusString;
-(NSNumber *)vppaSessionDurationInMillis;
-(BOOL)isActiveUser;
-(id)initWithServerResponseDictionary:(id)arg1 expirationDate:(id)arg2 environmentHash:(unsigned long long)arg3 ;
-(NSDictionary *)requiredRequestKeyValuePairsDictionary;
-(unsigned long long)environmentHash;
-(NSURL *)playActivityURL;
-(BOOL)isValidIgnoringExpiration;
-(NSDictionary *)endpointsDictionary;
@end

