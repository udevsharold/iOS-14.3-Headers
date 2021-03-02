/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NSFileProviderItemVersion : NSObject <NSSecureCoding> {

	NSData* _contentVersion;
	NSData* _metadataVersion;

}

@property (nonatomic,readonly) NSData * contentVersion;               //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,readonly) NSData * metadataVersion;              //@synthesize metadataVersion=_metadataVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)contentVersion;
-(BOOL)isEmpty;
-(id)init;
-(id)initWithContentVersion:(id)arg1 metadataVersion:(id)arg2 ;
-(NSData *)metadataVersion;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
