/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <QuickLookThumbnailing/QLTThumbnailRequest.h>

@class FPItem, QLCacheFileProviderVersionedFileIdentifier;

@interface QLTUbiquitousFileThumbnailRequest : QLTThumbnailRequest {

	FPItem* _item;

}

@property (readonly) FPItem * item;                                                            //@synthesize item=_item - In the implementation block
@property (readonly) QLCacheFileProviderVersionedFileIdentifier * fileIdentifier; 
+(BOOL)supportsSecureCoding;
-(FPItem *)item;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFPItem:(id)arg1 size:(CGSize)arg2 minimumDimension:(double)arg3 scale:(double)arg4 iconMode:(BOOL)arg5 ;
-(id)computeContentType;
-(BOOL)shouldProvideFoldedGenericIcon;
@end

