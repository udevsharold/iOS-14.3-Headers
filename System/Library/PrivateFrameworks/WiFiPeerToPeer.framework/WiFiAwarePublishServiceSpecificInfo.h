/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPeerToPeer/WiFiPeerToPeer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface WiFiAwarePublishServiceSpecificInfo : NSObject <NSSecureCoding, NSCopying> {

	NSData* _blob;
	NSData* _txtRecordData;
	NSString* _instanceName;

}

@property (nonatomic,copy) NSData * blob;                        //@synthesize blob=_blob - In the implementation block
@property (nonatomic,copy) NSData * txtRecordData;               //@synthesize txtRecordData=_txtRecordData - In the implementation block
@property (nonatomic,copy) NSString * instanceName;              //@synthesize instanceName=_instanceName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)blob;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBlob:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTxtRecordData:(NSData *)arg1 ;
-(id)description;
-(void)setInstanceName:(NSString *)arg1 ;
-(NSData *)txtRecordData;
-(NSString *)instanceName;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)blobEquals:(id)arg1 ;
-(BOOL)txtRecordEquals:(id)arg1 ;
-(BOOL)instanceNameEquals:(id)arg1 ;
@end

