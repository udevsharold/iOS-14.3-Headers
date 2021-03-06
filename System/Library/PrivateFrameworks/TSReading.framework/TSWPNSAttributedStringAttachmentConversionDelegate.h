/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSWPNSAttributedStringAttachmentConversionDelegate.h>

@protocol TSWPNSAttributedStringAttachmentConversionDelegate <NSObject>
@optional
-(id)textualEquivalentForDrawableAttachment:(id)arg1 withString:(id)arg2 atCharIndex:(unsigned long long)arg3;
-(id)attachmentStringForDrawableAttachment:(id)arg1;
-(id)urlForHyperlinkField:(id)arg1;

@end


@class NSString;

@interface TSWPNSAttributedStringAttachmentConversionDelegate : NSObject <TSWPNSAttributedStringAttachmentConversionDelegate> {

	BOOL mConvertHyperlinks;
	BOOL mConvertAttachments;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithConvertHyperlinks:(BOOL)arg1 convertGraphicalAttachments:(BOOL)arg2 ;
-(id)attachmentStringForDrawableAttachment:(id)arg1 ;
-(id)urlForHyperlinkField:(id)arg1 ;
@end

