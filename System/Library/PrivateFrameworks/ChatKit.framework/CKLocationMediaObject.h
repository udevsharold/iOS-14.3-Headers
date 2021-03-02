/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKContactMediaObject.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString;

@interface CKLocationMediaObject : CKContactMediaObject <MKAnnotation> {

	CLLocationCoordinate2D _coordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fallbackFilenamePrefix;
+(BOOL)isPreviewable;
+(id)vcardDataFromCLLocation:(id)arg1 ;
+(Class)__ck_attachmentItemClass;
+(id)placeholderPreviewForWidth:(double)arg1 orientation:(char)arg2 ;
+(id)placeholderPreviewCache;
+(id)UTITypes;
-(CGSize)bbSize;
-(id)attachmentSummary:(unsigned long long)arg1 ;
-(int)mediaType;
-(Class)balloonViewClassForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)pasteboardItemProvider;
-(id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(NSRange)arg2 ;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(id)bbPreviewFillToSize:(CGSize)arg1 ;
-(Class)previewBalloonViewClass;
-(id)previewCacheKeyWithOrientation:(char)arg1 ;
-(id)previewCachesFileURLWithOrientation:(char)arg1 extension:(id)arg2 generateIntermediaries:(BOOL)arg3 ;
-(CLLocationCoordinate2D)coordinate;
-(id)generatePlaceholderThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)generatePlaceholderThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(id)transcriptTraitCollection;
-(id)previewForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)metricsCollectorMediaType;
-(id)initWithTransfer:(id)arg1 isFromMe:(BOOL)arg2 suppressPreview:(BOOL)arg3 forceInlinePreview:(BOOL)arg4 ;
-(id)vCardURLProperties;
-(BOOL)isDroppedPin;
-(id)previewItemTitle;
-(id)mapItem;
-(NSString *)title;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
@end
