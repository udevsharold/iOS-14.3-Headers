/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSData, NSMutableDictionary;

@interface ICDelegationPlayInfoTokenRequest : NSObject <NSCopying> {

	NSNumber* _DSID;
	NSData* _cloudCredentialsTokenData;
	NSData* _SICData;

}

@property (nonatomic,copy) NSNumber * DSID;                                                        //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSData * cloudCredentialsTokenData;                                     //@synthesize cloudCredentialsTokenData=_cloudCredentialsTokenData - In the implementation block
@property (setter=ICData,nonatomic,copy) NSData * SICData;                                         //@synthesize SICData=_SICData - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * propertyListRepresentation; 
-(NSNumber *)DSID;
-(void)setDSID:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)SICData;
-(void)setSICData:(NSData *)arg1 ;
-(NSMutableDictionary *)propertyListRepresentation;
-(id)initWithDSID:(id)arg1 SICData:(id)arg2 ;
-(NSData *)cloudCredentialsTokenData;
-(void)setCloudCredentialsTokenData:(NSData *)arg1 ;
@end
