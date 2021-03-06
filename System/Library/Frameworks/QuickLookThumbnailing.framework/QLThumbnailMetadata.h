/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface QLThumbnailMetadata : NSObject <NSSecureCoding> {

	int _inlinePreviewMode;
	long long _baseline;

}

@property (assign) int inlinePreviewMode;              //@synthesize inlinePreviewMode=_inlinePreviewMode - In the implementation block
@property (assign) long long baseline;                 //@synthesize baseline=_baseline - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)thumbnailMetadataFromPropertiesDictionary:(id)arg1 ;
-(id)init;
-(long long)baseline;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setBaseline:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setInlinePreviewMode:(int)arg1 ;
-(int)inlinePreviewMode;
-(id)propertiesDict;
@end

