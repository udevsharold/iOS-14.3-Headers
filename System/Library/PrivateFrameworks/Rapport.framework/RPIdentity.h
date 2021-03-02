/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSDate, NSData, NSUUID;

@interface RPIdentity : NSObject <NSSecureCoding> {

	BOOL _userAdded;
	BOOL _disabled;
	BOOL _present;
	int _type;
	unsigned _revisionID;
	NSArray* _accessGroups;
	NSString* _accountID;
	NSString* _contactID;
	NSDate* _dateAdded;
	NSDate* _dateRemoved;
	NSData* _deviceIRKData;
	NSData* _edPKData;
	NSData* _edSKData;
	unsigned long long _featureFlags;
	NSUUID* _homeKitUserIdentifier;
	NSString* _identifier;
	NSString* _idsDeviceID;
	NSString* _mediaRemoteID;
	NSString* _mediaRouteID;
	NSString* _model;
	NSString* _name;
	NSString* _sendersKnownAlias;
	NSDate* _dateAcknowledged;
	NSDate* _dateRequested;

}

@property (nonatomic,copy) NSDate * dateAcknowledged;                      //@synthesize dateAcknowledged=_dateAcknowledged - In the implementation block
@property (nonatomic,copy) NSDate * dateAdded;                             //@synthesize dateAdded=_dateAdded - In the implementation block
@property (nonatomic,copy) NSDate * dateRemoved;                           //@synthesize dateRemoved=_dateRemoved - In the implementation block
@property (nonatomic,copy) NSDate * dateRequested;                         //@synthesize dateRequested=_dateRequested - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,copy) NSData * edSKData;                              //@synthesize edSKData=_edSKData - In the implementation block
@property (assign,nonatomic) unsigned long long featureFlags;              //@synthesize featureFlags=_featureFlags - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * mediaRemoteID;                       //@synthesize mediaRemoteID=_mediaRemoteID - In the implementation block
@property (nonatomic,copy) NSString * mediaRouteID;                        //@synthesize mediaRouteID=_mediaRouteID - In the implementation block
@property (assign,nonatomic) BOOL present;                                 //@synthesize present=_present - In the implementation block
@property (assign,nonatomic) unsigned revisionID;                          //@synthesize revisionID=_revisionID - In the implementation block
@property (nonatomic,copy) NSArray * accessGroups;                         //@synthesize accessGroups=_accessGroups - In the implementation block
@property (nonatomic,copy) NSString * accountID;                           //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSString * contactID;                           //@synthesize contactID=_contactID - In the implementation block
@property (nonatomic,copy) NSData * deviceIRKData;                         //@synthesize deviceIRKData=_deviceIRKData - In the implementation block
@property (nonatomic,copy) NSData * edPKData;                              //@synthesize edPKData=_edPKData - In the implementation block
@property (nonatomic,copy) NSUUID * homeKitUserIdentifier;                 //@synthesize homeKitUserIdentifier=_homeKitUserIdentifier - In the implementation block
@property (nonatomic,copy) NSString * idsDeviceID;                         //@synthesize idsDeviceID=_idsDeviceID - In the implementation block
@property (nonatomic,copy) NSString * model;                               //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * sendersKnownAlias;                   //@synthesize sendersKnownAlias=_sendersKnownAlias - In the implementation block
@property (assign,nonatomic) int type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL userAdded;                               //@synthesize userAdded=_userAdded - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nullIdentity;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(void)setContactID:(NSString *)arg1 ;
-(NSString *)contactID;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setFeatureFlags:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSDate *)dateAdded;
-(BOOL)present;
-(void)setDateRemoved:(NSDate *)arg1 ;
-(NSString *)mediaRouteID;
-(BOOL)disabled;
-(NSString *)mediaRemoteID;
-(unsigned)compareWithRPIdentity:(id)arg1 ;
-(void)setMediaRemoteID:(NSString *)arg1 ;
-(BOOL)verifySignature:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(NSString *)accountID;
-(void)setSendersKnownAlias:(NSString *)arg1 ;
-(NSArray *)accessGroups;
-(unsigned)updateWithKeychainItem:(id)arg1 error:(id*)arg2 ;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)model;
-(void)setPresent:(BOOL)arg1 ;
-(void)setType:(int)arg1 ;
-(BOOL)verifySignaturePtr:(const void*)arg1 signatureLen:(unsigned long long)arg2 dataPtr:(const void*)arg3 dataLen:(unsigned long long)arg4 error:(id*)arg5 ;
-(void)setRevisionID:(unsigned)arg1 ;
-(NSString *)sendersKnownAlias;
-(id)descriptionWithLevel:(int)arg1 ;
-(id)initWithType:(int)arg1 ;
-(id)authTagForData:(id)arg1 type:(int)arg2 error:(id*)arg3 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)dateRequested;
-(void)setAccountID:(NSString *)arg1 ;
-(NSString *)idsDeviceID;
-(BOOL)userAdded;
-(id)initWithCoder:(id)arg1 ;
-(void)setUserAdded:(BOOL)arg1 ;
-(void)setDateAcknowledged:(NSDate *)arg1 ;
-(NSData *)edSKData;
-(void)setHomeKitUserIdentifier:(NSUUID *)arg1 ;
-(void)setMediaRouteID:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)description;
-(int)type;
-(void)setAccessGroups:(NSArray *)arg1 ;
-(void)setDateRequested:(NSDate *)arg1 ;
-(BOOL)verifyAuthTagPtr:(const void*)arg1 authTagLen:(unsigned long long)arg2 dataPtr:(const void*)arg3 dataLen:(unsigned long long)arg4 type:(int)arg5 error:(id*)arg6 ;
-(void)setIdsDeviceID:(NSString *)arg1 ;
-(NSDate *)dateAcknowledged;
-(void)setDeviceIRKData:(NSData *)arg1 ;
-(BOOL)signDataPtr:(const void*)arg1 dataLen:(unsigned long long)arg2 signatureBytes:(unsigned char)arg3 error:(id*)arg4 ;
-(BOOL)verifyAuthTag:(id)arg1 data:(id)arg2 type:(int)arg3 error:(id*)arg4 ;
-(unsigned long long)featureFlags;
-(NSDate *)dateRemoved;
-(NSString *)name;
-(NSData *)edPKData;
-(void)setEdSKData:(NSData *)arg1 ;
-(unsigned)revisionID;
-(unsigned)updateWithRPMessage:(id)arg1 error:(id*)arg2 ;
-(NSData *)deviceIRKData;
-(void)setEdPKData:(NSData *)arg1 ;
-(void)setDateAdded:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)homeKitUserIdentifier;
@end
