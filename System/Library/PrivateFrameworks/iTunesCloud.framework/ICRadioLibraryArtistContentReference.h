/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/ICRadioContentReference.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ICRadioLibraryArtistContentReference : ICRadioContentReference <NSCopying, NSSecureCoding> {

	NSString* _artistName;
	NSNumber* _representativeCloudIdentifier;
	NSNumber* _storeIdentifier;

}

@property (nonatomic,copy) NSString * artistName;                                 //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSNumber * representativeCloudIdentifier;              //@synthesize representativeCloudIdentifier=_representativeCloudIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * storeIdentifier;                            //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setArtistName:(NSString *)arg1 ;
-(id)rawContentDictionary;
-(id)matchDictionary;
-(NSNumber *)representativeCloudIdentifier;
-(void)setRepresentativeCloudIdentifier:(NSNumber *)arg1 ;
-(long long)contentType;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)storeIdentifier;
-(NSString *)artistName;
-(void)setStoreIdentifier:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
