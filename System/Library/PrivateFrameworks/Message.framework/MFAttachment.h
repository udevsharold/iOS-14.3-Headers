/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>

@protocol MFDataConsumer;
@class MFAttachmentManager, MFAttachmentPlaceholder, NSURL, MFMimePart, NSString, NSItemProvider, NSArray, EMMailDropMetadata;

@interface MFAttachment : NSObject <NSItemProviderWriting> {

	MFAttachmentManager* _attachmentManager;
	MFAttachmentPlaceholder* _placeholder;
	BOOL _isAutoArchive;
	BOOL _wantsCompletionBlockOffMainThread;
	NSURL* _url;
	MFMimePart* _part;
	NSString* _disposition;
	NSItemProvider* _attachmentDataProvider;
	/*^block*/id _fetchCompletionBlock;
	id<MFDataConsumer> _customConsumer;
	CGSize _imageDimensions;

}

@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * contentType; 
@property (nonatomic,readonly) NSString * className; 
@property (nonatomic,readonly) BOOL isRestrictedMIMEType; 
@property (nonatomic,readonly) BOOL isMedia; 
@property (nonatomic,readonly) BOOL isPDFFile; 
@property (nonatomic,readonly) BOOL isDisplayableImage; 
@property (nonatomic,readonly) BOOL isDisplayableByWebKit; 
@property (nonatomic,readonly) BOOL isDisplayableInsidePlugin; 
@property (nonatomic,readonly) BOOL isDisplayableInline; 
@property (nonatomic,readonly) BOOL isBasicImage; 
@property (nonatomic,readonly) BOOL isContentCompressed; 
@property (nonatomic,readonly) BOOL isContentOpenable; 
@property (nonatomic,readonly) BOOL isCameraRollCompatibleVideo; 
@property (nonatomic,readonly) unsigned long long scaledFileSize; 
@property (nonatomic,readonly) double constrainedWidth; 
@property (nonatomic,readonly) unsigned long long imageScalingFlags; 
@property (readonly) BOOL isContainedInRFC822; 
@property (readonly) BOOL isContainedInCompose; 
@property (copy) NSString * contentID; 
@property (nonatomic,retain) NSURL * url;                                                          //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) MFMimePart * part;                                                    //@synthesize part=_part - In the implementation block
@property (nonatomic,copy) NSString * fileName; 
@property (readonly) NSString * path; 
@property (nonatomic,copy) NSString * mimeType; 
@property (nonatomic,copy) NSString * disposition;                                                 //@synthesize disposition=_disposition - In the implementation block
@property (nonatomic,copy) NSString * remoteImageFileName; 
@property (assign,nonatomic) unsigned long long decodedFileSize; 
@property (assign,nonatomic) unsigned long long encodedFileSize; 
@property (readonly) BOOL isDataAvailableLocally; 
@property (readonly) BOOL shouldAutoDownload; 
@property (readonly) NSString * inferredMimeType; 
@property (readonly) NSString * fileUTType; 
@property (readonly) BOOL isAutoArchive;                                                           //@synthesize isAutoArchive=_isAutoArchive - In the implementation block
@property (assign) BOOL isPlaceholder; 
@property (nonatomic,retain) MFAttachmentPlaceholder * placeholder;                                //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,retain) NSItemProvider * attachmentDataProvider;                              //@synthesize attachmentDataProvider=_attachmentDataProvider - In the implementation block
@property (nonatomic,retain) EMMailDropMetadata * mailDropMetadata; 
@property (nonatomic,copy) id fetchCompletionBlock;                                                //@synthesize fetchCompletionBlock=_fetchCompletionBlock - In the implementation block
@property (nonatomic,retain) id<MFDataConsumer> customConsumer;                                    //@synthesize customConsumer=_customConsumer - In the implementation block
@property (assign,nonatomic) BOOL wantsCompletionBlockOffMainThread;                               //@synthesize wantsCompletionBlockOffMainThread=_wantsCompletionBlockOffMainThread - In the implementation block
@property (nonatomic,readonly) BOOL isImageFile; 
@property (nonatomic,readonly) BOOL isVideoFile; 
@property (nonatomic,readonly) BOOL isMediaFile; 
@property (nonatomic,readonly) BOOL isRFC822; 
@property (nonatomic,readonly) BOOL isCalendarFile; 
@property (nonatomic,retain) NSString * eventID; 
@property (nonatomic,retain) NSString * meetingStorePersistentID; 
@property (nonatomic,retain) NSString * icsRepresentation; 
@property (assign,nonatomic) CGSize imageDimensions;                                               //@synthesize imageDimensions=_imageDimensions - In the implementation block
+(BOOL)_isPDF:(id)arg1 ;
+(id)writableTypeIdentifiersForItemProvider;
+(BOOL)isBasicImageMimeType:(id)arg1 ;
+(id)attachmentElementHTMLStringWithAttributes:(id)arg1 ;
+(BOOL)isSinglePagePDF:(id)arg1 ;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)isPass;
-(NSString *)contentType;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(unsigned long long)_imageScale;
-(BOOL)isMedia;
-(BOOL)isPDFFile;
-(BOOL)isCalendarFile;
-(NSString *)className;
-(id)filenameStrippingZipIfNeededUseApplications:(BOOL)arg1 ;
-(BOOL)isDisplayableImage;
-(id)_contentTypeByStrippingZipIfNeeded:(BOOL)arg1 ;
-(BOOL)_isContentTypeDisplayableByMobileMail;
-(CGSize)imageDimensionsWithData:(id)arg1 ;
-(double)constrainedWidth;
-(id)_imageScalingKeyForImageScale:(unsigned long long)arg1 ;
-(BOOL)needsColorspaceConversion;
-(id)scaledImageToFit:(unsigned long long)arg1 saveScaledImage:(BOOL)arg2 attachmentContextID:(id)arg3 ;
-(unsigned long long)imageScalingFlags;
-(void)_setImageScale:(unsigned long long)arg1 ;
-(BOOL)isBasicImage;
-(BOOL)isDisplayableByWebKit;
-(BOOL)isDisplayableInline;
-(BOOL)isRestrictedMIMEType;
-(BOOL)isContentOpenable;
-(CGSize)markupSizeForImageScale:(unsigned long long)arg1 ;
-(id)passWithError:(id*)arg1 ;
-(BOOL)isContentCompressed;
-(void)compressContentsWithCompletion:(/*^block*/id)arg1 ;
-(void)decompressContentsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isCameraRollCompatibleVideo;
-(unsigned long long)scaledFileSizeForScale:(unsigned long long)arg1 ;
-(void)enqueueScaleAttachmentWithCompletionBlock:(/*^block*/id)arg1 ;
-(unsigned long long)scaledFileSize;
-(BOOL)isDisplayableInsidePlugin;
-(id)markupStringForDisplayWithData:(id)arg1 allowAttachmentElement:(BOOL)arg2 ;
-(id)markupStringForCompositionWithPrependedBlankLine:(BOOL)arg1 imageScale:(unsigned long long)arg2 useAttachmentElement:(BOOL)arg3 ;
-(CGSize)imageDimensions;
-(void)setImageDimensions:(CGSize)arg1 ;
-(MFAttachmentPlaceholder *)placeholder;
-(id)fileAttributes;
-(BOOL)isPlaceholder;
-(MFMimePart *)part;
-(void)setDisposition:(NSString *)arg1 ;
-(BOOL)conformsToType:(id)arg1 ;
-(BOOL)isAvailable;
-(void)setEventID:(NSString *)arg1 ;
-(NSString *)path;
-(NSString *)eventID;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(void)setPlaceholder:(MFAttachmentPlaceholder *)arg1 ;
-(NSString *)contentID;
-(unsigned long long)hash;
-(BOOL)isImageFile;
-(EMMailDropMetadata *)mailDropMetadata;
-(id)fetchPlaceholderData;
-(id)fetchDataSynchronously:(id*)arg1 stripPrivateMetadata:(BOOL)arg2 ;
-(id)fetchCompletionBlock;
-(BOOL)isCached;
-(BOOL)isMailDrop;
-(id)fileURL;
-(id)readFromDisk;
-(BOOL)isDataAvailableLocally;
-(BOOL)isContainedInRFC822;
-(id)fetchLocalData:(id*)arg1 stripPrivateMetadata:(BOOL)arg2 ;
-(BOOL)isContainedInCompose;
-(id)filterData:(id)arg1 ;
-(id)fetchLocalData;
-(id)fetchDataSynchronously:(id*)arg1 ;
-(id)filterVCSData:(id)arg1 ;
-(unsigned long long)encodedFileSize;
-(BOOL)contentTypeConformsToEventVCS;
-(NSString *)icsRepresentation;
-(BOOL)isRFC822;
-(BOOL)isVideoFile;
-(id)fileNameByStrippingZipIfNeeded:(BOOL)arg1 ;
-(id)_fileUTTypeForFileName:(id)arg1 ;
-(BOOL)isPDFFile;
-(id)fetchData;
-(BOOL)_isSinglePagePDFFileFetchLocalData:(BOOL)arg1 ;
-(unsigned long long)decodedFileSize;
-(id)textEncodingGuessWithData:(id)arg1 ;
-(NSString *)fileUTType;
-(BOOL)contentTypeConformsToEventICS;
-(id)initWithURL:(id)arg1 attachmentManager:(id)arg2 ;
-(id)decodeFilterWithDataConsumer:(id)arg1 ;
-(BOOL)isMediaFile;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(id)fetchDataToURL:(id*)arg1 ;
-(id)fileWrapperUsingFetchedLocalData;
-(BOOL)isMailDropPhotoArchive;
-(void)setMailDropMetadata:(EMMailDropMetadata *)arg1 ;
-(id)newDownloadProgress;
-(id)filterICSData:(id)arg1 ;
-(BOOL)isCalendarFile;
-(void)setMeetingStorePersistentID:(NSString *)arg1 ;
-(void)setIcsRepresentation:(NSString *)arg1 ;
-(BOOL)hasCalendarMetadata;
-(BOOL)isAutoArchive;
-(BOOL)shouldAutoDownload;
-(NSString *)inferredMimeType;
-(NSString *)remoteImageFileName;
-(void)setRemoteImageFileName:(NSString *)arg1 ;
-(id)attachmentContentTypeForFileName:(id)arg1 ;
-(BOOL)isSinglePagePDFFile;
-(void)setDecodedFileSize:(unsigned long long)arg1 ;
-(void)setEncodedFileSize:(unsigned long long)arg1 ;
-(void)writeToDiskWithData:(id)arg1 ;
-(BOOL)contentTypeConformsToVCard;
-(id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2 ;
-(BOOL)contentTypeConformsToEvent;
-(BOOL)contentTypeConformsToProvisionment;
-(BOOL)contentTypeConformsToMarkup;
-(BOOL)contentTypeConformsToPassbook;
-(BOOL)contentTypeConformsToIWork;
-(NSItemProvider *)attachmentDataProvider;
-(id<MFDataConsumer>)customConsumer;
-(void)setAttachmentDataProvider:(NSItemProvider *)arg1 ;
-(void)setCustomConsumer:(id<MFDataConsumer>)arg1 ;
-(BOOL)wantsCompletionBlockOffMainThread;
-(void)setWantsCompletionBlockOffMainThread:(BOOL)arg1 ;
-(void)setContentID:(NSString *)arg1 ;
-(void)setFetchCompletionBlock:(id)arg1 ;
-(NSString *)description;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(NSString *)disposition;
-(void)setMimeType:(NSString *)arg1 ;
-(id)_dataProvider;
-(id)metadataValueForKey:(id)arg1 ;
-(NSString *)meetingStorePersistentID;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPart:(MFMimePart *)arg1 ;
-(unsigned long long)sizeOnDisk;
-(NSString *)mimeType;
-(CGSize)imageDimensions;
-(void)setImageDimensions:(CGSize)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
@end
