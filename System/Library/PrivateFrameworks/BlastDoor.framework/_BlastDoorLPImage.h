/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSURL, _BlastDoorLPImageProperties;

@interface _BlastDoorLPImage : NSObject <NSSecureCoding> {

	NSData* _data;
	NSString* _MIMEType;
	NSURL* _fileURL;
	_BlastDoorLPImageProperties* _properties;

}

@property (nonatomic,copy) NSData * data;                                         //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * MIMEType;                                   //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                     //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) _BlastDoorLPImageProperties * properties;              //@synthesize properties=_properties - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFileURL:(NSURL *)arg1 ;
-(id)init;
-(NSData *)data;
-(void)setMIMEType:(NSString *)arg1 ;
-(void)setProperties:(_BlastDoorLPImageProperties *)arg1 ;
-(NSString *)MIMEType;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)fileURL;
-(_BlastDoorLPImageProperties *)properties;
-(void)setData:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)_shouldEncodeData;
-(id)_initWithImage:(id)arg1 properties:(id)arg2 ;
-(unsigned long long)_encodedSize;
-(id)_initWithImage:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
