/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSSerializableObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface TPSAssets : TPSSerializableObject <NSCopying, NSSecureCoding> {

	BOOL _skipViewMode;
	long long _imageExtensionType;
	NSURL* _baseURL;
	NSString* _alt;
	NSString* _caption;
	NSString* _posterId;
	NSString* _videoId;
	NSString* _fallbackId;
	NSString* _imageId;

}

@property (nonatomic,copy) NSString * caption;                          //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSString * posterId;                         //@synthesize posterId=_posterId - In the implementation block
@property (nonatomic,copy) NSString * videoId;                          //@synthesize videoId=_videoId - In the implementation block
@property (nonatomic,copy) NSString * fallbackId;                       //@synthesize fallbackId=_fallbackId - In the implementation block
@property (assign,nonatomic) BOOL skipViewMode;                         //@synthesize skipViewMode=_skipViewMode - In the implementation block
@property (assign,nonatomic) long long imageExtensionType;              //@synthesize imageExtensionType=_imageExtensionType - In the implementation block
@property (nonatomic,copy) NSURL * baseURL;                             //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * alt;                              //@synthesize alt=_alt - In the implementation block
@property (nonatomic,copy) NSString * imageId;                          //@synthesize imageId=_imageId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
+(id)na_identity;
+(id)assetsFromDictionary:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSString *)alt;
-(NSURL *)baseURL;
-(BOOL)hasImage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)imageId;
-(NSString *)caption;
-(BOOL)hasVideo;
-(void)setImageId:(NSString *)arg1 ;
-(void)setCaption:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)videoId;
-(void)setAlt:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 metadata:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)posterId;
-(void)setSkipViewMode:(BOOL)arg1 ;
-(NSString *)fallbackId;
-(long long)imageExtensionType;
-(BOOL)skipViewMode;
-(void)setImageExtensionType:(long long)arg1 ;
-(id)debugDescription;
-(void)setPosterId:(NSString *)arg1 ;
-(void)setVideoId:(NSString *)arg1 ;
-(void)setFallbackId:(NSString *)arg1 ;
-(id)imageIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
@end
