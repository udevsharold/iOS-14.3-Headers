/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface QLUTIAnalyzer : NSObject <NSSecureCoding> {

	NSString* _contentType;

}

@property (readonly) NSString * contentType;              //@synthesize contentType=_contentType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)UTIForURL:(id)arg1 ;
+(BOOL)isTypeAudioOnly:(id)arg1 ;
+(id)knownExtensions;
+(id)privateUTIFromFileName:(id)arg1 ;
+(id)removeSpacesFromString:(id)arg1 ;
-(id)initWithContentType:(id)arg1 ;
-(BOOL)isAudioOnly;
-(NSString *)contentType;
-(id)initWithURL:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

