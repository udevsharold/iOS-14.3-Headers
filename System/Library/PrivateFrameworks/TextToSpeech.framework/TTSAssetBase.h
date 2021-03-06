/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface TTSAssetBase : NSObject <NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSNumber* _compatibilityVersion;
	NSNumber* _contentVersion;
	NSString* _masteredVersion;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,copy) NSNumber * contentVersion;                    //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,copy) NSString * masteredVersion;                   //@synthesize masteredVersion=_masteredVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)contentVersion;
-(id)initWithCoder:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)masteredVersion;
-(void)setCompatibilityVersion:(NSNumber *)arg1 ;
-(void)setMasteredVersion:(NSString *)arg1 ;
-(NSNumber *)compatibilityVersion;
-(void)setContentVersion:(NSNumber *)arg1 ;
-(NSString *)bundleIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
@end

