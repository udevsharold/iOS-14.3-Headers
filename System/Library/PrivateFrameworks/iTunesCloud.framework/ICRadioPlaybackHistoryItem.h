/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSNumber, NSDictionary, NSMutableDictionary;

@interface ICRadioPlaybackHistoryItem : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSDate* _expirationDate;
	NSNumber* _pauseTime;
	NSDictionary* _serverTrackInfo;
	NSDate* _skipDate;
	long long _storeIdentifier;

}

@property (nonatomic,copy,readonly) NSDate * expirationDate;                                       //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,copy,readonly) NSNumber * pauseTime;                                          //@synthesize pauseTime=_pauseTime - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serverTrackInfo; 
@property (nonatomic,copy,readonly) NSDate * skipDate;                                             //@synthesize skipDate=_skipDate - In the implementation block
@property (nonatomic,readonly) long long storeIdentifier;                                          //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * propertyListRepresentation; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTrack:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isExpired;
-(long long)storeIdentifier;
-(NSNumber *)pauseTime;
-(NSDate *)skipDate;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableDictionary *)propertyListRepresentation;
-(NSDictionary *)serverTrackInfo;
-(void)encodeWithCoder:(id)arg1 ;
@end
