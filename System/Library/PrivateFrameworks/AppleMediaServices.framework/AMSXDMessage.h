/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSObjectNSSecureCoding;
@class NSString, NSDate, AMSXDDevice, NSDictionary;

@interface AMSXDMessage : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isReply;
	NSString* _objectClassName;
	NSString* _messageID;
	NSDate* _receiptDate;
	AMSXDDevice* _destination;
	double _expirationInterval;
	NSString* _identifier;
	NSString* _logKey;
	id<NSObject><NSSecureCoding> _object;
	AMSXDDevice* _origin;
	long long _purpose;

}

@property (nonatomic,retain) NSString * objectClassName;                       //@synthesize objectClassName=_objectClassName - In the implementation block
@property (assign,nonatomic) BOOL isReply;                                     //@synthesize isReply=_isReply - In the implementation block
@property (nonatomic,retain) NSString * messageID;                             //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain) NSDate * receiptDate;                             //@synthesize receiptDate=_receiptDate - In the implementation block
@property (nonatomic,readonly) NSDictionary * JSONDictionary; 
@property (nonatomic,retain) AMSXDDevice * destination;                        //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) double expirationInterval;                        //@synthesize expirationInterval=_expirationInterval - In the implementation block
@property (nonatomic,retain) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,retain) NSString * logKey;                                //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) id<NSObject><NSSecureCoding> object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) AMSXDDevice * origin;                             //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) long long purpose;                                //@synthesize purpose=_purpose - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)messageFromProtoMessage:(id)arg1 ;
-(void)setLogKey:(NSString *)arg1 ;
-(double)expirationInterval;
-(NSString *)logKey;
-(NSString *)objectClassName;
-(AMSXDDevice *)destination;
-(id)initWithIdentifier:(id)arg1 destination:(id)arg2 purpose:(long long)arg3 object:(id)arg4 ;
-(long long)purpose;
-(void)setPurpose:(long long)arg1 ;
-(void)setDestination:(AMSXDDevice *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(AMSXDDevice *)origin;
-(void)setExpirationInterval:(double)arg1 ;
-(void)setOrigin:(AMSXDDevice *)arg1 ;
-(BOOL)isReply;
-(void)setMessageID:(NSString *)arg1 ;
-(id<NSObject><NSSecureCoding>)object;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(id<NSObject><NSSecureCoding>)arg1 ;
-(BOOL)isExpired;
-(NSString *)identifier;
-(id)description;
-(void)setObjectClassName:(NSString *)arg1 ;
-(NSDictionary *)JSONDictionary;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)createProtoMessage;
-(void)setReceiptDate:(NSDate *)arg1 ;
-(NSDate *)receiptDate;
-(void)setIsReply:(BOOL)arg1 ;
-(NSString *)messageID;
-(void)encodeWithCoder:(id)arg1 ;
@end

