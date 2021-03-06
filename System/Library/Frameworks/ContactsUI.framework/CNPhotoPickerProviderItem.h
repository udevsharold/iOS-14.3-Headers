/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol CNScheduler, CNPhotoPickerProviderItemDelegate;
@class NSData, NSString, NSDate, UIImage;

@interface CNPhotoPickerProviderItem : NSObject <NSCopying> {

	BOOL _allowsEditing;
	NSData* _thumbnailImageData;
	NSString* _recentsIdentifier;
	NSString* _localizedVariantDisplayName;
	id<CNScheduler> _renderingQueue;
	id<CNScheduler> _callbackQueue;
	NSDate* _sortDate;
	id<CNPhotoPickerProviderItemDelegate> _delegate;
	UIImage* _fullSizeImage;
	UIImage* _croppedFullSizeImage;
	UIImage* _thumbnailImage;
	UIImage* _loadingPlaceholderImage;
	NSData* _imageData;
	NSData* _fullscreenImageData;
	NSData* _filteredImageData;
	NSString* _imageFilterName;
	CGRect _cropRect;

}

@property (nonatomic,retain) UIImage * fullSizeImage;                                            //@synthesize fullSizeImage=_fullSizeImage - In the implementation block
@property (nonatomic,retain) UIImage * croppedFullSizeImage;                                     //@synthesize croppedFullSizeImage=_croppedFullSizeImage - In the implementation block
@property (nonatomic,retain) UIImage * thumbnailImage;                                           //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,retain) UIImage * loadingPlaceholderImage;                                  //@synthesize loadingPlaceholderImage=_loadingPlaceholderImage - In the implementation block
@property (nonatomic,retain) NSData * imageData;                                                 //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSData * thumbnailImageData;                                        //@synthesize thumbnailImageData=_thumbnailImageData - In the implementation block
@property (nonatomic,retain) NSData * fullscreenImageData;                                       //@synthesize fullscreenImageData=_fullscreenImageData - In the implementation block
@property (nonatomic,retain) NSData * filteredImageData;                                         //@synthesize filteredImageData=_filteredImageData - In the implementation block
@property (nonatomic,retain) NSString * imageFilterName;                                         //@synthesize imageFilterName=_imageFilterName - In the implementation block
@property (nonatomic,retain) NSString * localizedVariantDisplayName;                             //@synthesize localizedVariantDisplayName=_localizedVariantDisplayName - In the implementation block
@property (nonatomic,readonly) NSData * originalImageData; 
@property (nonatomic,retain) NSString * recentsIdentifier;                                       //@synthesize recentsIdentifier=_recentsIdentifier - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;                                                  //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,readonly) unsigned long long imageType; 
@property (assign,nonatomic) BOOL allowsEditing;                                                 //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (nonatomic,readonly) BOOL allowsVariants; 
@property (nonatomic,readonly) BOOL allowsMoveAndScale; 
@property (nonatomic,readonly) BOOL shouldShowCaption; 
@property (nonatomic,readonly) NSString * localizedVariantsTitle; 
@property (nonatomic,readonly) NSString * variantIdentifier; 
@property (nonatomic,readonly) id<CNScheduler> renderingQueue;                                   //@synthesize renderingQueue=_renderingQueue - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> callbackQueue;                                    //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSDate * sortDate;                                                  //@synthesize sortDate=_sortDate - In the implementation block
@property (assign,nonatomic,__weak) id<CNPhotoPickerProviderItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)thumbnailViewForImage:(id)arg1 ;
-(id)initWithImageData:(id)arg1 thumbnailImageData:(id)arg2 fullscreenImageData:(id)arg3 imageFilterName:(id)arg4 cropRect:(CGRect)arg5 renderingQueue:(id)arg6 callbackQueue:(id)arg7 ;
-(id<CNScheduler>)callbackQueue;
-(void)updateContact:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)cropRect;
-(NSData *)imageData;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(UIImage *)thumbnailImage;
-(id<CNScheduler>)renderingQueue;
-(unsigned long long)hash;
-(NSDate *)sortDate;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)variantIdentifier;
-(unsigned long long)imageType;
-(BOOL)allowsVariants;
-(NSData *)thumbnailImageData;
-(BOOL)allowsMoveAndScale;
-(void)setDelegate:(id<CNPhotoPickerProviderItemDelegate>)arg1 ;
-(UIImage *)fullSizeImage;
-(BOOL)shouldShowCaption;
-(id)initWithImageData:(id)arg1 thumbnailImageData:(id)arg2 fullscreenImageData:(id)arg3 cropRect:(CGRect)arg4 ;
-(NSString *)localizedVariantsTitle;
-(NSData *)originalImageData;
-(void)generateAllImageDatasIfNeeded;
-(void)setSortDate:(NSDate *)arg1 ;
-(id)generateThumbnailImageDataIfNeeded;
-(id)generateThumbnailImageDataWithData:(id)arg1 ;
-(void)clearThumbnailImage;
-(void)thumbnailViewWithPlaceholderProvider:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)thumbnailViewWithCompletion:(/*^block*/id)arg1 ;
-(void)fullSizeViewWithCompletion:(/*^block*/id)arg1 ;
-(UIImage *)croppedFullSizeImage;
-(void)applyVariantEffectToFullsizeImageWithCompletion:(/*^block*/id)arg1 ;
-(void)updateVisualIdentity:(id)arg1 ;
-(id)createVariantsItemsWithVariantsManager:(id)arg1 ;
-(id)generatePhotoFilterVariants;
-(NSString *)imageFilterName;
-(id)rotateImageDataIfNeeded:(id)arg1 ;
-(id)contactImageForMetadataStore;
-(void)updateTintColorIfNeeded:(id)arg1 ;
-(void)setThumbnailImageData:(NSData *)arg1 ;
-(NSString *)recentsIdentifier;
-(void)setRecentsIdentifier:(NSString *)arg1 ;
-(void)setFullSizeImage:(UIImage *)arg1 ;
-(NSString *)localizedVariantDisplayName;
-(void)setLocalizedVariantDisplayName:(NSString *)arg1 ;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(void)setCroppedFullSizeImage:(UIImage *)arg1 ;
-(UIImage *)loadingPlaceholderImage;
-(void)setLoadingPlaceholderImage:(UIImage *)arg1 ;
-(NSData *)fullscreenImageData;
-(void)setFullscreenImageData:(NSData *)arg1 ;
-(NSData *)filteredImageData;
-(void)setFilteredImageData:(NSData *)arg1 ;
-(void)setImageFilterName:(NSString *)arg1 ;
-(BOOL)allowsEditing;
-(void)setImageData:(NSData *)arg1 ;
-(id<CNPhotoPickerProviderItemDelegate>)delegate;
@end

